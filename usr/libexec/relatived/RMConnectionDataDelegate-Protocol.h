//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, RMConnectionEndpoint;

@protocol RMConnectionDataDelegate <NSObject>
- (void)endpoint:(RMConnectionEndpoint *)arg1 didReceiveMessage:(NSString *)arg2 withData:(NSData *)arg3 replyBlock:(void (^)(NSString *, NSData *))arg4;
@end

