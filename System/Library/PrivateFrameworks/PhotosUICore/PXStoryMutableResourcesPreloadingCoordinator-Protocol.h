//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXObservable;
@protocol PXStoryResourcesPreloadingCoordinatable;

@protocol PXStoryMutableResourcesPreloadingCoordinator
- (void)removePreloadingController:(PXObservable<PXStoryResourcesPreloadingCoordinatable> *)arg1;
- (void)addPreloadingController:(PXObservable<PXStoryResourcesPreloadingCoordinatable> *)arg1 withPriority:(long long)arg2;
@end

