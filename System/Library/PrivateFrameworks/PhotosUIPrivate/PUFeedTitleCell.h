//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXFeedSectionInfo, PXSharedAlbumHeaderView;

__attribute__((visibility("hidden")))
@interface PUFeedTitleCell
{
    long long _collectionViewType;	// 8 = 0x8
    unsigned long long _tappableArea;	// 16 = 0x10
    PXFeedSectionInfo *_sectionInfo;	// 24 = 0x18
    PXSharedAlbumHeaderView *_headerView;	// 32 = 0x20
    struct UIEdgeInsets _contentInsets;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001787c1
@property(readonly, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXFeedSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) unsigned long long tappableArea; // @synthesize tappableArea=_tappableArea;
@property(nonatomic) long long collectionViewType; // @synthesize collectionViewType=_collectionViewType;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)_handleTap:(id)arg1;	// IMP=0x0000000000178700
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;	// IMP=0x0000000000178493
- (void)_updateHeaderTextColorStyle;	// IMP=0x00000000001783e8
- (void)prepareForReuse;	// IMP=0x000000000017835b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000178315
- (void)layoutSubviews;	// IMP=0x00000000001782a3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000178034

@end
