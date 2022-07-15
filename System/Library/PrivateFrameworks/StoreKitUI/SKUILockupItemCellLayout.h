//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIItemCellLayout.h"

@class NSString, SKUIEmbeddedMediaView, SKUILockupMetadataView, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface SKUILockupItemCellLayout : SKUIItemCellLayout
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    struct CGSize _imageBoundingSize;	// 40 = 0x28
    long long _itemOfferStyle;	// 56 = 0x38
    UILabel *_itemOfferTextLabel;	// 64 = 0x40
    long long _layoutStyle;	// 72 = 0x48
    long long _lockupSize;	// 80 = 0x50
    SKUILockupMetadataView *_metadataView;	// 88 = 0x58
    _Bool _playsInlineVideo;	// 96 = 0x60
    long long _verticalAlignment;	// 104 = 0x68
    SKUIEmbeddedMediaView *_videoThumbnailView;	// 112 = 0x70
    struct CGSize _videoThumbnailSize;	// 120 = 0x78
}

+ (struct CGSize)videoThumbnailSizeForVideo:(id)arg1 clientContext:(id)arg2;	// IMP=0x006000000012b4db
+ (double)heightForLockupStyle:(struct SKUILockupStyle)arg1 item:(id)arg2 editorial:(id)arg3 clientContext:(id)arg4;	// IMP=0x006000000012b272
+ (double)heightForLockupComponent:(id)arg1 clientContext:(id)arg2;	// IMP=0x006000000012b183
- (void).cxx_destruct;	// IMP=0x000000000012dd02
@property(nonatomic) struct CGSize videoThumbnailSize; // @synthesize videoThumbnailSize=_videoThumbnailSize;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) _Bool playsInlineVideo; // @synthesize playsInlineVideo=_playsInlineVideo;
@property(nonatomic) long long lockupSize; // @synthesize lockupSize=_lockupSize;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) long long itemOfferStyle; // @synthesize itemOfferStyle=_itemOfferStyle;
@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_layoutVertical;	// IMP=0x000000000012d38f
- (struct CGRect)_layoutIconImageView;	// IMP=0x000000000012d281
- (void)_layoutHorizontal;	// IMP=0x000000000012c597
- (id)_itemOfferTextLabel;	// IMP=0x000000000012c41d
- (_Bool)_isItemOfferHidden;	// IMP=0x000000000012c3a5
- (void)_beginVideoPlaybackAction:(id)arg1;	// IMP=0x000000000012c30a
- (void)setIconImage:(id)arg1;	// IMP=0x000000000012c29b
- (void)setClientContext:(id)arg1;	// IMP=0x000000000012c229
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000012c19b
- (void)prepareForReuse;	// IMP=0x000000000012c150
- (void)layoutSubviews;	// IMP=0x000000000012c0f7
- (void)layoutForItemOfferChange;	// IMP=0x000000000012bd48
@property(nonatomic) unsigned long long visibleFields;
@property(retain, nonatomic) UIImage *videoThumbnailImage;
@property(nonatomic) float userRating;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *releaseDateString;
@property(nonatomic) long long numberOfUserRatings;
@property(copy, nonatomic) NSString *itemCountString;
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x000000000012b719
@property(copy, nonatomic) NSString *editorialBadgeString;
@property(copy, nonatomic) NSString *categoryString;
@property(copy, nonatomic) NSString *artistName;
- (void)playInlineVideoWithURL:(id)arg1;	// IMP=0x000000000012b688
- (void)endVideoPlaybackAnimated:(_Bool)arg1;	// IMP=0x000000000012b631
- (void)dealloc;	// IMP=0x000000000012b12f
- (id)initWithTableViewCell:(id)arg1;	// IMP=0x000000000012b0e3
- (id)initWithParentView:(id)arg1;	// IMP=0x000000000012b097
- (id)initWithCollectionViewCell:(id)arg1;	// IMP=0x000000000012b04b
- (void)_initSKUILockupItemCellLayout;	// IMP=0x000000000012afac

@end
