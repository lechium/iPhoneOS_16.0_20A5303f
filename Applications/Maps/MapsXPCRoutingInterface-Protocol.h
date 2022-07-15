//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IPCLoadDirectionsMessage, IPCStartNavigationMessage;

@protocol MapsXPCRoutingInterface <NSObject>
- (void)endNavigationWithReply:(void (^)(IPCNavigationActionReply *))arg1;
- (void)startPreparedNavigation:(IPCStartNavigationMessage *)arg1 reply:(void (^)(IPCNavigationActionReply *))arg2;
- (void)loadDirections:(IPCLoadDirectionsMessage *)arg1 reply:(void (^)(IPCLoadDirectionsReply *))arg2;
- (void)dismissNavigationSafetyAlertWithReply:(void (^)(_Bool))arg1;
@end
