//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SafariSharedExtras)
+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000019746
- (id)safari_possibleTopLevelDomainCorrectionForUserTypedString;	// IMP=0x00100000000193e8
- (id)safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;	// IMP=0x00100000000191a2
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainFromHost;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;	// IMP=0x00100000000199c7
- (_Bool)_webkit_looksLikeAbsoluteURL;	// IMP=0x0010000000019e37
- (struct _NSRange)_webkit_rangeOfURLScheme;	// IMP=0x0010000000019d2f
- (id)_webkit_stringByTrimmingWhitespace;	// IMP=0x0010000000019e99
@end
