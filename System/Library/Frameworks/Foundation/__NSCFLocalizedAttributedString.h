//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSCFLocalizedAttributedString : NSString
{
    NSAttributedString *_original;	// 8 = 0x8
    NSString *_apparentString;	// 16 = 0x10
    NSDictionary *_formatConfiguration;	// 24 = 0x18
}

+ (id)stringEncapsulatingBaseAttributedString:(id)arg1;	// IMP=0x001000000045966d
+ (const struct __CFString *)createStringRequiringInflectionWithFormat:(struct __CFString *)arg1 formatOptions:(struct __CFDictionary *)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000458f0b
+ (const struct __CFString *)copyStringWithMarkdown:(struct __CFString *)arg1 formatConfiguration:(struct __CFDictionary *)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(struct __CFURL *)arg4;	// IMP=0x0010000000458ecb
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x0000000000459889
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000459874
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000459857
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x000000000045983a
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000045981d
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x0000000000459800
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x00000000004597e3
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004597c6
- (unsigned long long)fastestEncoding;	// IMP=0x00000000004597a9
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000045978c
- (unsigned long long)length;	// IMP=0x000000000045976f
- (id)__baseAttributedString;	// IMP=0x000000000045975e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000459741
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000459736
- (id)formatConfiguration;	// IMP=0x0000000000459725
- (void)dealloc;	// IMP=0x000000000045969c
- (id)_initWithAttributedString:(id)arg1;	// IMP=0x0000000000459590
- (id)initWithAttributedStringMarkdown:(id)arg1 formatConfiguration:(id)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(id)arg4;	// IMP=0x0000000000459057
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000459005
- (Class)classForCoder;	// IMP=0x0000000000458ff4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000458fc0

@end
