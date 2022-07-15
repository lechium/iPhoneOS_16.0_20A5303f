//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaLibraryInterface : NSObject
{
}

- (id)_storePlatformKindForMediaItem:(id)arg1;	// IMP=0x00000000000fa73b
- (void)_restrictQueryToLocalContent:(id)arg1;	// IMP=0x00000000000fa695
- (id)_newDefaultQuery;	// IMP=0x00000000000fa59e
- (unsigned long long)_AVTypesForMediaItem:(id)arg1;	// IMP=0x00000000000fa576
- (long long)_availabilityForMediaItem:(id)arg1;	// IMP=0x00000000000fa392
- (void)removeMediaItemsForLibraryItems:(id)arg1;	// IMP=0x00000000000fa003
- (id)stateForLibraryItem:(id)arg1;	// IMP=0x00000000000f9c83
- (_Bool)isItemLocalAudiobook:(id)arg1;	// IMP=0x00000000000f9b38
- (_Bool)performActionForLibraryItem:(id)arg1;	// IMP=0x00000000000f9370
- (id)exposedPlatformItemKinds;	// IMP=0x00000000000f931c
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f8d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
