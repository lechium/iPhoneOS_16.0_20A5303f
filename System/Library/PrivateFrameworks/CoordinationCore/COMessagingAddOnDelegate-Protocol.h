//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COMeshRequest, COMessagingAddOn;

@protocol COMessagingAddOnDelegate <NSObject>
- (void)addOn:(COMessagingAddOn *)arg1 receivedRequest:(COMeshRequest *)arg2 callback:(void (^)(COMeshResponse *, NSError *))arg3;
@end
