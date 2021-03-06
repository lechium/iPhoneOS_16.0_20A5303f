//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SRTCCStore <NSObject>
- (_Bool)checkAccessForService:(NSString *)arg1 auditToken:(CDStruct_6ad76789)arg2;
- (void)requestAccessForService:(NSString *)arg1 completion:(void (^)(unsigned char))arg2;
- (long long)preflightAuthorizationStatusForService:(NSString *)arg1;
- (_Bool)setValue:(_Bool)arg1 forService:(NSString *)arg2 bundleId:(NSString *)arg3;
- (_Bool)resetService:(NSString *)arg1 forBundleId:(NSString *)arg2;
- (_Bool)resetService:(NSString *)arg1;
- (_Bool)setOverride:(_Bool)arg1 forService:(NSString *)arg2;
- (NSArray *)informationForBundleId:(NSString *)arg1;
- (_Bool)isOverriddenForService:(NSString *)arg1;
- (NSArray *)bundleIdentifiersDisabledForService:(NSString *)arg1;
- (NSArray *)bundleIdentifiersForService:(NSString *)arg1;
@end

