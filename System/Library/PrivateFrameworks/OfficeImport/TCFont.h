//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TCFontFamily;

__attribute__((visibility("hidden")))
@interface TCFont : NSObject
{
    NSDictionary *_namesByLanguage;	// 8 = 0x8
    NSString *_psName;	// 16 = 0x10
    TCFontFamily *_family;	// 24 = 0x18
    struct TCFontStyling _styling;	// 32 = 0x20
}

+ (id)fontWithFont:(id)arg1;	// IMP=0x00100000002e5a1b
- (id).cxx_construct;	// IMP=0x00000000002e5c9b
- (void).cxx_destruct;	// IMP=0x00000000002e5c73
@property(nonatomic) TCFontFamily *family; // @synthesize family=_family;
@property(readonly, nonatomic) struct TCFontStyling styling; // @synthesize styling=_styling;
@property(readonly, nonatomic) NSString *psName; // @synthesize psName=_psName;
@property(readonly, nonatomic) NSDictionary *namesByLanguage; // @synthesize namesByLanguage=_namesByLanguage;
- (id)localizedFontName;	// IMP=0x00000000002e5b56
- (int)preferredLanguage;	// IMP=0x00000000002e5b07
- (id)description;	// IMP=0x00000000002e5aa3
- (id)englishName;	// IMP=0x00000000002e5a38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e59a1
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e5541
- (id)equivalentDictionary;	// IMP=0x00000000002e5131
- (id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(struct TCFontStyling)arg3;	// IMP=0x00000000002e5039

@end
