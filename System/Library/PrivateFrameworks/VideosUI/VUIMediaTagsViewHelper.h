//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateComponentsFormatter, NSMutableDictionary, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsViewHelper : NSObject
{
    NSMutableDictionary *_tagsViewDictionary;	// 8 = 0x8
    NSDateComponentsFormatter *_dateComponentFormatter;	// 16 = 0x10
    NSNumberFormatter *_tomatoPercentFormatter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000164b7
- (id)_commonSenseString:(id)arg1;	// IMP=0x00000000000163fd
- (void)_mediaBagdesWithVUIMediaEntity:(id)arg1;	// IMP=0x0000000000015f96
- (id)_durationDescriptionFromDuration:(id)arg1;	// IMP=0x0000000000015edc
- (id)_releaseDateDescriptionFromDate:(id)arg1;	// IMP=0x0000000000015e29
- (_Bool)_isValidNumber:(id)arg1;	// IMP=0x0000000000015d9a
- (void)addSeperatorKey:(id)arg1;	// IMP=0x0000000000015d7a
- (id)tagsViewDictionary;	// IMP=0x0000000000015d5c
- (id)initWithVUIMediaEntity:(id)arg1;	// IMP=0x0000000000015a2d
- (id)initWithVUIMediaItem:(id)arg1;	// IMP=0x0000000000015872
- (id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2;	// IMP=0x00000000000144fa

@end

