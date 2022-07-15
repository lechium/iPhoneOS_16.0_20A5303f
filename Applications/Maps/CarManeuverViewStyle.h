//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface CarManeuverViewStyle : NSObject
{
    _Bool _hasLaneGuidance;	// 8 = 0x8
    _Bool _hasShield;	// 9 = 0x9
    _Bool _secondarySignVisible;	// 10 = 0xa
    int _blurMode;	// 12 = 0xc
    unsigned long long _variant;	// 16 = 0x10
    unsigned long long _layoutType;	// 24 = 0x18
    unsigned long long _destination;	// 32 = 0x20
    unsigned long long _compressionStage;	// 40 = 0x28
}

+ (id)styleWithVariant:(unsigned long long)arg1 destination:(unsigned long long)arg2 layoutType:(unsigned long long)arg3;	// IMP=0x00200000009b82cf
@property(nonatomic) unsigned long long compressionStage; // @synthesize compressionStage=_compressionStage;
@property(nonatomic) int blurMode; // @synthesize blurMode=_blurMode;
@property(nonatomic) _Bool secondarySignVisible; // @synthesize secondarySignVisible=_secondarySignVisible;
@property(nonatomic) _Bool hasShield; // @synthesize hasShield=_hasShield;
@property(nonatomic) _Bool hasLaneGuidance; // @synthesize hasLaneGuidance=_hasLaneGuidance;
@property(readonly, nonatomic) unsigned long long destination; // @synthesize destination=_destination;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) unsigned long long variant; // @synthesize variant=_variant;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009b88dc
@property(readonly, nonatomic) unsigned int desiredFraming;
@property(readonly, nonatomic) struct CGSize arrowReferenceSize;
@property(readonly, nonatomic) CDStruct_0e0a9ffd arrowMetrics;
// Error: Property attributes should begin with the type ('T') attribute, property name: canHaveLaneGuidance
// Property attributes: (null)

@property(readonly, nonatomic) _Bool isSecondary;
@property(readonly, nonatomic) long long labelLineBreakMode;
@property(readonly, nonatomic) _Bool shouldScaleInstructionsPreferredFont;
@property(readonly, nonatomic) long long instructionsMaxNumberOfTotalLines;
@property(readonly, nonatomic) long long instructionsMaxNumberOfLinesWithPreferredFont;
@property(readonly, nonatomic) double instructionsAlternateFontLineSpacing;
@property(readonly, nonatomic) UIFont *instructionsAlternateFont;
@property(readonly, nonatomic) UIFont *instructionsPreferredFont;
@property(readonly, nonatomic) UIColor *invalidArrowColor;
@property(readonly, nonatomic) UIColor *arrowAccentColor;
@property(readonly, nonatomic) UIColor *arrowMainColor;
@property(readonly, nonatomic) UIColor *instructionsColor;
@property(readonly, nonatomic) UIColor *distanceColor;
@property(readonly, nonatomic) UIFont *distanceFont;
- (_Bool)_isDisplayedInWidget;	// IMP=0x00100000009b8328
@property(readonly, nonatomic) _Bool displaysShield;
- (id)initWithVariant:(unsigned long long)arg1 destination:(unsigned long long)arg2 layoutType:(unsigned long long)arg3;	// IMP=0x00100000009b8275

@end
