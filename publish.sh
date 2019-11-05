pod lib lint --sources='https://github.com/CocoaPods/Specs.git,https://github.com/apusapps/spec.git' --allow-warnings --skip-import-validation --verbose
pod repo push apusapps-spec XALFrameworks.podspec --sources='https://github.com/CocoaPods/Specs.git,https://github.com/apusapps/spec.git' --allow-warnings --skip-import-validation --verbose

