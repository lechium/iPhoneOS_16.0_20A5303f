//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoute, MPAVRoutingController, MPAVRoutingControllerSelection, MSVTimer, NSMapTable, NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPAVRoutingControllerSelectionQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_selectionsEnqueued;	// 16 = 0x10
    MPAVRoutingControllerSelection *_selectionInProgress;	// 24 = 0x18
    NSMutableSet *_pendingRoutes;	// 32 = 0x20
    MSVTimer *_selectionInProgressTimer;	// 40 = 0x28
    NSMapTable *_pendingSelectionTimers;	// 48 = 0x30
    _Bool _hasPendingPickedRoutes;	// 56 = 0x38
    MPAVRoutingController *_routingController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000814c7
@property(readonly, nonatomic) _Bool hasPendingPickedRoutes; // @synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes;
@property(readonly, nonatomic) __weak MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void)_processSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000080cbf
- (void)_dequeue;	// IMP=0x0000000000080b13
- (void)_dequeueSelectionWhenPossible;	// IMP=0x0000000000080ac8
- (void)_enqueue:(id)arg1;	// IMP=0x0000000000080276
- (void)removePendingRoutes:(id)arg1 withError:(_Bool)arg2;	// IMP=0x000000000007ff74
- (void)removePendingRoutes:(id)arg1;	// IMP=0x000000000007ff5d
- (void)removeAllPendingRoutes;	// IMP=0x000000000007ff0d
- (void)addPendingRoutes:(id)arg1;	// IMP=0x000000000007fbcf
- (_Bool)routeIsPendingPick:(id)arg1;	// IMP=0x000000000007fb01
@property(readonly, nonatomic) NSSet *pendingPickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pendingPickedRoute;
- (void)pickedRouteDidChange;	// IMP=0x000000000007f932
- (_Bool)hasPendingRoutes;	// IMP=0x000000000007f8a4
- (void)enqueueSelectionOperation:(long long)arg1 forRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007f7fd
- (void)cancelInProgressSelectionForRoute:(id)arg1;	// IMP=0x000000000007f4e8
- (id)initWithRoutingController:(id)arg1;	// IMP=0x000000000007f3e5

@end
