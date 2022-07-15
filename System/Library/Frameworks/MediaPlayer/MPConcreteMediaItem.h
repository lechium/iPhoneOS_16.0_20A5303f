//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaItem.h"

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPConcreteMediaItem : MPMediaItem
{
    MPMediaLibrary *_library;	// 8 = 0x8
    unsigned long long _persistentID;	// 16 = 0x10
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_utilitySerialQueue;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012c446
+ (id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x001000000012c3e7
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x001000000012c2f7
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;	// IMP=0x001000000012c288
- (void).cxx_destruct;	// IMP=0x000000000012b696
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000012b604
- (_Bool)incrementPlayCountForStopTime:(double)arg1;	// IMP=0x000000000012b52b
- (void)incrementPlayCountForPlayingToEnd;	// IMP=0x000000000012b4ec
- (void)incrementSkipCount;	// IMP=0x000000000012b492
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;	// IMP=0x000000000012b3fc
- (_Bool)didSkipWithPlayedToTime:(double)arg1;	// IMP=0x000000000012b35a
- (double)nominalHasBeenPlayedThreshold;	// IMP=0x000000000012b32f
- (void)markNominalAmountHasBeenPlayed;	// IMP=0x000000000012b318
- (void)incrementPlayCount;	// IMP=0x000000000012b2be
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012afa2
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000012ad1d
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000012abf7
- (id)valuesForProperties:(id)arg1;	// IMP=0x000000000012a816
- (id)cachedValueForProperty:(id)arg1 isCached:(_Bool *)arg2;	// IMP=0x000000000012a7f9
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000012a622
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(_Bool *)arg2;	// IMP=0x000000000012a3c8
- (unsigned long long)persistentID;	// IMP=0x000000000012a3b7
- (id)mediaLibrary;	// IMP=0x000000000012a3a2
- (_Bool)existsInLibrary;	// IMP=0x000000000012a377
- (Class)classForCoder;	// IMP=0x000000000012a366
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012a2a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012a1e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012a1d9
- (id)description;	// IMP=0x000000000012a15a
- (void)invalidateCachedProperties;	// IMP=0x000000000012a13d
@property(readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;
- (void)dealloc;	// IMP=0x000000000012a062
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;	// IMP=0x0000000000129f3c
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x0000000000129f02
- (id)initWithPersistentID:(unsigned long long)arg1;	// IMP=0x0000000000129ec8
- (id)init;	// IMP=0x0000000000129e89

@end
