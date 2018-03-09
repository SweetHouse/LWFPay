//
//  WFChangeCountTipsView.h
//  Demo
//
//  Created by Administrator on 2017/6/23.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WFBassView.h"
@interface WFChangeCountTipsView : WFBassView
@property (nonatomic,copy)void(^block)(NSInteger tag);
@end
