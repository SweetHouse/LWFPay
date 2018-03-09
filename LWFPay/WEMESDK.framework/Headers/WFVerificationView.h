//
//  WFVerificationView.h
//  Demo
//
//  Created by Administrator on 2017/5/31.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"
#import "WFNewPasswordView.h"
#import "WFCompleteTipsView.h"
@interface WFVerificationView : WFBassView
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UIImageView * logo;//logo
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UILabel * phoneNumberLabel;//手机号码label
@property (nonatomic,strong)WFTextField * verificationNumberTextField;//验证码输入框
@property (nonatomic,strong)UILabel * errorLabel;//验证码错误
@property (nonatomic,strong)UIButton * next;//下一步
@property (nonatomic,strong)WFNewPasswordView * passwordView;//设置新密码界面

@property (nonatomic,strong)WFCompleteTipsView * boundTipsView;//绑定成功后的登录提示

@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
