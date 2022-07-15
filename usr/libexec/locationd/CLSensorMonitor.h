//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLSensorMonitor : CLIntersiloService
{
}

+ (_Bool)isSupported;	// IMP=0x00200000002b7ded
+ (id)getSilo;	// IMP=0x00100000002b7d91
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000002b7d78
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002b7d1b
- (void)sensorWriter:(id)arg1 didReceiveUpdateToConfigurationRequests:(id)arg2;	// IMP=0x00200000002b7ea2
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x00100000002b7e9c
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x00100000002b7e96
- (Class)classForSensorIdentifier:(id)arg1;	// IMP=0x00100000002b7e8e
- (void)onAppUninstallationCheckActivity:(id)arg1;	// IMP=0x00100000002b7e88
- (void)endService;	// IMP=0x00100000002b7e5d
- (void)beginService;	// IMP=0x00100000002b7e32
- (id)init;	// IMP=0x00100000002b7df5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
