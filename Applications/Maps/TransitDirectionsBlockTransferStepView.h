//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKArtworkImageView, NSLayoutConstraint, _MKUILabel;

@interface TransitDirectionsBlockTransferStepView
{
    NSLayoutConstraint *_topToPrimaryLabelBaselineConstraint;	// 16 = 0x10
    NSLayoutConstraint *_imageViewToLabelVerticalAlignmentConstraint;	// 24 = 0x18
    NSLayoutConstraint *_primaryLabelLeadingToImageViewConstraint;	// 32 = 0x20
    NSLayoutConstraint *_primaryLabelLeadingConstraint;	// 40 = 0x28
    _MKUILabel *_primaryLabel;	// 48 = 0x30
    MKArtworkImageView *_blockTransferImageView;	// 56 = 0x38
}

+ (double)leadingTextInsetForBlockTransferTransitDirectionsListItem:(id)arg1 navigationState:(long long)arg2;	// IMP=0x004000000061fc0e
- (void).cxx_destruct;	// IMP=0x002000000061fd0f
- (void)_updateNavigationStateAlpha:(double)arg1;	// IMP=0x001000000061fbbb
- (void)_updateLineSpacing;	// IMP=0x001000000061fb85
- (void)_updateFonts;	// IMP=0x001000000061faa2
- (double)_primaryLabelLineSpacing;	// IMP=0x001000000061f9ef
- (double)_topToPrimaryLabelDistance;	// IMP=0x001000000061f981
- (double)_blockTransferImageOffsetFromPrimaryLabelBaseline;	// IMP=0x001000000061f91e
- (void)configureWithItem:(id)arg1;	// IMP=0x001000000061f611
- (id)_initialConstraints;	// IMP=0x001000000061f0fd
- (void)_createSubviews;	// IMP=0x001000000061ee7e
- (void)_contentSizeCategoryDidChange;	// IMP=0x001000000061edf1

@end
