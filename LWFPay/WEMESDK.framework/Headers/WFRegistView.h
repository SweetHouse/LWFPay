//
//  RegistView.h
//  Demo
//
//  Created by Administrator on 2017/5/26.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"
#import "WFOnekeyRegistView.h"
#import "WFProtocolView.h"
@interface WFRegistView : WFBassView
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UIImageView * logo;//logo
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UIButton * phoneRegist;//手机注册
@property (nonatomic,strong)UIButton * oneKeyRegist;//一键注册
@property (nonatomic,strong)WFOnekeyRegistView * oneKeyRegistView;//一键注册页面
@property (nonatomic,strong)UIButton * haveCountLogin;//已有账号登录
@property (nonatomic,strong)UILabel * tipsLabel;//注册weme表示你同意
@property (nonatomic,strong)UIButton * protocolButton;//最终用户协议
@property (nonatomic,strong)WFProtocolView * protocolView;//协议页面
@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
