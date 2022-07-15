//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class HKHealthStore, HKHeartRhythmAvailability, NSString;

@interface COSOptinViewController : BPSWelcomeOptinViewController
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKHeartRhythmAvailability *_heartRhythmAvailability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ff9ef
@property(retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)defaultImageResource;	// IMP=0x00100000000ff776
- (_Bool)wantsDefaultImageResource;	// IMP=0x00100000000ff76e
- (id)imageResource;	// IMP=0x00100000000ff72a
- (void)finishedActivating;	// IMP=0x00100000000ff60e
- (void)didEstablishHold;	// IMP=0x00100000000ff539
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000000ff372
- (id)holdActivityIdentifier;	// IMP=0x00100000000ff365
- (_Bool)requiresActivationCheck;	// IMP=0x00100000000ff35d
- (id)init;	// IMP=0x00100000000ff2c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
