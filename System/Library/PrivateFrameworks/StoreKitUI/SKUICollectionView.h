//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@class SKUIIndexBarControl, UICollectionViewLayout, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface SKUICollectionView : UICollectionView
{
    _Bool _delegateWantsWillLayoutSubviews;	// 8 = 0x8
    _Bool _externalShowsHorizontalScrollIndicator;	// 9 = 0x9
    _Bool _externalShowsVerticalScrollIndicator;	// 10 = 0xa
    double _overrideBoundsWidth;	// 16 = 0x10
    UICollectionViewLayout *_pendingCollectionViewLayout;	// 24 = 0x18
    UIRefreshControl *_refreshControl;	// 32 = 0x20
    SKUIIndexBarControl *_indexBarControl;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000128651
@property(retain, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) double overrideBoundsWidth; // @synthesize overrideBoundsWidth=_overrideBoundsWidth;
- (void)_updateShowsScrollIndicators;	// IMP=0x000000000012855b
- (void)_updateIndexBarControlFrame;	// IMP=0x0000000000128361
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000128321
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;	// IMP=0x00000000001281b1
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;	// IMP=0x000000000012818e
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000012814d
- (void)layoutSubviews;	// IMP=0x000000000012809f
- (struct CGRect)bounds;	// IMP=0x000000000012803e
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000127fbe
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000127f3d
- (id)collectionViewLayout;	// IMP=0x0000000000127ee4
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000000127e3d

@end

