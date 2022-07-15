//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlatformSSO/NSObject-Protocol.h>

@class NSData, NSString, POUserConfiguration;

@protocol PODaemonProtocol <NSObject>
- (void)disablePlatformSSORuleForScreensaver:(void (^)(_Bool, NSError *))arg1;
- (void)enablePlatformSSORuleForScreensaver:(void (^)(_Bool, NSError *))arg1;
- (void)resetStoredConfigurationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)removeUserConfigurationForIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)saveUserConfiguration:(POUserConfiguration *)arg1 forIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)userConfigurationForIdentifier:(NSString *)arg1 passwordContext:(NSData *)arg2 completion:(void (^)(POUserConfiguration *, NSError *))arg3;
- (void)removeLoginConfigurationForExtension:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)saveLoginConfiguration:(NSData *)arg1 forExtension:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)loginConfigurationForExtension:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)removeDeviceConfigurationForExtension:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)saveDeviceConfiguration:(NSData *)arg1 forExtension:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)deviceConfigurationForExtension:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end
