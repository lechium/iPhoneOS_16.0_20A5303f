//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSMutableDictionary;
@protocol CLIntersiloUniverse, OS_dispatch_queue;

@interface CLFallLoggerManager : NSObject
{
    _Bool fLoggingEnabled;	// 8 = 0x8
    NSMutableDictionary *fLoggers;	// 16 = 0x10
    id <CLIntersiloUniverse> fUniverse;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fQueue;	// 32 = 0x20
    NSMutableArray *fEventTimes;	// 40 = 0x28
    NSDate *fLastEvent;	// 48 = 0x30
    struct CLGizmoOrientation fOrientation;	// 56 = 0x38
}

+ (id)encodeHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x004000000091b42a
+ (id)encodePressure:(const Pressure_df92a120 *)arg1;	// IMP=0x001000000091b3b8
+ (id)encodeFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x001000000091b365
+ (id)encodeBinaryLog:(const struct BinaryData *)arg1;	// IMP=0x001000000091b1f8
+ (id)loggerDataTypeString:(unsigned char)arg1;	// IMP=0x001000000091a9e7
+ (unsigned char)loggerDataTypeFrom:(unsigned char)arg1;	// IMP=0x001000000091a9c8
@property(nonatomic) struct CLGizmoOrientation orientation; // @synthesize orientation=fOrientation;
@property(nonatomic, getter=isLoggingEnabled, setter=setLoggingEnabled:) _Bool loggingEnabled; // @synthesize loggingEnabled=fLoggingEnabled;
- (void)logOdometer:(const struct OdometerEntry *)arg1;	// IMP=0x001000000091b9ce
- (void)logHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x001000000091b991
- (void)logPressure:(const Pressure_df92a120 *)arg1;	// IMP=0x001000000091b954
- (void)logFilteredPressure:(const FilteredPressure_e74e912d *)arg1;	// IMP=0x001000000091b917
- (void)logSensorType:(unsigned char)arg1 data:(id)arg2 startTime:(double)arg3 timestamp:(unsigned long long)arg4;	// IMP=0x001000000091b804
- (void)logFalsePositiveSuppressionFeatures:(const FalsePositiveSuppressionFeatures_8c0e6519 *)arg1;	// IMP=0x001000000091b767
- (void)logImpactSensorData:(const struct ImpactData *)arg1;	// IMP=0x001000000091b619
- (void)logImpactEventState:(const struct ImpactEvent *)arg1;	// IMP=0x001000000091b57f
- (void)logImpactEvent:(const struct ImpactEvent *)arg1;	// IMP=0x001000000091b4fc
- (void)_forEachLoggerWithType:(unsigned char)arg1 logItem:(const struct BinaryData *)arg2;	// IMP=0x001000000091b4b3
- (void)_forEachLoggerWithType:(unsigned char)arg1 logData:(id)arg2;	// IMP=0x001000000091b049
- (void)flushData:(CDUnknownBlockType)arg1 userProfile:(id)arg2;	// IMP=0x001000000091ae59
- (void)clearAllLogs;	// IMP=0x001000000091ae02
- (void)stopLogging;	// IMP=0x001000000091adbe
- (void)_forEachLogger:(CDUnknownBlockType)arg1;	// IMP=0x001000000091ac5e
- (id)addLogger:(unsigned char)arg1 toDirectory:(id)arg2 prefix:(id)arg3 rotation:(long long)arg4;	// IMP=0x001000000091abdc
- (id)addLogger:(unsigned char)arg1;	// IMP=0x001000000091ab87
- (void)_addLogger:(id)arg1 type:(unsigned char)arg2;	// IMP=0x001000000091aaf8
- (void)dealloc;	// IMP=0x001000000091aaa5
- (id)initInUniverse:(id)arg1;	// IMP=0x001000000091aa04

@end
