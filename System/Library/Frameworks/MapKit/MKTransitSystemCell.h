//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKCustomSeparatorCell.h"

@class NSLayoutConstraint, NSString, UIImage, UIImageView, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitSystemCell : MKCustomSeparatorCell
{
    UIImageView *_shieldImageView;	// 8 = 0x8
    _MKUILabel *_systemLabel;	// 16 = 0x10
    UIView *_disclosureButton;	// 24 = 0x18
    NSLayoutConstraint *_imageToLabelConstraint;	// 32 = 0x20
    NSLayoutConstraint *_systemLabelToTopConstraint;	// 40 = 0x28
    NSLayoutConstraint *_systemLabelToBottomConstraint;	// 48 = 0x30
    _Bool _showDisclosureButton;	// 56 = 0x38
    _Bool _expanded;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x00000000000e6fc7
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool showDisclosureButton; // @synthesize showDisclosureButton=_showDisclosureButton;
- (struct CGAffineTransform)_transformForExpandedState:(_Bool)arg1 animating:(_Bool)arg2;	// IMP=0x00000000000e6ec3
- (void)setExpanded:(_Bool)arg1 insideAnimation:(_Bool)arg2;	// IMP=0x00000000000e6e53
- (id)_disclosureButton;	// IMP=0x00000000000e68b5
- (void)infoCardThemeChanged;	// IMP=0x00000000000e6720
- (void)prepareForReuse;	// IMP=0x00000000000e66c6
@property(copy, nonatomic) NSString *systemName;
@property(retain, nonatomic) UIImage *systemArtwork;
- (void)_contentSizeCategoryDidChange;	// IMP=0x00000000000e654f
- (void)_updateConstraintValues;	// IMP=0x00000000000e6477
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000000e5c95

@end

