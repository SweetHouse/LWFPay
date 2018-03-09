//
//  WFLoginTableViewCell.h
//  Demo
//
//  Created by Administrator on 2017/6/24.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WFLoginTableViewCell : UITableViewCell
@property (nonatomic,copy)void(^delblock)();
@property (nonatomic,strong)UILabel * userid;//用户名账号
@property (nonatomic,strong)UILabel * gamename;//游戏名称
@property (nonatomic,strong)UIButton * delButton;//删除按钮

+ (instancetype)cellWithTabeleView:(UITableView *)tableView;
@end
