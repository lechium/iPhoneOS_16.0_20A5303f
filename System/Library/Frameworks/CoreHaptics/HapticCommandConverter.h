//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HapticServerConfig;

__attribute__((visibility("hidden")))
@interface HapticCommandConverter : NSObject
{
    HapticServerConfig *_serverConfig;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018434
@property(readonly) HapticServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
- (id)CHtoAVParameterCurve:(id)arg1;	// IMP=0x0000000000017dc4
- (id)eventForParameterCurveEntry:(id)arg1;	// IMP=0x0000000000017bcd
- (id)eventForDynamicParameterEntry:(id)arg1;	// IMP=0x0000000000016689
- (id)eventForEventEntry:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3;	// IMP=0x00000000000155e4
- (id)eventForSPIEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000014cd4
- (id)eventForContinuousHapticEventType:(int)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000013fbf
- (unsigned long long)continuousHapticEventTypeForDefaultSharpness:(_Bool)arg1;	// IMP=0x0000000000013f45
- (unsigned long long)continuousHapticEventTypeFromSharpness:(float)arg1 sustained:(_Bool)arg2;	// IMP=0x0000000000013e38
- (id)eventForLegacyTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x0000000000012dc9
- (id)eventForTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x00000000000120dd
- (unsigned long long)transientHapticEventTypeForDefaultSharpness;	// IMP=0x0000000000012069
- (unsigned long long)transientHapticEventTypeFromSharpness:(float)arg1;	// IMP=0x0000000000011f81
- (id)eventForAudioEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000011163
- (id)initWithServerConfig:(id)arg1;	// IMP=0x00000000000110e4

@end

