//
//  DYYFloatWindow.h
//  testTab
//
//  Created by 杜阳阳 on 16/7/29.
//  Copyright © 2016年 杜阳阳. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WFFloatView : UIWindow

@property (nonatomic,copy) void(^clickBolcks)(NSInteger i);

//重要：所有图片都要是圆形的，程序里并没有自动处理成圆形

//  warning: frame的长宽必须相等
- (instancetype)initWithFrame:(CGRect)frame bgcolor:(UIColor *)bgcolor;

// 浮窗显示
- (void)showWindow;

// 浮窗隐藏
- (void)dissmissWindow;

@end
