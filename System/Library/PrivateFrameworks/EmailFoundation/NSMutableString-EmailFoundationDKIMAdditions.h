//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (EmailFoundationDKIMAdditions)
- (void)ef_appendQuotedSQLEscapedString:(id)arg1;	// IMP=0x006000000001e8c5
- (void)ef_appendSQLEscapedString:(id)arg1;	// IMP=0x006000000001e862
- (void)ef_trimTrailingCharactersInSet:(id)arg1;	// IMP=0x006000000001e77b
- (void)ef_trimLeadingCharactersInSet:(id)arg1;	// IMP=0x006000000001e6c9
- (void)ef_replaceContiguousSequencesOfCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x006000000001e59e
- (void)ef_removeCharactersInSet:(id)arg1 beforeOccurrencesOfString:(id)arg2;	// IMP=0x006000000001e3ca
- (void)ef_rfc5322Unfold;	// IMP=0x006000000001e298
@end

