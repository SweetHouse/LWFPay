//
//  WFBassView.h
//  Demo
//
//  Created by Administrator on 2017/6/1.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WFTextField.h"
#import "Massonry.h"
#import "WFNetworking.h"
#import "WFTipsView.h"
#define SELFWIDTH self.frame.size.width
#define SELFHEIGHT self.frame.size.height
#define WFBOUNDS ([[UIScreen mainScreen] bounds])//设备尺寸
#define WFWIDTH (WFBOUNDS.size.width)       //设备宽度
#define WFHEIGHT (WFBOUNDS.size.height)     //设备高度
#define MYRATE [UIScreen mainScreen].bounds.size.width>500?[UIScreen mainScreen].bounds.size.height/375:[UIScreen mainScreen].bounds.size.width/375
#define MYHEXCOLOR(s) [UIColor colorWithRed:(((s  & 0xFF0000) >> 16))/255.0 green:(((s &0xFF00) >>8))/255.0 blue:((s &0xFF))/255.0 alpha:1.0]//16进制颜色
#define WEAKOBJ(OBJ) __weak typeof(OBJ) weak##OBJ = OBJ//生成弱引用对象（weakself等）
#define IMAGENAME(name) [UIImage imageNamed:name]

#define WFNETWORKING [WFNetworking deafultManeger]//网络请求管理器
#define WFSINGLE [WFSingle shareSingle]//单利管理

#define Version @"2.2.0"
#define URLString [@"https://p.wemesdk.com/" stringByAppendingFormat:@"%@/dispatch.php",Version]
#define REQUESTURL(class,cmd) [URLString stringByAppendingFormat:@"?v_class=%d&v_cmd=%d",class,cmd]
#define PUBLICKEY @"-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDzfcQWYCfcCtxQBi0vsZ0VVoB+\nDY5GR7vH1bKvUQtGxVqlJFQBu6jH1FxQY1A59XZHVUe9oGc4cBkUUaem60/027d0\n584H6rJammFIpztD6PBNmeedUcKUt7qM/S+olHBFuMuC5Q7yAZFeQ0GHDcQ0jS1h\ny70nU5iaqQaqAlxLfwIDAQAB\n-----END PUBLIC KEY-----"
NS_ASSUME_NONNULL_BEGIN
@interface WFBassView : UIView

@end
NS_ASSUME_NONNULL_END
