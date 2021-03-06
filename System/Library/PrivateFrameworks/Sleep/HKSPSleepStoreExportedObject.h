//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSPSleepStore;

__attribute__((visibility("hidden")))
@interface HKSPSleepStoreExportedObject : NSObject
{
    HKSPSleepStore *_sleepStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003a1ad
@property(nonatomic) __weak HKSPSleepStore *sleepStore; // @synthesize sleepStore=_sleepStore;
- (void)sleepModeChanged:(id)arg1;	// IMP=0x0000000000039fea
- (void)sleepScheduleStateChanged:(id)arg1;	// IMP=0x0000000000039e37
- (void)sleepEventOccurred:(id)arg1;	// IMP=0x0000000000039cf4
- (id)_mergeExternalSleepEventRecordChange:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x0000000000039b04
- (void)sleepEventRecordChanged:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x000000000003993d
- (id)_mergeExternalSleepSettingsChange:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x000000000003974a
- (void)sleepSettingsChanged:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x0000000000039583
- (id)_mergeExternalSleepScheduleChange:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x0000000000039393
- (void)sleepScheduleChanged:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x000000000003913a
- (void)clientShouldCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038f9c
- (void)getClientIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038e36

@end

