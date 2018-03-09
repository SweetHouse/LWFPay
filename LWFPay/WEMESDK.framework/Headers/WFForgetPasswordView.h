//
//  WFForgetPasswordView.h
//  Demo
//
//  Created by Administrator on 2017/6/2.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"
#import "WFVerificationView.h"
@interface WFForgetPasswordView : WFBassView
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UIImageView * logo;//logo
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UITextField * phoneNum;//手机号
@property (nonatomic,strong)UILabel * tipsLabel;//提示语
@property (nonatomic,strong)UIButton * verification;//验证图片
@property (nonatomic,strong)UITextField * input;//输入框
@property (nonatomic,strong)UIButton * next;//下一步
@property (nonatomic,strong)WFVerificationView * verificationView;
@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
- (void)refreshImage:(UIButton *)button;
@end
