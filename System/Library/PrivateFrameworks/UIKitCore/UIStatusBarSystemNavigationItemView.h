//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarSystemNavigationItemView
{
    int _currentLabelCompressionLevel;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    double _maxWidth;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f04b45
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) int currentLabelCompressionLevel; // @synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel;
- (double)extraRightPadding;	// IMP=0x0000000000f04aca
- (double)extraLeftPadding;	// IMP=0x0000000000f04aa7
- (id)shortenedTitleWithCompressionLevel:(int)arg1;	// IMP=0x0000000000f04a9f
- (void)userDidActivateButton:(id)arg1;	// IMP=0x0000000000f04a99
- (long long)labelLineBreakMode;	// IMP=0x0000000000f04a8e
- (_Bool)layoutImageOnTrailingEdge;	// IMP=0x0000000000f04a86
- (id)accessibilityHUDRepresentation;	// IMP=0x0000000000f049ca
- (double)addContentOverlap:(double)arg1;	// IMP=0x0000000000f04897
- (double)resetContentOverlap;	// IMP=0x0000000000f04866
@property(retain, nonatomic) NSString *title;
- (double)updateContentsAndWidth;	// IMP=0x0000000000f0462e
- (struct CGSize)_buttonSize;	// IMP=0x0000000000f04586
- (_Bool)_shouldLayoutImageOnRight;	// IMP=0x0000000000f041d6

@end

