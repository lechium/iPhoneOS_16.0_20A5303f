//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CAShapeLayer, NSString, SharedTripCapabilityBadgeView, UIImage, UIImageView, UILabel;
@protocol CarShareTripContactCellDelegate;

@interface CarShareTripContactCell : UITableViewCell
{
    UIImageView *_contactImageView;	// 8 = 0x8
    long long _monogrammerStyle;	// 16 = 0x10
    CAShapeLayer *_sharingRingLayer;	// 24 = 0x18
    struct CGSize _lastKnownSize;	// 32 = 0x20
    UILabel *_contactNameLabel;	// 48 = 0x30
    UILabel *_subtitleLabel;	// 56 = 0x38
    SharedTripCapabilityBadgeView *_capabilityBadgeView;	// 64 = 0x40
    NSString *_contactIdentifier;	// 72 = 0x48
    id <CarShareTripContactCellDelegate> _delegate;	// 80 = 0x50
    unsigned long long _sharingState;	// 88 = 0x58
    unsigned long long _capabilityType;	// 96 = 0x60
    NSString *_sharingHandle;	// 104 = 0x68
}

+ (id)reuseIdentifier;	// IMP=0x002000000072098c
- (void).cxx_destruct;	// IMP=0x0010000000722700
@property(copy, nonatomic) NSString *sharingHandle; // @synthesize sharingHandle=_sharingHandle;
@property(nonatomic) unsigned long long capabilityType; // @synthesize capabilityType=_capabilityType;
@property(nonatomic) unsigned long long sharingState; // @synthesize sharingState=_sharingState;
@property(nonatomic) __weak id <CarShareTripContactCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0010000000722634
- (void)_setSharingState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000722590
- (void)setSharingState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000072256c
- (void);	// IMP=0x0010000000722555
- (_Bool)isSharing;	// IMP=0x0010000000722540
@property(copy, nonatomic) NSString *contactName;
@property(retain, nonatomic) UIImage *contactImage;
- (void)layoutSubviews;	// IMP=0x00100000007223ed
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000007223ac
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000007222df
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000072229e
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000072225d
- (id)_sharingRingColor:(_Bool)arg1;	// IMP=0x0010000000722224
- (id)_sharingLabelColor:(_Bool)arg1;	// IMP=0x00100000007221ae
- (void)_redrawContactImage;	// IMP=0x0010000000721f11
- (void)_setContactIdentifier:(id)arg1;	// IMP=0x0010000000721e9c
- (void)_updateSubtitleLabel;	// IMP=0x0010000000721c00
- (void)_updateAppearance;	// IMP=0x00100000007219cc
- (void)_updateSharingRingAnimated:(_Bool)arg1;	// IMP=0x0010000000721756
- (void)prepareForReuse;	// IMP=0x00100000007216fa
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000720996
- (void)configureWithSharedTrip:(id)arg1;	// IMP=0x001000000072288a
- (void)configureWithMSPSharedTripContact:(id)arg1;	// IMP=0x0010000000722795

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
