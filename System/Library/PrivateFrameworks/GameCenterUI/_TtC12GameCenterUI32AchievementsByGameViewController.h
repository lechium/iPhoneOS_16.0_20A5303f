//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s12GameCenterUI28BaseCollectionViewControllerCN.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI32AchievementsByGameViewController : _$s12GameCenterUI28BaseCollectionViewControllerCN
{
    MISSING_TYPE *bootstrapPresenter;	// 56 = 0x38
    MISSING_TYPE *statePresenter;	// 64 = 0x40
    MISSING_TYPE *compositionalLayout;	// 72 = 0x48
    MISSING_TYPE *diffableDataSource;	// 80 = 0x50
    MISSING_TYPE *components;	// 88 = 0x58
    MISSING_TYPE *sortGamesBarButtonItem;	// 96 = 0x60
    MISSING_TYPE *navigationBarFocusGuide;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001ba060
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001b9f80
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000000001b9740
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001b9340
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000001b8fd0
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000001b8c20
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000001b8970
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001b64e0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001b64a0
- (void)viewDidLoad;	// IMP=0x00000000001b6270
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b6250

@end
