//
//  WFNewPasswordView.h
//  Demo
//
//  Created by Administrator on 2017/6/1.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"
@class WFNewPasswordOKView;
@interface WFNewPasswordView : WFBassView<UITextFieldDelegate>
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UIImageView * logo;//logo
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UILabel * phoneNumberLabel;//手机号码label
@property (nonatomic,strong)WFTextField * passwordTextField;//新密码输入框
@property (nonatomic,strong)UILabel * errorLabel;//错误提示
@property (nonatomic,strong)UIButton * next;//下一步
@property (nonatomic,strong)WFNewPasswordOKView * passwordOkView;//修改成功页面
@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
