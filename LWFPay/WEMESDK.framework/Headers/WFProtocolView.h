//
//  WFProtocolView.h
//  Demo
//
//  Created by Administrator on 2017/6/13.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"
@interface WFProtocolView : WFBassView<UIWebViewDelegate>
@property (nonatomic,strong)UIWebView * webView;
@property (nonatomic,strong)UIActivityIndicatorView * activityIndicator;//菊花
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,copy)void(^backBlock)();

- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
