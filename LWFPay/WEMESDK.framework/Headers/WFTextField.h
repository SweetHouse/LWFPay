//
//  WFTextField.h
//  Demo
//
//  Created by Administrator on 2017/5/26.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WFTextField : UITextField
- (instancetype)initWithFrame:(CGRect)frame WithLeftView:(UIView *)lview leftMargin:(CGFloat)leftMargin RightView:(UIView *)rview rightMargin:(CGFloat)rightMargin;
@end
