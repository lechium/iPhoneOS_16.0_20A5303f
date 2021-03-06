//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MRUArtworkView, MRUVisualStylingProvider, NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell
{
    MRUArtworkView *_artworkView;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    MRUVisualStylingProvider *_stylingProvider;	// 32 = 0x20
    long long _layout;	// 40 = 0x28
    UIActivityIndicatorView *_activityView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UILabel *_subtitleLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000031988
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) long long layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) MRUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
- (void)updateVisiblity;	// IMP=0x0000000000031840
- (void)updateContentSizeCategory;	// IMP=0x000000000003179e
- (void)updateVisualStyling;	// IMP=0x0000000000031685
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000031668
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000000315f2
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x00000000000315e0
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000003159f
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000003155e
- (void)prepareForReuse;	// IMP=0x0000000000031316
- (void)layoutSubviews;	// IMP=0x0000000000030fc5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000030c98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

