//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UIColor, UILabel, UISlider;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit31AUGenericViewFloatParameterCell
{
    MISSING_TYPE *valueSlider;	// 88 = 0x58
    MISSING_TYPE *unitLabel;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005f530
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005f470
@property(nonatomic, retain) UIColor *tintColor;
- (void)sliderReleasedWithSender:(id)arg1;	// IMP=0x000000000005f1a0
- (void)sliderTouchedWithSender:(id)arg1;	// IMP=0x000000000005ee40
- (void)accessibilityDecrement;	// IMP=0x000000000005edf0
- (void)accessibilityIncrement;	// IMP=0x000000000005ec40
- (void)sliderValueChangedWithSender:(id)arg1;	// IMP=0x000000000005e5f0
@property(nonatomic) __weak UILabel *unitLabel; // @synthesize unitLabel;
@property(nonatomic) __weak UISlider *valueSlider; // @synthesize valueSlider;

@end
