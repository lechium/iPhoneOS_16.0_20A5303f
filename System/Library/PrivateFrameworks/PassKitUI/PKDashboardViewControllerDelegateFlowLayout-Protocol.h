//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, UICollectionView;

@protocol PKDashboardViewControllerDelegateFlowLayout <UICollectionViewDelegateFlowLayout>

@optional
- (_Bool)itemIsIndependentInCollectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)itemIsStackableInCollectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

