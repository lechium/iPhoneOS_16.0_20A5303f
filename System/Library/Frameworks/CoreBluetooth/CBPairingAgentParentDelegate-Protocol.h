//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreBluetooth/NSObject-Protocol.h>

@class CBPeer, NSDictionary;

@protocol CBPairingAgentParentDelegate <NSObject>
- (NSDictionary *)sendSyncMsg:(int)arg1 args:(NSDictionary *)arg2;
- (_Bool)sendMsg:(int)arg1 args:(NSDictionary *)arg2;
- (CBPeer *)peerWithInfo:(NSDictionary *)arg1;
@end

