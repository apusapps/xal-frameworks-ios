
Pod::Spec.new do |s|
  s.name             = 'XALFrameworks'
  s.version          = '0.1.4'
  s.summary          = 'A short description of XALFrameworks.'

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://git.apuscn.com:8443/XAL-iOS-ObjC/xalframeworks'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'cuixuerui' => 'cuixuerui@apusapps.com' }
  s.source           = { :git => 'https://git.apuscn.com:8443/XAL-iOS-ObjC/xalframeworks.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'
  
  s.subspec "APSLibraryAdapter" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSLibraryAdapter.framework"
      ss.dependency 'XALFrameworks/APSActivate'
      ss.dependency 'XALFrameworks/APSCloud'
      ss.dependency 'XALFrameworks/APSSupport3rd'
      ss.dependency 'XALFrameworks/APSAlex'
  end
  
  s.subspec "APSActivate" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSActivate.framework"
      ss.dependency 'XALFrameworks/APSUtilities'
      ss.dependency 'XALFrameworks/APSZeus'
      ss.dependency 'XALFrameworks/APSMiddleware'
      ss.dependency 'XALFrameworks/APSSdkService'
      ss.dependency 'XALFrameworks/APSAdjust'
      
      ss.dependency 'FlatBuffers-ObjC', '0.0.2'
      
  end
  
  s.subspec "APSCloud" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSCloud.framework"
      ss.dependency 'XALFrameworks/APSZeus'
      ss.dependency 'XALFrameworks/APSMiddleware'
      ss.dependency 'XALFrameworks/APSSdkService'
      ss.dependency 'XALFrameworks/APSUtilities'
      
      ss.dependency 'FMDB', '2.7.5'
      ss.dependency 'FlatBuffers-ObjC', '0.0.2'
  end
  
  s.subspec "APSAlex" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSAlex.framework"
      ss.dependency 'XALFrameworks/APSUtilities'
      ss.dependency 'XALFrameworks/APSZeus'
      ss.dependency 'XALFrameworks/APSMiddleware'
      ss.dependency 'XALFrameworks/APSSdkService'
      
      ss.dependency 'FlatBuffers-ObjC', '0.0.2'
      ss.dependency 'FMDB', '2.7.5'
      
  end
  
  s.subspec "APSSupport3rd" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSSupport3rd.framework"
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/du.framework"
      
      ss.dependency 'Adjust', '4.18.0'
      ss.dependency 'Flurry-iOS-SDK', '9.3.1'
      
  end
  
  s.subspec "APSMiddleware" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSMiddleware.framework"
  end
  
  s.subspec "APSSdkService" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSSdkService.framework"
  end
  
  s.subspec "APSZeus" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSZeus.framework"
      ss.dependency 'XALFrameworks/APSLogServer'
      ss.dependency 'XALFrameworks/APSCompression'
      
      ss.dependency 'AFNetworking', '3.2.1'
  end
  
  s.subspec "APSAdjust" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSAdjust.framework"
      
      ss.dependency 'Adjust', '4.18.0'
  end
  
  s.subspec "APSCompression" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSCompression.framework"
  end

  s.subspec "APSLogServer" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSLogServer.framework"
      
      ss.dependency 'GCDWebServer', '3.5.2'
  end
  
  s.subspec "APSUtilities" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSUtilities.framework"
      
      ss.dependency 'Reachability', '3.2'
      ss.dependency 'SAMKeychain', '1.5.3'
  end

  s.subspec "APSRouter" do |ss|
      ss.ios.vendored_frameworks = "XALFrameworks/Frameworks/APSRouter.framework"
  end
  
end
