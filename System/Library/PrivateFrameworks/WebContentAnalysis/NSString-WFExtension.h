//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;	// IMP=0x0050000000001d2c
+ (id)WF_ignorableCharacterSet;	// IMP=0x0050000000001c4f
- (id)WF_stringWithMostSignificatDomainPart;	// IMP=0x0010000000002422
- (_Bool)_isIPv4DomainAddress;	// IMP=0x001000000000238b
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x001000000000234c
- (long long)WF_numericCompare:(id)arg1;	// IMP=0x0010000000002304
- (id)WF_fuzzyStringWithWordLength:(int)arg1;	// IMP=0x001000000000225a
- (id)WF_stringByConvertingSpacesInHTMLSpaces;	// IMP=0x001000000000223a
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000002165
- (id)WF_stringByEscapingPrintfArguments;	// IMP=0x0010000000002145
- (id)WF_stringByRemovingWord:(id)arg1;	// IMP=0x0010000000002036
- (struct _NSRange)WF_rangeOfWord:(id)arg1;	// IMP=0x0010000000001ebd
- (_Bool)WF_containsWord:(id)arg1;	// IMP=0x0010000000001e9a
- (_Bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000001e77
- (_Bool)WF_containsString:(id)arg1;	// IMP=0x0010000000001e60
@end

