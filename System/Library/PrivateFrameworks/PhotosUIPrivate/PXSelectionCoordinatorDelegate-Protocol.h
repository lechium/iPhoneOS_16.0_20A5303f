//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSOrderedSet, PXIndexPathSet, PXSectionedSelectionManager, PXSelectionCoordinator, PXSelectionSnapshot;

@protocol PXSelectionCoordinatorDelegate <NSObject>

@optional
- (void)selectionLimitStatusChangedForSelectionCoordinator:(PXSelectionCoordinator *)arg1;
- (void)selectionCoordinator:(PXSelectionCoordinator *)arg1 rejectedCountLimitViolationForSelectionManager:(PXSectionedSelectionManager *)arg2;
- (void)selectionCoordinator:(PXSelectionCoordinator *)arg1 didUpdateSelectedObjectsWithRemovedOIDs:(NSOrderedSet *)arg2 insertedOIDs:(NSOrderedSet *)arg3;
- (void)selectionCoordinator:(PXSelectionCoordinator *)arg1 willUpdateSelectedObjectsForSnapshot:(PXSelectionSnapshot *)arg2 withRemovedIndexes:(PXIndexPathSet *)arg3 insertedIndexes:(PXIndexPathSet *)arg4;
@end
