//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class MISSING_TYPE;

@interface NSString (FRAdditions)
+ (double)fr_trackingForFeedHeaderType:(long long)arg1;	// IMP=0x00100000000b7285
+ (double)fr_leadingForFeedHeaderType:(long long)arg1;	// IMP=0x00100000000b7238
+ (id)fr_fontForFeedHeaderType:(long long)arg1;	// IMP=0x00100000000b7190
+ (_Bool)fr_shouldTitlecaseForFeedHeaderType:(long long)arg1;	// IMP=0x00100000000b7167
+ (id)fr_attributesLookup;	// IMP=0x00100000000b6bbd
+ (id)fr_fontLookup;	// IMP=0x00100000000b6708
- (double)heightConstrainedToWidth:(double)arg1 font:(id)arg2 singleLine:(_Bool)arg3;	// IMP=0x00100000000ac675
- (_Bool)fr_hasPrefixEquivalentToString:(id)arg1;	// IMP=0x00100000000ac5e8
- (_Bool)fr_isEquivalentToString:(id)arg1;	// IMP=0x00100000000ac5ca
- (id)fr_lowerCaseStringByTrimmingWhiteSpace;	// IMP=0x00100000000ac51c
- (MISSING_TYPE *)fr_StringByTrimmingLeadingWhiteSpace;	// IMP=0x00100000000ac416
- (id)fr_accessibilityAttributedStringForHighPriorityAnnouncement;	// IMP=0x00100000000ac3fa
- (id)fr_accessibilityAttributedStringWithLowPitchPrefix:(id)arg1;	// IMP=0x00100000000ac2d9
- (id)fr_accessibilityLowPitchAttributedString;	// IMP=0x00100000000ac2bd
- (id)fr_stringByDecodingHTMLEntities;	// IMP=0x00100000000abf35
- (id)fr_stripHTMLTags;	// IMP=0x00100000000abda1
- (id)fr_encodeHTMLEntities;	// IMP=0x00100000000abcf9
- (id)fr_convertNewlinesToPTags;	// IMP=0x00100000000abaf4
- (id)fr_stringInitials;	// IMP=0x00100000000ab756
- (id)fr_attributedStringForHeaderType:(long long)arg1;	// IMP=0x00100000000b72c2
@end

