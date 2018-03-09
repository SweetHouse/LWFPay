//
//  WFForgetView.h
//  Demo
//
//  Created by Administrator on 2017/5/31.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"
#import "WFForgetCountView.h"
#import "WFForgetPasswordView.h"
@interface WFForgetView : WFBassView
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UIButton * regainCount;//找回账号
@property (nonatomic,strong)UIButton * regainPassword;//找回密码
@property (nonatomic,strong)WFForgetCountView * forgetCountView;
@property (nonatomic,strong)WFForgetPasswordView * forgetPasswordView;
@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
