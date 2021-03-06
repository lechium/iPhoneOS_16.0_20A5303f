//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol BDSMediaLibraryManagerObserver, OS_dispatch_queue;

@interface BDSMediaLibraryManager : NSObject
{
    id <BDSMediaLibraryManagerObserver> _observer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSMutableSet *_assetIDSet;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000724dd
@property(retain, nonatomic) NSMutableSet *assetIDSet; // @synthesize assetIDSet=_assetIDSet;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue; // @synthesize observerCallbackQueue=_observerCallbackQueue;
@property(nonatomic) __weak id <BDSMediaLibraryManagerObserver> observer; // @synthesize observer=_observer;
- (id)aq_assetInfoForRepresentativeMediaItem:(id)arg1;	// IMP=0x0010000000072388
- (id)aq_BDSMediaLibraryItemFromCollection:(id)arg1;	// IMP=0x0010000000071f3b
- (void)aq_performInitialFetch;	// IMP=0x00100000000719a7
- (void)_mediaLibraryDidChange:(id)arg1;	// IMP=0x001000000007112b
- (void)_performInitialFetch;	// IMP=0x001000000007104d
- (id)_medialibrarySyncAnchor;	// IMP=0x0010000000070e4a
- (void)_recordSyncValidity:(id)arg1;	// IMP=0x0010000000070dcd
- (id)_syncValidity;	// IMP=0x0010000000070d6f
- (void)_recordSyncAnchor:(id)arg1;	// IMP=0x0010000000070cf2
- (id)_syncAnchor;	// IMP=0x0010000000070c94
- (void)endObserving;	// IMP=0x0010000000070c50
- (void)beginObserving;	// IMP=0x0010000000070c3e
- (id)allAssetIDs;	// IMP=0x0010000000070ae0
- (id)init;	// IMP=0x00100000000708ea

@end

