//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSUUID;
@protocol HDTaskServer;

@protocol HDTaskServerEndpointDelegate <NSObject>
- (void)taskServerDidInvalidate:(id <HDTaskServer>)arg1;
- (void)taskServerDidFailToInitializeForUUID:(NSUUID *)arg1;
- (void)taskServerDidFinishInitialization:(id <HDTaskServer>)arg1;
@end

