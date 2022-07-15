//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKArtworkImageView, NSLayoutConstraint, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol TransitDirectionsIncidentCellDelegate;

@interface TransitDirectionsIncidentStepView
{
    UILabel *_label;	// 16 = 0x10
    MKArtworkImageView *_imageView;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    UIImageView *_chevronImageView;	// 40 = 0x28
    UITapGestureRecognizer *_tapGesture;	// 48 = 0x30
    NSLayoutConstraint *_artworkShowingLabelConstraint;	// 56 = 0x38
    NSLayoutConstraint *_artworkHiddenLabelConstraint;	// 64 = 0x40
    NSLayoutConstraint *_chevronShowingLabelConstraint;	// 72 = 0x48
    NSLayoutConstraint *_chevronHiddenLabelConstraint;	// 80 = 0x50
    id <TransitDirectionsIncidentCellDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000002c16d4
@property(nonatomic) __weak id <TransitDirectionsIncidentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateNavigationStateAlpha:(double)arg1;	// IMP=0x00100000002c1619
- (void)_tapped;	// IMP=0x00100000002c1524
- (void)configureWithItem:(id)arg1;	// IMP=0x00100000002c0fe4
- (id)_incidentItem;	// IMP=0x00100000002c0f91
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000002c006c

@end
