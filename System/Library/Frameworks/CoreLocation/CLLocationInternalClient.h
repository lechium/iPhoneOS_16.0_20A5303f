//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CLLocationInternalClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)sharedServiceClient;	// IMP=0x006000000006c55c
- (void)notifyWeatherForecast:(id)arg1 airQualityConditions:(id)arg2 hourlyForecasts:(id)arg3 dailyForecasts:(id)arg4 latitude:(double)arg5 longitude:(double)arg6;	// IMP=0x000000000007210e
- (void)notifyPassKitPayment:(id)arg1 transaction:(id)arg2 info:(id)arg3;	// IMP=0x00000000000720c9
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;	// IMP=0x0000000000071fdd
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;	// IMP=0x0000000000071f04
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 enabled:(unsigned char)arg3;	// IMP=0x0000000000071e1c
- (unsigned char)setLocationButtonUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x0000000000071d39
- (unsigned char)setIncidentalUseMode:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x0000000000071c56
- (unsigned char)updateCorrectiveCompensationChoiceForOutstandingPrompt:(int)arg1;	// IMP=0x0000000000071b87
- (unsigned char)setAuthorizationStatusByType:(int)arg1 withCorrectiveCompensation:(int)arg2 andZoneIdentifier:(const struct __CFString *)arg3 andSubIdentityIdentifier:(const struct __CFString *)arg4 forBundleID:(const struct __CFString *)arg5 orBundlePath:(const struct __CFString *)arg6;	// IMP=0x0000000000071a84
- (const struct __CFArray *)copyActivityAlarms;	// IMP=0x00000000000719ad
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3 orAuditToken:(CDStruct_6ad76789)arg4 byLocationButton:(unsigned char)arg5 voiceInteractionEnabled:(unsigned char)arg6;	// IMP=0x000000000007188b
- (id)getAccessoryMotionSensorLogs;	// IMP=0x0000000000071872
- (id)getMotionSensorLogs;	// IMP=0x0000000000071859
- (id)getPipelinedCache;	// IMP=0x0000000000071715
- (int)getStatusBarIconState;	// IMP=0x000000000007164c
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x000000000007140e
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;	// IMP=0x00000000000711d9
- (unsigned char)copyLastLog;	// IMP=0x000000000007106b
- (id)getOdometryBatchedLocations;	// IMP=0x0000000000070cba
- (int)getAccessoryPASCDTransmissionState;	// IMP=0x0000000000070a53
- (int)getAccessoryTypeBitSet;	// IMP=0x00000000000707ec
- (void)setMapMatchingRouteHint:(CDStruct_b7b5e951 *)arg1 count:(int)arg2 routingType:(int)arg3 stepType:(int)arg4;	// IMP=0x00000000000704e8
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 location:(id)arg3 groundAltitude:(CDStruct_b141a4d0 *)arg4;	// IMP=0x00000000000703cb
- (unsigned char)getLocationForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_2fb123db *)arg5;	// IMP=0x0000000000070296
- (_Bool)deleteInterestZoneWithId:(id)arg1 registeredForBundleId:(id)arg2 orBundlePath:(id)arg3 error:(id *)arg4;	// IMP=0x000000000007010c
- (_Bool)setRelevance:(_Bool)arg1 forInterestZoneWithId:(id)arg2 registeredForBundleId:(id)arg3 orBundlePath:(id)arg4 error:(id *)arg5;	// IMP=0x000000000006ff76
- (_Bool)registerPhenolicInterestZoneWithId:(id)arg1 phenolicLocation:(int)arg2 serviceMaskOperator:(int)arg3 provenanceType:(int)arg4 forBundleId:(id)arg5 orBundlePath:(id)arg6 error:(id *)arg7;	// IMP=0x000000000006fdcf
- (_Bool)registerCircularInterestZoneWithId:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(double)arg4 serviceMaskOperator:(int)arg5 provenanceType:(int)arg6 forBundleId:(id)arg7 orBundlePath:(id)arg8 error:(id *)arg9;	// IMP=0x000000000006fc0a
- (_Bool)checkAndExerciseAuthorizationForBundleID:(id)arg1 orBundlePath:(id)arg2 services:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000006f977
- (const struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;	// IMP=0x000000000006f887
- (unsigned char)dumpLogs:(const struct __CFString *)arg1;	// IMP=0x000000000006f70f
- (unsigned char)displayStatistics;	// IMP=0x000000000006f5a1
- (unsigned char)shutdownDaemon;	// IMP=0x000000000006f436
- (unsigned char)performMigration;	// IMP=0x000000000006f2c8
- (unsigned char)getPrecisionPermission:(char *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000006efe4
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000006eef7
- (unsigned char)getGestureServiceEnabled:(char *)arg1;	// IMP=0x000000000006ee10
- (void)setGestureServiceEnabled:(unsigned char)arg1;	// IMP=0x000000000006ed27
- (id)triggerExpiredAuthorizationPurgeOnClientManager;	// IMP=0x000000000006eaed
- (double)modifyOrSetAuthorizationTime:(double)arg1 forBundleID:(id)arg2 orBundlePath:(id)arg3;	// IMP=0x000000000006e895
- (id)getTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006e607
- (id)setTemporaryAuthorizationStatusForBundleId:(id)arg1 orBundlePath:(id)arg2 statusData:(id)arg3;	// IMP=0x000000000006e31c
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)arg1;	// IMP=0x000000000006e235
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)arg1;	// IMP=0x000000000006e081
- (unsigned char)getLocationServicesEnabled:(char *)arg1;	// IMP=0x000000000006df96
- (void)setLocationServicesEnabled:(unsigned char)arg1;	// IMP=0x000000000006de8f
- (unsigned char)pingDaemon;	// IMP=0x000000000006ddca
- (unsigned char)getPrivateMode;	// IMP=0x000000000006dd03
- (void)setPrivateMode:(unsigned char)arg1;	// IMP=0x000000000006dc1a
- (id)timeZoneAtLocation:(id)arg1;	// IMP=0x000000000006d9fd
- (const void *)getLocationDefaultForKey:(const struct __CFString *)arg1;	// IMP=0x000000000006d805
- (void)setLocationDefaultForKey:(const struct __CFString *)arg1 value:(const void *)arg2;	// IMP=0x000000000006d618
- (const struct __CFArray *)copyGnssBandsInUse;	// IMP=0x000000000006d53c
- (const struct __CFDictionary *)copyZaxisStats;	// IMP=0x000000000006d460
- (const struct __CFString *)copyMicroLocationInternalVersion;	// IMP=0x000000000006d384
- (const struct __CFArray *)copyTechnologiesInUse;	// IMP=0x000000000006d2a8
- (const struct __CFDictionary *)copyActiveClientsUsingLocation;	// IMP=0x000000000006d1b9
- (const struct __CFDictionary *)copyAppsUsingLocation;	// IMP=0x000000000006d0ca
- (id)applyArchivedAuthorizationDecisions:(id)arg1;	// IMP=0x000000000006cecd
- (id)getArchivedAuthorizationDecisionsWithError:(id *)arg1;	// IMP=0x000000000006cc78
- (unsigned char)clearLocationAuthorizations;	// IMP=0x000000000006cbb3
- (unsigned char)getIncidentalUseMode:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;	// IMP=0x000000000006cac6
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 withCorrectiveCompensation:(int)arg2 forBundleID:(const struct __CFString *)arg3 orBundlePath:(const struct __CFString *)arg4;	// IMP=0x000000000006c9d0
- (id)synchronousRemoteObject;	// IMP=0x000000000006c85c
- (id)connection;	// IMP=0x000000000006c5a1

@end
