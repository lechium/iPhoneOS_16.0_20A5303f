//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMutableRadioPlaybackHistory, MPCModelGenericAVItemUserIdentityPropertySet, MPCPlaybackRequestEnvironment, MPPropertySet, MPSectionedCollection, NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MPCModelRadioPlaybackQueueStationTracksCollection : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSHashTable *_activeModelGenericAVItems;	// 16 = 0x10
    _Bool _isSiriInitiated;	// 24 = 0x18
    MPPropertySet *_itemProperties;	// 32 = 0x20
    ICMutableRadioPlaybackHistory *_playbackHistory;	// 40 = 0x28
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;	// 48 = 0x30
    MPSectionedCollection *_trackModels;	// 56 = 0x38
    MPSectionedCollection *_tracks;	// 64 = 0x40
    MPCModelGenericAVItemUserIdentityPropertySet *_identityPropertySet;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000019e411
@property(retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet; // @synthesize identityPropertySet=_identityPropertySet;
@property(readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;
@property(readonly, copy, nonatomic) MPSectionedCollection *trackModels; // @synthesize trackModels=_trackModels;
- (id)trackForItemAtIndex:(long long)arg1;	// IMP=0x000000000019e379
- (long long)removeExplicitItems;	// IMP=0x000000000019e22c
- (void)removeAllItems;	// IMP=0x000000000019e18f
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;	// IMP=0x000000000019dfdd
- (id)AVItemAtIndex:(long long)arg1;	// IMP=0x000000000019dd0b
- (void)updateWithPersonalizedResponse:(id)arg1;	// IMP=0x000000000019d52d
@property(readonly, nonatomic) ICMutableRadioPlaybackHistory *playbackHistory;
- (id)initWithPlaybackContext:(id)arg1;	// IMP=0x000000000019d454

@end

