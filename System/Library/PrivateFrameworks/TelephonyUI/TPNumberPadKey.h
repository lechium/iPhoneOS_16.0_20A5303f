//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface TPNumberPadKey : UIView
{
    UILabel *_digit;	// 8 = 0x8
    UILabel *_letters;	// 16 = 0x10
    UILabel *_secondaryLetters;	// 24 = 0x18
    NSLayoutConstraint *_digitBaseline;	// 32 = 0x20
    NSLayoutConstraint *_letterBaseline;	// 40 = 0x28
    NSLayoutConstraint *_secondaryLetterBaseline;	// 48 = 0x30
}

+ (float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3;	// IMP=0x0060000000017d07
+ (void)initialize;	// IMP=0x00600000000174ec
- (void).cxx_destruct;	// IMP=0x0000000000018f55
@property(retain, nonatomic) NSLayoutConstraint *secondaryLetterBaseline; // @synthesize secondaryLetterBaseline=_secondaryLetterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *letterBaseline; // @synthesize letterBaseline=_letterBaseline;
@property(retain, nonatomic) NSLayoutConstraint *digitBaseline; // @synthesize digitBaseline=_digitBaseline;
@property(retain, nonatomic) UILabel *secondaryLetters; // @synthesize secondaryLetters=_secondaryLetters;
@property(retain, nonatomic) UILabel *letters; // @synthesize letters=_letters;
@property(retain, nonatomic) UILabel *digit; // @synthesize digit=_digit;
- (void)doLayoutNow;	// IMP=0x0000000000018e3c
- (void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3;	// IMP=0x0000000000018d26
- (void)setFontStylesForHighlightState:(_Bool)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(_Bool)arg3 shouldCenterDigit:(_Bool)arg4 fontColor:(_Bool)arg5 circleDiameter:(double)arg6 isCarPlay:(_Bool)arg7 screenSizeCategory:(unsigned long long)arg8;	// IMP=0x0000000000018281
- (void)updateBaselineConstraintConstantsFor:(unsigned long long)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(_Bool)arg3;	// IMP=0x00000000000180b4
- (double)secondaryLetterFontSizeForScreenSizeCategory:(unsigned long long)arg1;	// IMP=0x0000000000018017
- (double)letterFontSizeForScreenSizeCategory:(unsigned long long)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(_Bool)arg3;	// IMP=0x0000000000017f54
- (double)digitFontSizeForScreenSizeCategory:(unsigned long long)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(_Bool)arg3;	// IMP=0x0000000000017e45
@property(readonly, nonatomic, getter=isPound) _Bool pound;
@property(readonly, nonatomic, getter=isAsterisk) _Bool asterisk;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001772a

@end
