//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol AssetDataConsumer <NSObject>
- (void)truncateWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)suspendWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)resetWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)prepareWithCompletionHandler:(void (^)(unsigned long long, NSError *))arg1;
- (void)finishWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)consumeData:(NSData *)arg1 withCompletionHandler:(void (^)(NSError *, _Bool))arg2;
- (void)consumeData:(NSData *)arg1 andWaitWithCompletionHandler:(void (^)(NSError *, _Bool))arg2;
@end
