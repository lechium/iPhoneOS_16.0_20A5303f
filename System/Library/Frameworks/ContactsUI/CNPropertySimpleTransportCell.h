//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTransportButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleTransportCell
{
    CNTransportButton *_transportIcon1;	// 24 = 0x18
    CNTransportButton *_transportIcon2;	// 32 = 0x20
    CNTransportButton *_transportIcon3;	// 40 = 0x28
    UIImageView *_starView;	// 48 = 0x30
    _Bool _allowsActions;	// 56 = 0x38
    _Bool _shouldShowBadge;	// 57 = 0x39
    _Bool _shouldShowTransportButtons;	// 58 = 0x3a
    _Bool _needsUpdateTouchAreas;	// 59 = 0x3b
    UIImageView *_standardStarView;	// 64 = 0x40
    UIColor *_actionsColor;	// 72 = 0x48
    UIView *_badgeView;	// 80 = 0x50
}

+ (id)standardStarView;	// IMP=0x00600000001a42b5
+ (void)_updateStarImageForView:(id)arg1;	// IMP=0x00600000001a4208
- (void).cxx_destruct;	// IMP=0x00000000001a4081
@property(nonatomic) _Bool needsUpdateTouchAreas; // @synthesize needsUpdateTouchAreas=_needsUpdateTouchAreas;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIColor *actionsColor; // @synthesize actionsColor=_actionsColor;
@property(readonly, nonatomic) UIImageView *standardStarView; // @synthesize standardStarView=_standardStarView;
@property(nonatomic) _Bool shouldShowTransportButtons; // @synthesize shouldShowTransportButtons=_shouldShowTransportButtons;
@property(nonatomic) _Bool shouldShowBadge; // @synthesize shouldShowBadge=_shouldShowBadge;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
- (void)transportButtonClicked:(id)arg1;	// IMP=0x00000000001a3e48
- (_Bool)shouldPerformDefaultAction;	// IMP=0x00000000001a3dff
- (id)variableConstraints;	// IMP=0x00000000001a336b
- (id)rightMostView;	// IMP=0x00000000001a32b8
- (void)updateStarIcon;	// IMP=0x00000000001a317b
- (void)updateTransportButtons;	// IMP=0x00000000001a3004
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000001a2ef9
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x00000000001a2ea3
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000001a2d44
- (void)updateLabelNeedingHuggingContent;	// IMP=0x00000000001a2cfd
@property(readonly, nonatomic) _Bool shouldShowStar;
@property(readonly, nonatomic) UIView *standardBadgeView;
@property(readonly, nonatomic) CNTransportButton *transportIcon3;
@property(readonly, nonatomic) CNTransportButton *transportIcon2;
@property(readonly, nonatomic) CNTransportButton *transportIcon1;
@property(readonly, nonatomic) CNTransportButton *standardTransportIcon;
- (void)layoutSubviews;	// IMP=0x00000000001a2744
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000001a2629
- (void)prepareForReuse;	// IMP=0x00000000001a25e9
- (void)dealloc;	// IMP=0x00000000001a2574
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001a24da

@end

