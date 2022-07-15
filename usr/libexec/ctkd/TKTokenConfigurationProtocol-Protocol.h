//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, TKTokenID;

@protocol TKTokenConfigurationProtocol <NSObject>
- (void)endTransactionWithReply:(void (^)(void))arg1;
- (void)updateKeychainItemsForTokenID:(TKTokenID *)arg1 items:(NSArray *)arg2 reply:(void (^)(void))arg3;
- (void)getKeychainItemsForTokenID:(TKTokenID *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)updateTokenID:(TKTokenID *)arg1 data:(NSData *)arg2 reply:(void (^)(void))arg3;
- (void)removeTokenID:(TKTokenID *)arg1 reply:(void (^)(void))arg2;
- (void)createTokenID:(TKTokenID *)arg1 persistent:(_Bool)arg2 reply:(void (^)(void))arg3;
- (void)beginTransactionWithReply:(void (^)(void))arg1;
- (void)readDataForTokenID:(TKTokenID *)arg1 reply:(void (^)(NSData *))arg2;
- (void)getTokenIDsForClassID:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)getClassIDsWithReply:(void (^)(NSArray *))arg1;
@end
