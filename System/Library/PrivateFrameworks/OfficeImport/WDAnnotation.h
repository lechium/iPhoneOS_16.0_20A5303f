//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDAnnotationData, WDCharacterRun;

__attribute__((visibility("hidden")))
@interface WDAnnotation
{
    int mType;	// 8 = 0x8
    WDCharacterRun *mReference;	// 16 = 0x10
    _Bool mReferencePopertiesFixed;	// 24 = 0x18
    WDAnnotationData *mData;	// 32 = 0x20
    WDAnnotation *mOtherEndOfRangedAnnotation;	// 40 = 0x28
    _Bool isResolved;	// 48 = 0x30
    WDAnnotation *parent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003ea07b
@property WDAnnotation *parent; // @synthesize parent;
@property _Bool isResolved; // @synthesize isResolved;
- (id)description;	// IMP=0x00000000003e9ff9
- (unsigned long long)lastParagraphId;	// IMP=0x00000000003e9f30
- (id)paragraphIds;	// IMP=0x00000000003e9d2e
- (void)setOtherEndOfRangedAnnotation:(id)arg1;	// IMP=0x00000000003e9d1a
- (id)otherEndOfRangedAnnotation;	// IMP=0x00000000003e9d01
- (void)useDataFromOtherEnd;	// IMP=0x00000000003e9b41
- (id)data;	// IMP=0x00000000003e9b2c
- (void)setOwner:(id)arg1;	// IMP=0x00000000002252a9
- (id)owner;	// IMP=0x00000000003e9b0f
- (void)setDate:(id)arg1;	// IMP=0x0000000000225265
- (id)date;	// IMP=0x00000000003e9af2
- (int)annotationType;	// IMP=0x00000000003e9ae2
- (int)runType;	// IMP=0x00000000002252c7
- (void)setReferencePropertiesFixed;	// IMP=0x000000000023eba1
- (_Bool)referencePropertiesFixed;	// IMP=0x000000000023e8f5
- (id)reference;	// IMP=0x0000000000225250
- (id)text;	// IMP=0x0000000000225233
- (id)initWithParagraph:(id)arg1 type:(int)arg2;	// IMP=0x0000000000224fad

@end
