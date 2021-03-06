//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLocale, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OITSULocaleStructuredDictionary : NSObject
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSMutableDictionary *_cldrLanguageScriptRegionForKey;	// 16 = 0x10
    NSMutableDictionary *_cldrLanguageScriptForKey;	// 24 = 0x18
    NSMutableDictionary *_workingDictionary;	// 32 = 0x20
    NSLocale *_workingLocale;	// 40 = 0x28
    _Bool _workingLocaleIsAutoUpdating;	// 48 = 0x30
    unsigned long long _autoUpdatingCount;	// 56 = 0x38
}

+ (id)numberFormatterSymbolsFallbackDictionary;	// IMP=0x00600000002d2b2c
+ (id)dateFormatterSymbolsFallbackDictionary;	// IMP=0x00600000002d2ac2
+ (id)dictionaryWithContentsOfFileForLocale:(id)arg1 inDirectory:(id)arg2 inBundle:(id)arg3;	// IMP=0x00600000002d193d
- (void).cxx_destruct;	// IMP=0x00000000002d2b96
- (id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3;	// IMP=0x00000000002d2980
- (_Bool)p_extractLanguage:(id *)arg1 script:(id *)arg2 region:(id *)arg3 fromString:(id)arg4;	// IMP=0x00000000002d253c
- (void)p_remakeWorkingDictionaryWithLocale:(id)arg1;	// IMP=0x00000000002d1c4d
- (id)objectForKey:(id)arg1 locale:(id)arg2;	// IMP=0x00000000002d1b64
- (id)initWithDictionary:(id)arg1 locale:(id)arg2;	// IMP=0x00000000002d1a8f

@end

