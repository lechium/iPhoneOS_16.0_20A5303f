//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SCROBrailleAdditions)
- (struct _NSRange)rangeOfWordAfterWordAtIndex:(long long)arg1;	// IMP=0x0090000000006ed3
- (struct _NSRange)rangeOfWordBeforeWordAtIndex:(long long)arg1;	// IMP=0x0090000000006dec
- (struct _NSRange)rangeOfWordContainingIndex:(long long)arg1;	// IMP=0x0090000000006b96
- (struct _NSRange)_rangeIsolatingIllegalCharacters:(struct _NSRange)arg1 forwards:(_Bool)arg2;	// IMP=0x0090000000006af0
- (id)_legalWhiteSpaceSet;	// IMP=0x00900000000069d9
- (id)_illegalCharacterSet;	// IMP=0x009000000000696d
@end
