//
//  WFNewPasswordOKView.h
//  Demo
//
//  Created by Administrator on 2017/6/1.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"

@interface WFNewPasswordOKView : WFBassView
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UIButton * loginButton;//登录按钮
@property (nonatomic,strong)UILabel * tipsLabel;//提示语
@property (nonatomic,strong)NSString * count;//账号
@property (nonatomic,strong)NSString * password;//密码
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
