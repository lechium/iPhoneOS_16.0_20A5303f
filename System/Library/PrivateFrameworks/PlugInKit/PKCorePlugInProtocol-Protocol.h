//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol PKCorePlugInProtocol
@property(copy) NSDictionary *_userInfo;
- (void)prefsSetObject:(id)arg1 forKey:(NSString *)arg2 inPlugIn:(NSString *)arg3 result:(void (^)(void))arg4;
- (void)prefsObjectForKey:(NSString *)arg1 inPlugIn:(NSString *)arg2 result:(void (^)(id))arg3;
- (void)shutdownPlugIn;
- (void)hostHasControl;
- (void)beginUsingPlugIn:(id)arg1 ready:(void (^)(PKServicePersonality *, id))arg2;
- (void)prepareUsing:(NSDictionary *)arg1 reply:(void (^)(NSError *, NSDictionary *))arg2;
- (void)prepareUsingPlugIn:(NSString *)arg1 hostProtocol:(NSString *)arg2 reply:(void (^)(NSArray *))arg3;
@end
