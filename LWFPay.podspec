Pod::Spec.new do |s|
  s.name         = "LWFPay"
  s.version      = "1.2"
  s.summary      = "weme支付用SDK"
  s.description  = <<-DESC
                    功能:登录-支付-常见问题
                   DESC
  s.homepage     = "https://github.com/SweetHouse/LWFPay"
  
  s.license      = 'MIT'
  s.author       = { "SweetHouse" => "360347343@qq.com" }
  s.source       = { :git => "https://github.com/SweetHouse/LWFPay.git", :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true

  #s.source_files = 'LWFPay/**/*.{h,m,bundle,framework}'#普通代码文件
  #s.frameworks = 'Foundation', 'UIKit'#依赖库
  s.vendored_frameworks = 'LWFPay/WEMESDK.framework'#自己的framework
  s.resource = 'LWFPay/WEMESDK_Bundle.bundle'#自己的bundle
  #s.libraries = 'c++.1','z'#系统的依赖库,省略lib开头
  #s.private_header_files = 'Classes/ios/private/*.h'
  
  #s.dependency 'FLKAutoLayout', '~> 0.1'
end