//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionRowView.h"

@class MKMapItem, MULoadingOverlayController, NSString, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface MUNearestStationRowView : MUPlaceSectionRowView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_secondaryLabel;	// 16 = 0x10
    UILabel *_tertiaryLabel;	// 24 = 0x18
    UIImageView *_stopImageView;	// 32 = 0x20
    UIStackView *_labelStackView;	// 40 = 0x28
    MKMapItem *_nearestStation;	// 48 = 0x30
    MULoadingOverlayController *_loadingOverlayController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000bc2cc
- (void)_updateFonts;	// IMP=0x00000000000bc1ac
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000bc0da
@property(retain, nonatomic) NSString *distanceString;
- (void)layoutSubviews;	// IMP=0x00000000000bc057
- (void)_setupConstraints;	// IMP=0x00000000000bbab3
- (void)_setupSubviews;	// IMP=0x00000000000bb796
- (void)_updateAppearance;	// IMP=0x00000000000bb631
- (void)configureWithNearestStation:(id)arg1;	// IMP=0x00000000000bb5b2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000bb52c

@end

