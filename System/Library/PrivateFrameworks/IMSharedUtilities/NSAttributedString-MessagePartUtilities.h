//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MessagePartUtilities)
+ (void)__im_diffPartIndexesInEditedMessage:(id)arg1 previousMessage:(id)arg2 editedPartIndexes:(out id *)arg3 removedPartIndexes:(out id *)arg4;	// IMP=0x006000000001d872
- (id)__im_messagePartIndexToRangeMap;	// IMP=0x001000000001ddea
- (id)__im_rangeToMessagePartIndexMap;	// IMP=0x001000000001dc6b
- (id)__im_messageTextByRemovingMessagePartIndex:(long long)arg1;	// IMP=0x001000000001d77e
- (id)__im_messageTextByReplacingMessagePartIndex:(long long)arg1 withNewPartText:(id)arg2;	// IMP=0x001000000001d598
- (id)__im_messagePartMatchingRange:(struct _NSRange)arg1;	// IMP=0x001000000001d2b3
- (id)__im_messagePartMatchingPartIndex:(long long)arg1;	// IMP=0x001000000001d01b
- (long long)__im_insertionIndexForMessagePartBody:(id)arg1;	// IMP=0x001000000001ce32
- (_Bool)__im_containsAttributedValue:(id)arg1;	// IMP=0x001000000001cbd4
- (id)__im_partDescriptorWithIndex:(long long)arg1 range:(struct _NSRange)arg2 totalPartCount:(unsigned long long)arg3;	// IMP=0x001000000001c8c0
- (void)__im_visitMessageParts:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c6db
- (id)__im_findLinks;	// IMP=0x001000000001c316
- (id)__im_attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x001000000001c282
- (id)__im_messagePartIndexes;	// IMP=0x001000000001c13b
- (unsigned long long)__im_countMessageParts;	// IMP=0x001000000001c03d
@end

