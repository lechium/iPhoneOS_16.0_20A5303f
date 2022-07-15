//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TLKStackView.h"

@class NSString, TLKIconsView, TLKLabel, TLKRichText, TLKRoundedCornerLabels, TLKStarsView, UIFont;
@protocol TLKObserver;

__attribute__((visibility("hidden")))
@interface TLKRichTextField : TLKStackView
{
    _Bool _useCompactMode;	// 8 = 0x8
    id <TLKObserver> observer;	// 16 = 0x10
    long long batchUpdateCount;	// 24 = 0x18
    TLKRichText *_richText;	// 32 = 0x20
    unsigned long long _roundedCornerLabelSizeConfiguration;	// 40 = 0x28
    TLKLabel *_textLabel;	// 48 = 0x30
    TLKRoundedCornerLabels *_roundedCornerLabels;	// 56 = 0x38
    TLKStarsView *_starRatingView;	// 64 = 0x40
    TLKIconsView *_iconView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003f533
@property(retain, nonatomic) TLKIconsView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TLKStarsView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(retain, nonatomic) TLKRoundedCornerLabels *roundedCornerLabels; // @synthesize roundedCornerLabels=_roundedCornerLabels;
@property(retain, nonatomic) TLKLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool useCompactMode; // @synthesize useCompactMode=_useCompactMode;
@property(nonatomic) unsigned long long roundedCornerLabelSizeConfiguration; // @synthesize roundedCornerLabelSizeConfiguration=_roundedCornerLabelSizeConfiguration;
@property(retain, nonatomic) TLKRichText *richText; // @synthesize richText=_richText;
@property(nonatomic) long long batchUpdateCount; // @synthesize batchUpdateCount;
@property __weak id <TLKObserver> observer; // @synthesize observer;
@property(readonly, copy) NSString *description;
- (id)attributedString;	// IMP=0x000000000003f2f9
- (id)viewForLastBaselineLayout;	// IMP=0x000000000003f1f5
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;	// IMP=0x000000000003f031
- (void)updateRoundedCornerLabels:(id)arg1;	// IMP=0x000000000003eda3
- (void)updateIcons:(id)arg1;	// IMP=0x000000000003eafc
- (void)updateStarRating:(id)arg1;	// IMP=0x000000000003e872
@property(nonatomic) unsigned long long prominence;
@property(retain, nonatomic) UIFont *font;
- (void)updateWithRichText:(id)arg1;	// IMP=0x000000000003e3a6
- (void)propertiesDidChange;	// IMP=0x000000000003e35a
- (id)init;	// IMP=0x000000000003de2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
