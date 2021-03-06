//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (IC)
+ (id)ic_shortNameFromGivenName:(id)arg1 familyName:(id)arg2;	// IMP=0x0020000000014044
+ (id)ic_newURLForContentID:(id)arg1 percentEscaped:(_Bool)arg2;	// IMP=0x0020000000013ea1
+ (_Bool)ic_isCharacterInlineAttachmentPrefix:(unsigned short)arg1;	// IMP=0x0020000000013dcf
+ (id)ic_NSAttachmentCharacterString;	// IMP=0x002000000001176c
- (_Bool)ic_isCaseInsensitiveEqualToString:(id)arg1;	// IMP=0x0010000000014185
- (id)ic_dataValue;	// IMP=0x001000000001402d
@property(readonly, copy, nonatomic) NSString *ic_mentionString;
- (id)ic_stringWithoutSuffix:(id)arg1;	// IMP=0x0010000000013d22
@property(readonly, copy, nonatomic) NSString *ic_hashtagDisplayText;
@property(readonly, copy, nonatomic) NSString *ic_withoutHashtagPrefix;
@property(readonly, copy, nonatomic) NSString *ic_withHashtagPrefix;
- (id)ic_tokenSafeText;	// IMP=0x0010000000013a7e
- (id)ic_truncatedStringWithMaxLength:(unsigned long long)arg1 truncated:(_Bool *)arg2;	// IMP=0x0010000000013985
- (id)ic_stringByTrimmingLeadingCharactersInSet:(id)arg1;	// IMP=0x00100000000138e8
- (unsigned long long)ic_countOfCharactersInSet:(id)arg1;	// IMP=0x001000000001381b
- (struct _NSRange)ic_safeCharacterRangeForRange:(struct _NSRange)arg1;	// IMP=0x00100000000137cf
- (_Bool)ic_isLastCharacterInRangeANewlineForRange:(struct _NSRange)arg1;	// IMP=0x001000000001372b
@property(readonly, nonatomic) unsigned long long ic_lengthOfLongestLine;
- (struct _NSRange)ic_sentenceRangeForRange:(struct _NSRange)arg1;	// IMP=0x001000000001349f
- (struct _NSRange)ic_paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;	// IMP=0x0010000000013441
- (id)ic_stringByReplacingLeadingFullWidthHashSignIfPossible;	// IMP=0x001000000001334e
- (id)ic_stringByReplacingCharactersInStringMap:(id)arg1;	// IMP=0x0010000000012c62
- (id)ic_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000012b0a
- (id)ic_stringByReplacingNewlineCharactersWithWhiteSpace;	// IMP=0x0010000000012a9d
- (id)ic_checkedSubstringWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000012a45
- (id)ic_substringWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000012a11
- (id)ic_substringToIndex:(unsigned long long)arg1;	// IMP=0x0010000000012987
- (id)ic_substringFromIndex:(unsigned long long)arg1;	// IMP=0x0010000000012956
- (void)ic_enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012883
- (void)ic_enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000127bc
@property(readonly, nonatomic) _Bool ic_isNumeric;
@property(readonly, nonatomic) _Bool ic_containsHashtagPrefix;
@property(readonly, nonatomic) _Bool ic_containsWhitespaceCharacters;
@property(readonly, nonatomic) _Bool ic_containsAlphanumericCharacters;
@property(readonly, nonatomic) _Bool ic_containsNonWhitespaceAndAttachmentCharacters;
@property(readonly, nonatomic) _Bool ic_containsNonWhitespaceCharacters;
- (id)ic_uniqueWordsWithMinLength:(unsigned long long)arg1;	// IMP=0x0010000000012131
@property(readonly, nonatomic) unsigned long long ic_numberOfLines;
@property(readonly, nonatomic) _Bool ic_isLastCharacterANewline;
@property(readonly, nonatomic) NSString *ic_stringByRemovingAttachmentCharacters;
@property(readonly, nonatomic) NSString *ic_stringReplacingUnsafeXMLCharacters;
@property(readonly, nonatomic) NSString *ic_stringReplacingUnsafeHTMLCharacters;
- (struct _NSRange)ic_lineRangeIgnoringLineBreakCharactersForIndex:(unsigned long long)arg1;	// IMP=0x0010000000011ec5
- (_Bool)ic_rangeIsValid:(struct _NSRange)arg1;	// IMP=0x0010000000011e8d
@property(readonly, nonatomic) NSString *ic_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *ic_whitespaceAndNewlineCoalescedString;
@property(readonly, nonatomic) NSString *ic_leadingTrimmedString;
@property(readonly, nonatomic) NSString *ic_trailingTrimmedString;
@property(readonly, nonatomic) NSString *ic_trimmedString;
@property(readonly, nonatomic) NSString *ic_htmlStringEscapingQuotesAndLineBreaks;
- (id)ic_sha256;	// IMP=0x00100000000117e3
- (id)ic_md5;	// IMP=0x0010000000011793
@property(readonly, nonatomic) struct _NSRange ic_range;
- (id)_HTMLTagNameClosing:(_Bool *)arg1;	// IMP=0x00100000000144b5
- (struct _NSRange)_HTMLRangeOfLastTagBeforeIndex:(unsigned long long)arg1;	// IMP=0x001000000001435a
- (unsigned long long)ic_HTMLInsertionPoint;	// IMP=0x001000000001419e
@end

