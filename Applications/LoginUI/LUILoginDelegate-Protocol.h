//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LUILoginDelegate <NSObject>
- (void)loginWithUsername:(NSString *)arg1 password:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

