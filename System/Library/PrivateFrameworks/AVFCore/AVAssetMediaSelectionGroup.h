//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMediaSelectionGroup.h"

@class AVAsset, AVMediaSelectionOption, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup
{
    AVAsset *_asset;	// 16 = 0x10
    NSDictionary *_dictionary;	// 24 = 0x18
    NSArray *_groupMediaCharacteristics;	// 32 = 0x20
    NSArray *_options;	// 40 = 0x28
    AVMediaSelectionOption *_defaultOption;	// 48 = 0x30
    _Bool _isStreamingGroup;	// 56 = 0x38
}

- (id)mediaSelectionOptionWithPropertyList:(id)arg1;	// IMP=0x000000000012e389
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;	// IMP=0x000000000012e36f
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(_Bool)arg4;	// IMP=0x000000000012e0b3
- (id)defaultOption;	// IMP=0x000000000012e0a2
- (_Bool)_isStreamingGroup;	// IMP=0x000000000012e092
- (id)_groupMediaCharacteristics;	// IMP=0x000000000012e081
- (id)dictionary;	// IMP=0x000000000012e070
- (id)asset;	// IMP=0x000000000012e05f
- (id)options;	// IMP=0x000000000012e04e
- (unsigned long long)hash;	// IMP=0x000000000012e001
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012df4e
- (void)dealloc;	// IMP=0x000000000012deda
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;	// IMP=0x000000000012dbaf
- (id)init;	// IMP=0x000000000012db99

@end

