//
//  WFOnekyRegistView.h
//  Demo
//
//  Created by Administrator on 2017/6/1.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import "WFBassView.h"

@interface WFOnekeyRegistView : WFBassView<UITextFieldDelegate>
@property (nonatomic,strong)UIButton * backButton;//返回
@property (nonatomic,strong)UILabel * titleLabel;//标题
@property (nonatomic,strong)UILabel * tipsLabel;//提示
@property (nonatomic,strong)WFTextField * passWord;//密码
@property (nonatomic,strong)UILabel * tipsLabel2;//提示2
@property (nonatomic,strong)UIButton * playButton;//进入游戏
@property (nonatomic,copy)void(^backBlock)();
- (instancetype)initWithOrientation:(UIDeviceOrientation)orient;
@end
