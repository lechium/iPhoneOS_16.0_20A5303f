//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (PGNSStringExtensions)
- (unsigned long long)pg_levenshteinDistanceToString:(id)arg1;	// IMP=0x00700000002953f0
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x007000000029525e
- (id)pg_stringByRemovingDates;	// IMP=0x0070000000294fcb
- (id)_pg_stringByRemovingRegExPattern:(id)arg1;	// IMP=0x0070000000294c32
- (id)pg_stringByRemovingParentheses;	// IMP=0x0070000000294bcc
- (id)pg_stringByRemovingParenthesesAndBrackets;	// IMP=0x0070000000294bb3
@end
