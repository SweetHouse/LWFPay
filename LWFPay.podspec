Pod::Spec.new do |s|
  s.name         = "LWFPay"
  s.version      = "1.1"
  s.summary      = "weme支付用SDK"
  s.description  = <<-DESC
                    weme支付用SDK
                   DESC
  s.homepage     = "https://github.com/SweetHouse/LWFPay"
  
  s.license      = 'MIT'
  s.author       = { "SweetHouse" => "360347343@qq.com" }
  s.source       = { :git => "https://github.com/SweetHouse/LWFPay.git", :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.source_files = 'LWFPay/**/*.{h,m,bundle,framework}'
  #s.frameworks = 'Foundation', 'UIKit'
  #s.private_header_files = 'Classes/ios/private/*.h'
  
  #s.dependency 'FLKAutoLayout', '~> 0.1'
end