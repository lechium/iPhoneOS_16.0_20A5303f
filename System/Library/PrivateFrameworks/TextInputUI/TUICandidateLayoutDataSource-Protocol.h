//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputUI/UICollectionViewDataSource-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol TUICandidateLayoutDataSource <UICollectionViewDataSource>
- (unsigned long long)autofillExtraCandidatesCount;
- (unsigned long long)slottedCandidatesCount;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 widthForGroupHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end

