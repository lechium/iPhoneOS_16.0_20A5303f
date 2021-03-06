//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PCSimpleTimer;
@protocol APSDecayTimerDelegate;

@interface APSDecayTimer : NSObject
{
    unsigned long long _maxCost;	// 8 = 0x8
    unsigned long long _hourlyCostThreshold;	// 16 = 0x10
    unsigned long long _currentCost;	// 24 = 0x18
    NSDate *_lastCostDecayAdjustment;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    PCSimpleTimer *_decayTimer;	// 48 = 0x30
    id <APSDecayTimerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000095ed1
@property(readonly, nonatomic) unsigned long long currentCost; // @synthesize currentCost=_currentCost;
- (void)_clearDecayTimer;	// IMP=0x0010000000095e95
- (void)_decayTimerFired;	// IMP=0x0010000000095dcc
- (void)_decayCost;	// IMP=0x0010000000095b2b
- (void)_handleSignificantTimeChange;	// IMP=0x0010000000095a72
- (void)forceTimerFire;	// IMP=0x0010000000095a60
- (void)addCost:(unsigned long long)arg1;	// IMP=0x0010000000095a2e
- (void)performDecay;	// IMP=0x0010000000095a1c
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000095a0b
- (void)dealloc;	// IMP=0x00100000000959b4
- (id)initWithHourlyCostThreshold:(unsigned long long)arg1 costMaximum:(unsigned long long)arg2 identifier:(id)arg3;	// IMP=0x001000000009584e

@end

