//
//  LoginView.h
//  Demo
//
//  Created by Administrator on 2017/5/26.
//  Copyright © 2017年 dyy. All rights reserved.
//


#import "WFBassView.h"
#import "WFRegistView.h"
#import "WFForgetView.h"
@interface WFLoginView : WFBassView<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate>
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UIImageView * logo;//logo
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)WFTextField * phoneNumber;//账号
@property (nonatomic,strong)WFTextField * passWord;//密码
@property (nonatomic,strong)UITableView * tableView;//历史账号列表
@property (nonatomic,strong)NSMutableArray * dataSource;//数据源
@property (nonatomic,strong)UIButton * loginButton;//登录
@property (nonatomic,strong)UILabel * tipsLabel;//同意
@property (nonatomic,strong)UIButton * protocolButton;//用户协议
@property (nonatomic,strong)UIButton * registButton;//一键注册
@property (nonatomic,strong)UIButton * forgetButton;//忘记密码／账号
@property (nonatomic,strong)UIButton * serviceCenter;//客服中心
@property (nonatomic,strong)WFRegistView * registView;//注册视图
@property (nonatomic,strong)WFForgetView * forgetView;//找回密码视图

@property (nonatomic,copy)void(^backBlock)();
@property (nonatomic,copy)void(^loginBlock)(NSString * phonenumber,NSString * password);
@property (nonatomic,copy)void(^protocolBlock)();
@property (nonatomic,copy)void(^oneKeyRegiestBlock)();
@property (nonatomic,copy)void(^serverBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
