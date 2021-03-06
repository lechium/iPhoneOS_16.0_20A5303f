//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSScanner.h"

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner
{
    NSString *scanString;	// 8 = 0x8
    NSCharacterSet *skipSet;	// 16 = 0x10
    NSCharacterSet *invertedSkipSet;	// 24 = 0x18
    id locale;	// 32 = 0x20
    unsigned long long scanLocation;	// 40 = 0x28
    struct {
        unsigned int caseSensitive:1;
        unsigned int :31;
    } flags;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x000000000056c816
- (_Bool)scanLongLong:(long long *)arg1;	// IMP=0x000000000056c7ec
- (_Bool)scanInt:(int *)arg1;	// IMP=0x000000000056c7c2
- (id)locale;	// IMP=0x000000000056c7a4
- (void)setLocale:(id)arg1;	// IMP=0x000000000056c766
- (_Bool)caseSensitive;	// IMP=0x000000000056c754
- (void)setCaseSensitive:(_Bool)arg1;	// IMP=0x000000000056c73c
- (id)charactersToBeSkipped;	// IMP=0x000000000056c71e
- (void)setCharactersToBeSkipped:(id)arg1;	// IMP=0x000000000056c6b3
- (unsigned long long)scanLocation;	// IMP=0x000000000056c6a2
- (void)setScanLocation:(unsigned long long)arg1;	// IMP=0x000000000056c5f2
- (id)_invertedSkipSet;	// IMP=0x000000000056c52f
- (id)string;	// IMP=0x000000000056c511
- (id)initWithString:(id)arg1;	// IMP=0x000000000056c43a

@end

