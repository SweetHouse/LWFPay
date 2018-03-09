//
//  WFMainWindow.h
//  Demo
//
//  Created by Administrator on 2017/5/26.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WFHelloView.h"
#import "WFLoginView.h"
#import "WFRegistView.h"
#import "WFOnekeyRegistView.h"
#import "WFNewPasswordOKView.h"
#import "WFVerificationView.h"
#import "WFForgetCountView.h"
#import "WFProtocolView.h"
#import "WFFloatView.h"
#import <StoreKit/StoreKit.h>
@interface WFMainWindow : UIWindow<SKPaymentTransactionObserver,SKProductsRequestDelegate>
@property (nonatomic,assign)BOOL isLandscape;//是否横屏
@property (nonatomic,strong)UIView * contentView;//主要内容
@property (nonatomic,strong)WFHelloView * helloView;//闪屏欢迎页面
@property (nonatomic,strong)WFLoginView * loginView;//登录页面
@property (nonatomic,strong)WFRegistView * registView;//注册选择页面
@property (nonatomic,strong)WFOnekeyRegistView * oneKeyRegistView;//一键注册页面
@property (nonatomic,strong)WFNewPasswordOKView * passwordOKView;//密码修改成功页面
@property (nonatomic,strong)WFVerificationView * verificationView;//未注册手机号验证页面
@property (nonatomic,strong)WFForgetCountView * forgetCoutView;//忘记账号页面
@property (nonatomic,strong)WFProtocolView * protocolView;//协议页面
@property (nonatomic,strong)WFTipsView * tipsView;//提示框
@property (nonatomic,strong)UIActivityIndicatorView * activityIndicator;//菊花
@property (nonatomic,strong)WFFloatView * floatView;//浮球
@property (nonatomic,copy)void(^LoginBlock)(NSString * userId,NSString * token);//登录成功回调
@property (nonatomic,copy)void(^PayBlock)(NSInteger status);//支付成功回调
#pragma mark - SDK参数
@property (nonatomic,assign)UIDeviceOrientation orientation;//设备方向
@property (nonatomic,copy)NSString * uuid;//设备UUID
@property (nonatomic,copy)NSString * package_name;//包名
@property (nonatomic,copy)NSString * version;//游戏版本号

- (instancetype)initWithConfig:(NSDictionary *)config;
- (void)Pay:(NSDictionary *)param;

@end
