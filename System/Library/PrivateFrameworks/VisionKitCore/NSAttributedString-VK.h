//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (VK)
- (id)vk_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x00300000000b1943
- (id)vk_attributedStringByReplacingNewlineCharactersWithWhiteSpace;	// IMP=0x00300000000b18d6
- (void)vk_enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00300000000b1749
- (void)vk_enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00300000000b153b
- (id)vk_attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x00300000000b14b8
@property(readonly, nonatomic) struct _NSRange vk_range;
@end
