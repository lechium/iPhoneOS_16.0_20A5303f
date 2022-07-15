//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLDispatchSilo, NSString;

@interface CLHarvestExternalAdapter : NSObject
{
    void *_harvesterExternal;	// 8 = 0x8
    CLDispatchSilo *_silo;	// 16 = 0x10
    _Bool _valid;	// 24 = 0x18
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)invalidate;	// IMP=0x0010000000a4c176
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000a4c0fb
- (void)onVisit:(id)arg1;	// IMP=0x0010000000a4c0e3
- (id)initWithHarvesterExternal:(void *)arg1 andSilo:(id)arg2;	// IMP=0x0010000000a4c092

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
