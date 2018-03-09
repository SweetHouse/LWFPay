//
//  WFCompleteInfoView.h
//  Demo
//
//  Created by Administrator on 2017/6/2.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"
#import "WFVerificationView.h"
#import "WFCompleteTipsView.h"
@interface WFCompleteInfoView : WFBassView<UITextFieldDelegate>
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UIImageView * logo;//logo
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)WFTextField * phoneNum;//手机号
@property (nonatomic,strong)WFTextField * password1;//密码
@property (nonatomic,strong)WFTextField * password2;//确认密码
@property (nonatomic,strong)UIButton * verification;//验证图片
@property (nonatomic,strong)WFTextField * verificationLabel;//验证码输入框
@property (nonatomic,strong)UIButton * login;//登录
@property (nonatomic,strong)WFVerificationView * verificationView;//短信验证页面
@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
