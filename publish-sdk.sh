#!/bin/bash
projectName=$1
POD_REPO_NAME=apusapps
POD_REPO_URL=https://github.com/apusapps/spec.git
POD_REPO_MASTER_URL=https://cdn.cocoapods.org/

function createRemoteTag() {
    version=`cat ${projectName}.podspec|grep 's.version'|awk -F "[\'\']" '{print $2}'|grep "^\d"`
    echo "当前发布版本为:${version}"

    remoteTag=`git ls-remote --tags origin ${version}`
    code=$?
    echo "code = $code"
    if [ $code -eq 0 ];then
        echo $remoteTag
    else
        echo '网络连接存在问题，请检查网络连接情况.'
        exit 1
    fi

    result=`echo $remoteTag|grep ${version}`

    if [ ! -n "$result" ]; then
        echo "远程 tag 版本 ${version} 不存在，准备创建远程 tag ${version}."
        localTag=`git tag -l ${version}|grep ${version}`
        if [ ! -n "$localTag" ]; then
            echo "未发现本地 tag ${version} ，准备创建本地 tag ${version}."
            git tag -a ${version} -m "automatic publish sdk $projectName for tag ${version}"
        fi

        echo "准备推送本地 tag ${version} 到远程仓库."
        git push origin ${version}
        code=$?
        if [ $code -eq 0 ];then
            echo "公共库 $projectName 推送标签 $version 成功！！！"
        else
            echo "公共库 $projectName 推送标签 $version 失败，请检查详细的错误信息."
        fi
    else
        echo "远程 tag ${version} 已经存在，不需要再进行创建."
    fi
}

createRemoteTag

echo "开始进行lint检查."
pod lib lint ${projectName}.podspec --sources=$POD_REPO_MASTER_URL,$POD_REPO_URL --allow-warnings --skip-import-validation
if [ $? -eq 0 ];then
    echo "lint 检查通过，可以进行公共库发布"
else
    echo "lint 检查失败，请查看详细的错误日志。"
    exit 1
fi

echo "\nlint检查通过，开始进行SDK发布。\n"

echo "开始进行版本号为 ${version} 的 SDK 发布。\n"
pod repo push $POD_REPO_NAME ${projectName}.podspec --sources=$POD_REPO_MASTER_URL,$POD_REPO_URL --allow-warnings --skip-import-validation

if [ $? -eq 0 ];then
    echo "$2\n"
else
    echo "$3\n"
    exit 1
fi
