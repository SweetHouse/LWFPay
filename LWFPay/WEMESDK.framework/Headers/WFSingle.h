//
//  WFSingle.h
//  Demo
//
//  Created by Administrator on 2017/5/31.
//  Copyright © 2017年 dyy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import<CommonCrypto/CommonDigest.h>
#import "WFMainWindow.h"
NS_ASSUME_NONNULL_BEGIN
@interface WFSingle : NSObject
+ (instancetype)shareSingle;
@property (nonatomic,strong)WFMainWindow * mainWindow;

@property (nonatomic,copy)NSString * game_id;//游戏ID（初始化接口处获取）
@property (nonatomic,copy)NSString * game_name;//游戏名称
@property (nonatomic,copy)NSString * game_status;//游戏关闭状态
@property (nonatomic,copy)NSString * verify_phone;//验证码手机号
@property (nonatomic,copy)NSString * verify_password;//验证码手机号的密码
@property (nonatomic,copy)NSString * verify_code;//短信验证码
@property (nonatomic,assign)int verify_CDtime;//短信验证码CD时间
@property (nonatomic,assign)BOOL verify_toLogin;//是否验证完毕后直接登录
@property (nonatomic,assign)BOOL verify_boundtoLogin;//是否验证完毕后绑定后登录
@property (nonatomic,copy)NSString * login_token;//登录token
@property (nonatomic,copy)NSString * userid;//用户名(并不是登录用的账号)
@property (nonatomic,assign)NSInteger isBound;//是否为手机绑定账号（1是，2不是）

//MD5加密
+ (NSString *)md5:(NSString *)input;
#pragma mark - encrypt&decrypt
// return base64 encoded string
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;
// return raw data
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;
// return base64 encoded string
// enc with private key NOT working YET!
//+ (NSString *)encryptString:(NSString *)str privateKey:(NSString *)privKey;
// return raw data
//+ (NSData *)encryptData:(NSData *)data privateKey:(NSString *)privKey;
// decrypt base64 encoded string, convert result to string(not base64 encoded)
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;
+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;
+ (NSData *)decryptData:(NSData *)data privateKey:(NSString *)privKey;
+ (NSString *)decryptJsonStringWithencryptString:(NSString *)string;//需分割解密的加密字符串解密
+ (NSString *)dictionaryTojsonString:(NSDictionary *)dictionary;//字典转json
+ (NSDictionary *)jsonStringToDictionary:(NSString *)jsonString;//json转字典

@end
NS_ASSUME_NONNULL_END
