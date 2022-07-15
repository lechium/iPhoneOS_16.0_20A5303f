//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (ChromeContextCoordinationSchedulerHelpers)
+ (id)_navigation_newArrayWithDefaultValue:(id)arg1 withCapacity:(unsigned long long)arg2;	// IMP=0x001000000055d84f
+ (_Bool)array:(id)arg1 isEqualToArray:(id)arg2;	// IMP=0x00100000009c27e1
+ (id)_maps_commonPrefixSharedBetweenArray:(id)arg1 suffix:(out id *)arg2 andArray:(id)arg3 suffix:(out id *)arg4;	// IMP=0x0010000000afead2
- (id)_maps_subarrayToIndex:(unsigned long long)arg1;	// IMP=0x0020000000130c6a
- (id)_maps_subarrayFromIndex:(unsigned long long)arg1;	// IMP=0x0010000000130be3
- (id)_maps_lastContextOfClass:(Class)arg1;	// IMP=0x0010000000130aac
- (id)_maps_firstContextOfClass:(Class)arg1;	// IMP=0x0010000000130952
- (_Bool)_maps_containsContextOfClass:(Class)arg1;	// IMP=0x00100000001308cb
- (_Bool)_maps_containsSearchResultEqualToResult:(id)arg1 forPurpose:(long long)arg2;	// IMP=0x001000000085c8f6
- (id)_maps_lastModeOfClass:(Class)arg1;	// IMP=0x00100000008c4ce8
- (id)_maps_firstModeOfClass:(Class)arg1;	// IMP=0x00100000008c4b8e
- (_Bool)_maps_containsModeOfClass:(Class)arg1;	// IMP=0x00100000008c4b07
- (id)_maps_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x00100000009c2a15
- (id)_maps_map:(CDUnknownBlockType)arg1;	// IMP=0x00100000009c2852
- (_Bool)_maps_isPrefixOfArray:(id)arg1;	// IMP=0x0010000000afe8cb
@property(readonly, nonatomic) NSArray *carShortenedArray;
@end
