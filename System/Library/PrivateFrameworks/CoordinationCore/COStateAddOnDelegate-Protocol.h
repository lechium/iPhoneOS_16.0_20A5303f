//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COStateAddOn, NSDictionary;

@protocol COStateAddOnDelegate <NSObject>
- (void)stateForAddOn:(COStateAddOn *)arg1 withCallback:(void (^)(NSDictionary *))arg2;
- (void)addOn:(COStateAddOn *)arg1 receivedUpdates:(NSDictionary *)arg2 removals:(NSDictionary *)arg3;
@end
