//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MRURoutingAccessoryView, MRURoutingSubtitleController, MRURoutingSubtitleView, MRUVisualStylingProvider, MRUVolumeSlider, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol MRURoutingTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface MRURoutingTableViewCell : UITableViewCell
{
    _Bool _showChevron;	// 8 = 0x8
    _Bool _showChevronExpanded;	// 9 = 0x9
    _Bool _showVolumeSlider;	// 10 = 0xa
    id <MRURoutingTableViewCellDelegate> _delegate;	// 16 = 0x10
    UIImage *_iconImage;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    MRURoutingSubtitleController *_subtitleStateController;	// 40 = 0x28
    MRURoutingAccessoryView *_routingAccessoryView;	// 48 = 0x30
    MRUVolumeSlider *_volumeSlider;	// 56 = 0x38
    MRUVisualStylingProvider *_stylingProvider;	// 64 = 0x40
    UIImageView *_iconImageView;	// 72 = 0x48
    UIImageView *_outlineImageView;	// 80 = 0x50
    UILabel *_titleLabel;	// 88 = 0x58
    MRURoutingSubtitleView *_subtitleView;	// 96 = 0x60
    UIView *_separatorView;	// 104 = 0x68
    UITapGestureRecognizer *_expandGestureRecognizer;	// 112 = 0x70
    struct UIEdgeInsets _contentEdgeInsets;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000b28e6
@property(retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer; // @synthesize expandGestureRecognizer=_expandGestureRecognizer;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MRURoutingSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *outlineImageView; // @synthesize outlineImageView=_outlineImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool showVolumeSlider; // @synthesize showVolumeSlider=_showVolumeSlider;
@property(nonatomic) _Bool showChevronExpanded; // @synthesize showChevronExpanded=_showChevronExpanded;
@property(nonatomic) _Bool showChevron; // @synthesize showChevron=_showChevron;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MRUVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // @synthesize routingAccessoryView=_routingAccessoryView;
@property(readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // @synthesize subtitleStateController=_subtitleStateController;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak id <MRURoutingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)expandRect;	// IMP=0x00000000000b2546
- (void)updateVisibility;	// IMP=0x00000000000b24a9
- (void)updateContentSizeCategory;	// IMP=0x00000000000b244e
- (void)updateVisualStyling;	// IMP=0x00000000000b23bf
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000000b21a1
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000000b2087
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000b1fd4
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x00000000000b1fc2
- (void)routingSubtitleStateController:(id)arg1 didUpdateText:(id)arg2 icon:(id)arg3 accessory:(long long)arg4;	// IMP=0x00000000000b1f4f
- (void)transitionToNextVisibleStateWithDuration:(double)arg1;	// IMP=0x00000000000b1cb7
- (void)didTapToExpand;	// IMP=0x00000000000b1c6b
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;	// IMP=0x00000000000b1c18
- (void)setSubtitleAccessory:(long long)arg1;	// IMP=0x00000000000b17df
- (void)setIcon:(id)arg1;	// IMP=0x00000000000b17a6
- (void)setSubtitle:(id)arg1;	// IMP=0x00000000000b176d
- (void)prepareForReuse;	// IMP=0x00000000000b15b7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000b14ab
- (void)layoutSubviews;	// IMP=0x00000000000b0869
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000b026c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

