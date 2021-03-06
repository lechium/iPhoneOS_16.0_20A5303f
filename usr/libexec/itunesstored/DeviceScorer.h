//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DeviceScorerContext, MISSING_TYPE;

@interface DeviceScorer : NSObject
{
    DeviceScorerContext *_context;	// 8 = 0x8
}

+ (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00400000000345b4
+ (id)_valueForKey:(id)arg1;	// IMP=0x001000000003456c
+ (_Bool)_shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3;	// IMP=0x0010000000034333
+ (_Bool)_resultForSamplingSession:(id)arg1 isActive:(_Bool *)arg2;	// IMP=0x00100000000341c1
+ (double)_randomDouble;	// IMP=0x0010000000034187
+ (_Bool)_shouldEnableDeviceScoringV2;	// IMP=0x0010000000033d64
+ (_Bool)_shouldEnableDeviceScoring;	// IMP=0x0010000000033ce4
+ (id)_loadURLBag;	// IMP=0x0010000000033806
+ (id)_hexEncodingForData:(id)arg1;	// IMP=0x0010000000033726
+ (_Bool)deviceScoringSupportedV2;	// IMP=0x0010000000033404
+ (_Bool)deviceScoringSupported;	// IMP=0x00100000000333fc
- (void).cxx_destruct;	// IMP=0x00200000000345f4
@property(readonly) DeviceScorerContext *context; // @synthesize context=_context;
- (id)_serverEndpointIdentifierForServerEndpoint:(long long)arg1;	// IMP=0x0010000000033cca
- (void)_initDeviceScorerWithContext:(id)arg1;	// IMP=0x0010000000033800
- (MISSING_TYPE *)didConsumeDeviceScore: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000033599
- (void)deviceScoreWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003340c
- (id)initWithServerEndpoint:(long long)arg1;	// IMP=0x0010000000033350

@end

