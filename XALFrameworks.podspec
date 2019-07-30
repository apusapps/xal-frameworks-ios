
Pod::Spec.new do |s|
  s.name             = 'XALFrameworks'
  s.version          = '0.1.0'
  s.summary          = 'A short description of XALFrameworks.'

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://git.apuscn.com:8443/XAL-iOS-ObjC/xalframeworks'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'xueminlee' => 'lixuemin@apusapps.com' }
  s.source           = { :git => 'https://git.apuscn.com:8443/XAL-iOS-ObjC/xalframeworks.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'XALFrameworks/Frameworks/**/*'
end
