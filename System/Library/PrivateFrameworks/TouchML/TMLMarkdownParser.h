//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSScanner;

@interface TMLMarkdownParser : NSObject
{
    NSArray *_rules;	// 8 = 0x8
    NSScanner *_scanner;	// 16 = 0x10
    NSMutableDictionary *_attributes;	// 24 = 0x18
    NSMutableDictionary *_tag;	// 32 = 0x20
    NSArray *_regex;	// 40 = 0x28
    NSArray *_extraRules;	// 48 = 0x30
    NSArray *_extraRegex;	// 56 = 0x38
}

+ (id)stringOfTagType:(id)arg1 andCount:(unsigned long long)arg2;	// IMP=0x006000000002f172
+ (id)parse:(id)arg1 tags:(id *)arg2 withRules:(id)arg3;	// IMP=0x006000000002ede3
+ (id)postProcessString:(id)arg1;	// IMP=0x006000000002d22d
+ (id)preProcessString:(id)arg1;	// IMP=0x006000000002d0e0
+ (id)unescapeString:(id)arg1;	// IMP=0x006000000002cf6b
+ (id)regexFromRules:(id)arg1;	// IMP=0x006000000002ce04
- (void).cxx_destruct;	// IMP=0x000000000002f231
- (_Bool)isListTagOpen:(id)arg1;	// IMP=0x000000000002ec5d
- (id)tagFromType:(int)arg1;	// IMP=0x000000000002ec34
- (id)replacestring:(id)arg1 usingRule:(id)arg2 atIndex:(unsigned long long)arg3 additonalRules:(_Bool)arg4;	// IMP=0x000000000002db67
- (id)parse:(id)arg1 tags:(id *)arg2;	// IMP=0x000000000002d37a
- (id)init;	// IMP=0x000000000002cd30

@end
