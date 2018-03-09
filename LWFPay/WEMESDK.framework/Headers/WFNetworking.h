//
//  WFNetworking.h
//  afn
//
//  Created by MacBook on 16/12/13.
//  Copyright © 2016年 MacBook. All rights reserved.
//


#define MIMETYPE @[@"audio/x-mpeg",@"image/jpeg",@"image/png"]
//请求类型
typedef NS_ENUM(NSUInteger, WFHttpMethod) {
    GET   = 0,    //GET请求
    POST  = 1     //POST请求
};
//返回数据类型
typedef NS_ENUM(NSUInteger, WFResponseType) {
    JSONResponseSerializer = 0,
    HTTPResponseSerializer = 1
};
//上传媒体的类型
typedef NS_ENUM(NSInteger,WFMediaType){
    mp3 = 0,
    jpg = 1,
    png = 2
};
@interface WFNetworking : NSObject
@property (nonatomic,strong)NSFileManager * fileManager;//文件管理器
@property (nonatomic,strong)UIActivityIndicatorView * activityIndicatorView;//菊花
+ (instancetype)deafultManeger;
- (void)requestURL:(NSString *)URLString HttpMethod:(WFHttpMethod)method Parameters:(id)parameters ResponseSerializerType:(WFResponseType)type Timeout:(CGFloat)time Description:(NSString *)description Succeed:(void (^)(id result))succeed Failure:(void (^)(NSError * err))failure;
- (void)uploadUrl:(NSString *)URLString FileData:(id)data Name:(NSString *)name FileName:(NSString *)filename Formate:(WFMediaType)mp3 Parameters:(id)parameters ResponseSerializerType:(WFResponseType)type Succeed:(void (^)(id result))succeed Failure:(void (^)(NSError * err))failure;
- (void)downloadUrl:(NSString *)URLString ToPath:(NSString *)ToPath Succeed:(void (^)(NSString *filePathURL))succeed Failure:(void (^)(NSError * err))failure;
- (void)ShowMessage:(NSString *)Message;//简单提示
- (void)showActivityIndicator;//显示菊花
- (void)stopActivityIndicator;//隐藏菊花
@end
