//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, TransitSchedulesDepartureDataProvider, UICollectionView, UICollectionViewCell;
@protocol GEOTransitDepartureSequence;

@protocol TransitSchedulesHeadsignViewProviding
- (void)collectionView:(UICollectionView *)arg1 selectedHeadsignForDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 headsignCellWithIdentifier:(id)arg2 indexPath:(NSIndexPath *)arg3 dataProvider:(TransitSchedulesDepartureDataProvider *)arg4;
- (NSArray *)identifiersForDepartureSequences:(NSArray *)arg1;
- (void)registerCellsForCollectionView:(UICollectionView *)arg1;
@end

