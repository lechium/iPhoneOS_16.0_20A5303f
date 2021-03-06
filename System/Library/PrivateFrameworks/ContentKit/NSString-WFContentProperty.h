//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (WFContentProperty)
+ (id)wf_datedFilenameWithTypeString:(id)arg1 fileExtension:(id)arg2;	// IMP=0x0010000000007b3d
+ (id)wf_stringWithData:(id)arg1;	// IMP=0x00100000000a76e4
- (id)stringByAppendingAsNewLine:(id)arg1;	// IMP=0x0010000000007128
- (id)wf_filenameTruncatedToMaximumLength;	// IMP=0x0010000000007a12
- (id)wf_filenameTruncatedToMaximumLengthWithSuffix:(id)arg1;	// IMP=0x0010000000007624
- (id)gtm_stringByUnescapingFromHTML;	// IMP=0x001000000003a161
- (id)gtm_stringByEscapingForAsciiHTML;	// IMP=0x001000000003a13d
- (id)gtm_stringByEscapingForHTML;	// IMP=0x001000000003a11c
- (id)gtm_stringByEscapingHTMLUsingTable:(CDStruct_6a59ab51 *)arg1 ofSize:(unsigned long long)arg2 escapingUnicode:(_Bool)arg3;	// IMP=0x0010000000039ec0
- (_Bool)wf_hasStrongRTLCharacter;	// IMP=0x001000000003d9e4
- (id)wf_stringByReplacingNewlinesWithSpaces;	// IMP=0x001000000009c77a
- (_Bool)wf_stringContainsNewlineCharacters;	// IMP=0x001000000009c720
- (id)wf_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x001000000009c672
- (_Bool)wf_stringContainsCharacterInSet:(id)arg1;	// IMP=0x001000000009c64f
- (id)wf_stringByTrimmingTrailingWhitespaceAndNewlineCharacters;	// IMP=0x001000000009c5e9
- (id)wf_stringByTrimmingLeadingWhitespaceAndNewlineCharacters;	// IMP=0x001000000009c583
- (id)wf_stringByTrimmingTrailingCharactersInSet:(id)arg1;	// IMP=0x001000000009c4f0
- (id)wf_stringByTrimmingLeadingCharactersInSet:(id)arg1;	// IMP=0x001000000009c463

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

