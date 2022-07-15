//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIEvent.h"

@class NSHashTable, NSMutableSet, NSSet, UIView, UIWindow, _UIDragEventSample, _UIDropSessionImpl, _UIInternalDraggingSessionDestination, _UIInternalDraggingSessionSource;

__attribute__((visibility("hidden")))
@interface UIDragEvent : UIEvent
{
    _UIDragEventSample *_currentSample;	// 56 = 0x38
    UIView *_previousEventView;	// 64 = 0x40
    UIView *_eventView;	// 72 = 0x48
    NSMutableSet *_beginningGestureRecognizers;	// 80 = 0x50
    NSMutableSet *_updatingGestureRecognizers;	// 88 = 0x58
    NSMutableSet *_exitingGestureRecognizers;	// 96 = 0x60
    NSMutableSet *_endingGestureRecognizers;	// 104 = 0x68
    NSMutableSet *_ignoredGestureRecognizers;	// 112 = 0x70
    NSMutableSet *_dynamicGestureRecognizers;	// 120 = 0x78
    NSHashTable *_ownersQueriedForDynamicGestures;	// 128 = 0x80
    NSMutableSet *_dynamicInteractions;	// 136 = 0x88
    _Bool _ignoreDragEnd;	// 144 = 0x90
    _Bool _needsHitTestReset;	// 145 = 0x91
    _Bool _dragFailed;	// 146 = 0x92
    CDUnknownBlockType _dragFailedCallback;	// 152 = 0x98
    unsigned int _dragSessionID;	// 160 = 0xa0
    _UIInternalDraggingSessionDestination *_sessionDestination;	// 168 = 0xa8
    _UIInternalDraggingSessionSource *_sessionSource;	// 176 = 0xb0
}

+ (_Bool)_isSessionIDValid:(unsigned int)arg1;	// IMP=0x0060000000ebacc0
+ (void)_invalidateSessionID:(unsigned int)arg1;	// IMP=0x0060000000ebac81
- (void).cxx_destruct;	// IMP=0x0000000000ebb0c1
@property(readonly, nonatomic, getter=_sessionSource) _UIInternalDraggingSessionSource *sessionSource; // @synthesize sessionSource=_sessionSource;
@property(readonly, nonatomic, getter=_sessionDestination) _UIInternalDraggingSessionDestination *sessionDestination; // @synthesize sessionDestination=_sessionDestination;
@property(readonly, nonatomic) unsigned int dragSessionID; // @synthesize dragSessionID=_dragSessionID;
- (void)_reset;	// IMP=0x0000000000ebae86
- (void)dealloc;	// IMP=0x0000000000ebae48
- (void)_setNeedsHitTestReset;	// IMP=0x0000000000ebacee
@property(readonly, nonatomic, getter=_windowServerHitTestContextID) unsigned int windowServerHitTestContextID;
@property(readonly, nonatomic, getter=_touchRoutingPolicyContextID) unsigned int touchRoutingPolicyContextID;
- (void)_dragFailedWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ebaa3c
- (void)_ignoreDragEnd;	// IMP=0x0000000000ebaa2b
- (void)_wasDeliveredToGestureRecognizers;	// IMP=0x0000000000eba59d
- (_Bool)_isReadyForReset;	// IMP=0x0000000000eba52c
@property(readonly, nonatomic, getter=_dynamicGestureRecognizers) NSSet *dynamicGestureRecognizers;
- (id)_updatingDropGestureRecognizers;	// IMP=0x0000000000eba457
- (void)_updateGesturesFromCurrentSample;	// IMP=0x0000000000eb91be
- (void)_sendIfNeeded;	// IMP=0x0000000000eb9146
- (void)_updateFromCurrentSample;	// IMP=0x0000000000eb8e36
@property(readonly, nonatomic, getter=_dropSession) _UIDropSessionImpl *dropSession;
@property(readonly, nonatomic) _Bool hasActiveGestureRecognizers;
@property(readonly, nonatomic) _Bool isPolicyDriven;
@property(readonly, nonatomic) UIWindow *eventWindow;
@property(readonly, nonatomic, getter=_hitTestedView) UIView *hitTestedView;
- (void)_removeQueriedOwnerForDynamicGesturesIfNeeded:(id)arg1;	// IMP=0x0000000000eb8cf9
- (void)_ignoreGestureRecognizer:(id)arg1;	// IMP=0x0000000000eb8c71
- (void)_removeGestureRecognizer:(id)arg1;	// IMP=0x0000000000eb8c04
- (_Bool)_shouldSendEvent;	// IMP=0x0000000000eb8bc6
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;	// IMP=0x0000000000eb8a8c
@property(readonly, nonatomic) _Bool isFromAccessibilitySession;
@property(readonly, nonatomic) struct CGPoint locationInSceneReferenceSpace;
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x0000000000eb88be
- (_Bool)_isTouchRoutingPolicyBased;	// IMP=0x0000000000eb88ac
- (id)_windows;	// IMP=0x0000000000eb8841
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000eb87bb
- (id)_gestureRecognizersForWindow:(id)arg1;	// IMP=0x0000000000eb8718
- (long long)type;	// IMP=0x0000000000eb870d
- (id)initWithDragSessionID:(unsigned int)arg1 environment:(id)arg2;	// IMP=0x0000000000eb8553

@end
