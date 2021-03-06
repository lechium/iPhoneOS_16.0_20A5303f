//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIDragInteractionDriver.h"

@class NSSet, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver
{
    NSSet *_touches;	// 8 = 0x8
    CDUnknownBlockType _itemIterator;	// 16 = 0x10
    CDUnknownBlockType _sessionHandler;	// 24 = 0x18
    CDUnknownBlockType _liftCompletion;	// 32 = 0x20
    UIDelayedAction *_delayedLift;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004dfd38
- (void)didTransitionToInflightState;	// IMP=0x00000000004dfca0
- (void)didTransitionToInactiveState;	// IMP=0x00000000004dfc15
- (void)didTransitionToBeginState;	// IMP=0x00000000004dfae5
- (void)_performDelayedLift;	// IMP=0x00000000004dfaaf
- (void)beginDragWithTouches:(id)arg1 itemIterator:(CDUnknownBlockType)arg2 beginningSessionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000004df968
- (void)beginLiftAtLocation:(struct CGPoint)arg1 useDefaultLiftAnimation:(_Bool)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004df85f
- (_Bool)isLifted;	// IMP=0x00000000004df849
- (_Bool)isPreparingToDrag;	// IMP=0x00000000004df81f
- (_Bool)canBeginLiftAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000004df79f
- (void)cancel;	// IMP=0x00000000004df73d

@end

