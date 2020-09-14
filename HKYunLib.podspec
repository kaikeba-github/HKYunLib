#
# Be sure to run `pod lib lint HKYunLib.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HKYunLib'
  s.version          = '0.1.0'
  s.summary          = 'HKYunLib Components'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'HKYunLib Components frameworks'

  s.homepage         = 'https://www.kaikeba.com'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'futao' => 'tfu@gaoxiaobang.com' }
  s.source           = { :git => 'https://github.com/kaikeba-github/HKYunLib.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'HKYunLib/Classes/**/*'
  s.vendored_frameworks = "HKYunLib/Frameworks/KKBLibrary.framework"
  
  # s.resource_bundles = {
  #   'HKYunLib' => ['HKYunLib/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'ReactiveObjC' #工程依赖的第三方库
  s.dependency 'pop'
  s.dependency 'SDWebImage'
  s.dependency 'MJRefresh'
  s.dependency 'lottie-ios'
  s.dependency 'IQKeyboardManager'
  s.dependency 'SVProgressHUD'
end
