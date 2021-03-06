//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXFeedSectionInfo, PXUIButton, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface PUFeedCaptionCell
{
    _Bool _hideCaption;	// 8 = 0x8
    PXFeedSectionInfo *_sectionInfo;	// 16 = 0x10
    unsigned long long _captionItemIndex;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    PXUIButton *_likeButton;	// 48 = 0x30
    struct UIEdgeInsets _contentInsets;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000015b258
@property(retain, nonatomic) PXUIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool hideCaption; // @synthesize hideCaption=_hideCaption;
@property(nonatomic) unsigned long long captionItemIndex; // @synthesize captionItemIndex=_captionItemIndex;
@property(retain, nonatomic) PXFeedSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_handleLikeButtonTap:(id)arg1;	// IMP=0x000000000015b085
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;	// IMP=0x000000000015a891
- (void)_updateUI;	// IMP=0x000000000015a849
- (void)_updateLikeButton;	// IMP=0x000000000015a777
- (_Bool)_shouldHideLikeButton;	// IMP=0x000000000015a718
- (void)_setLikeButtonLiked:(_Bool)arg1;	// IMP=0x000000000015a676
- (void)_updateSubtitle;	// IMP=0x000000000015a53f
- (void)_updateTitle;	// IMP=0x000000000015a2a4
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x000000000015a292
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000015a24c
- (void)layoutSubviews;	// IMP=0x000000000015a1da
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000015a07b
@property(readonly, nonatomic) UIImage *notLikedImage;
@property(readonly, nonatomic) UIImage *likedImage;
@property(nonatomic) _Bool isLiked; // @dynamic isLiked;
- (void)prepareForReuse;	// IMP=0x0000000000159e64
- (void)dealloc;	// IMP=0x0000000000159de2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000159a91

@end

