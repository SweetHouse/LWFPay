//
//  WFForgetCountView.h
//  Demo
//
//  Created by Administrator on 2017/6/2.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"

@interface WFForgetCountView : WFBassView<UITableViewDelegate,UITableViewDataSource>
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UILabel * tipsLabel;//提示
@property (nonatomic,strong)UITableView * tableView;//历史登录账号
@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
