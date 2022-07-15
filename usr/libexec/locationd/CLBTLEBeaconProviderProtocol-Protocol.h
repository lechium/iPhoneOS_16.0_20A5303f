//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@protocol CLBTLEBeaconProviderProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetRemoveProximityZone:(const void *)arg1;
- (_Bool)syncgetAddProximityZone:(const void *)arg1;
- (void)stopScan;
- (void)startScan;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end
