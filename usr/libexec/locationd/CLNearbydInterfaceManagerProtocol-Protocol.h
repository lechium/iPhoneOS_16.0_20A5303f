//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@protocol CLNearbydInterfaceManagerClientProtocol;

@protocol CLNearbydInterfaceManagerProtocol <CLIntersiloServiceProtocol>
- (void)stopMonitoringRelayLocation:(byref id <CLNearbydInterfaceManagerClientProtocol>)arg1;
- (void)startMonitoringRelayLocation:(byref id <CLNearbydInterfaceManagerClientProtocol>)arg1;
@end

