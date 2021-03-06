//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol BKHIDEventSenderInfo;

@interface BKMouseEventAccumulator : NSObject
{
    unsigned long long _eventTypeMask;	// 8 = 0x8
    unsigned long long _interpolateEventTypeMask;	// 16 = 0x10
    CDUnknownBlockType _postEventAsyncBlock;	// 24 = 0x18
    NSMutableDictionary *_eventStateBySenderID;	// 32 = 0x20
    NSMutableSet *_doomedSenderIDs;	// 40 = 0x28
    struct XYInterpolatorWithAcceleration _pointerInterpolator;	// 48 = 0x30
    struct CGPoint _pointerUnacceleratedDelta;	// 144 = 0x90
    struct CGPoint _pointerAcceleratedDelta;	// 160 = 0xa0
    struct PhasedEventTracker<6U> _scrollPhaseTracker;	// 176 = 0xb0
    struct XYInterpolatorWithAcceleration _scrollInterpolator;	// 208 = 0xd0
    struct CGPoint _scrollUnacceleratedDelta;	// 304 = 0x130
    struct CGPoint _scrollAcceleratedDelta;	// 320 = 0x140
    long long _discreteScrollGeneration;	// 336 = 0x150
    struct PhasedEventTracker<4U> _translationPhaseTracker;	// 344 = 0x158
    struct XYInterpolator _translationInterpolator;	// 376 = 0x178
    struct CGPoint _translationDelta;	// 456 = 0x1c8
    struct PhasedEventTracker<7U> _scalePhaseTracker;	// 472 = 0x1d8
    struct ZInterpolator _scaleInterpolator;	// 504 = 0x1f8
    double _scaleZ;	// 560 = 0x230
    struct PhasedEventTracker<5U> _rotationPhaseTracker;	// 568 = 0x238
    struct ZInterpolator _rotationInterpolator;	// 600 = 0x258
    double _rotationZ;	// 656 = 0x290
    NSMutableArray *_digitizerEvents;	// 664 = 0x298
    unsigned int _buttonMask;	// 672 = 0x2a0
    NSMutableArray *_buttonEvents;	// 680 = 0x2a8
    _Bool _touchingPathIndexesDidChange;	// 688 = 0x2b0
    _Bool _buttonMaskDidChange;	// 689 = 0x2b1
    _Bool _scrollPhaseDidChange;	// 690 = 0x2b2
    _Bool _isInvalid;	// 691 = 0x2b3
    _Bool _shouldScrollNaturally;	// 692 = 0x2b4
    _Bool _shouldSwapPrimaryAndSecondaryButtons;	// 693 = 0x2b5
    _Bool _shouldUseButtonDownRecenteringBehavior;	// 694 = 0x2b6
    unsigned short _scrollPhase;	// 696 = 0x2b8
    unsigned int _previousButtonMask;	// 700 = 0x2bc
    NSIndexSet *_touchingPathIndexes;	// 704 = 0x2c0
    id <BKHIDEventSenderInfo> _mostRecentSender;	// 712 = 0x2c8
}

- (id).cxx_construct;	// IMP=0x002000000006ba74
- (void).cxx_destruct;	// IMP=0x001000000006b9db
@property(nonatomic) _Bool shouldUseButtonDownRecenteringBehavior; // @synthesize shouldUseButtonDownRecenteringBehavior=_shouldUseButtonDownRecenteringBehavior;
@property(nonatomic) _Bool shouldSwapPrimaryAndSecondaryButtons; // @synthesize shouldSwapPrimaryAndSecondaryButtons=_shouldSwapPrimaryAndSecondaryButtons;
@property(nonatomic) _Bool shouldScrollNaturally; // @synthesize shouldScrollNaturally=_shouldScrollNaturally;
@property(readonly, nonatomic) id <BKHIDEventSenderInfo> mostRecentSender; // @synthesize mostRecentSender=_mostRecentSender;
@property(readonly, nonatomic) unsigned short scrollPhase; // @synthesize scrollPhase=_scrollPhase;
@property(retain, nonatomic) NSMutableArray *digitizerEvents; // @synthesize digitizerEvents=_digitizerEvents;
@property(readonly, nonatomic) NSIndexSet *touchingPathIndexes; // @synthesize touchingPathIndexes=_touchingPathIndexes;
@property(readonly, nonatomic) unsigned int buttonMask; // @synthesize buttonMask=_buttonMask;
@property(readonly, nonatomic) unsigned int previousButtonMask; // @synthesize previousButtonMask=_previousButtonMask;
@property(readonly, nonatomic) unsigned long long eventTypeMask; // @synthesize eventTypeMask=_eventTypeMask;
- (id)_eventStateForSender:(id)arg1;	// IMP=0x001000000006b71b
- (void)_terminateScrollingForSender:(id)arg1;	// IMP=0x001000000006b6c8
- (void)_terminateAllGesturesForSender:(id)arg1;	// IMP=0x001000000006b5ef
- (void)addTranslationEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x001000000006b2d2
- (void)addRotationEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x001000000006b005
- (void)addScaleEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x001000000006ad35
- (void)addDigitizerEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000069b86
- (void)_updateTouchingPathIndexesFromDeviceEventState;	// IMP=0x0010000000069a65
- (void)addButtonEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000069933
- (void)addButtonNumber:(long long)arg1 down:(_Bool)arg2 fromSender:(id)arg3;	// IMP=0x0010000000069422
- (_Bool)senderPostsAtHighFrequency:(unsigned long long)arg1;	// IMP=0x001000000006936d
- (void)deviceServiceDidTerminate:(id)arg1;	// IMP=0x00100000000691f9
- (void)deviceServiceDidAppear:(id)arg1;	// IMP=0x00100000000691de
- (void)frameDidEnd;	// IMP=0x0010000000068c17
- (void)frameWillBegin;	// IMP=0x00100000000689ff
- (void)nextEvent;	// IMP=0x00100000000689aa
- (void)appendSubeventsForEventTypeMask:(unsigned long long)arg1 toTopLevelEvent:(struct __IOHIDEvent *)arg2 interfaceOrientation:(long long)arg3 getEventSummary:(unsigned long long *)arg4;	// IMP=0x00100000000681f0
- (void)addTopLevelEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x001000000006783b
- (void)addSyntheticTopLevelEventIfNeeded;	// IMP=0x0010000000067815
- (void)addScrollEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000067007
@property(readonly, nonatomic) struct CGPoint unacceleratedRelativePointerPosition;
@property(readonly, nonatomic) struct CGPoint acceleratedRelativePointerPosition;
@property(readonly, nonatomic) _Bool touchingPathIndexesDidChange;
@property(readonly, nonatomic) _Bool buttonMaskDidChange;
@property(readonly, nonatomic) unsigned long long scrollBeganTimestamp;
@property(readonly, nonatomic) _Bool scrollPhaseDidChange;
@property(readonly, nonatomic) long long hitTestReason;
- (_Bool)isSenderLocked;	// IMP=0x0010000000066ee8
- (void)invalidate;	// IMP=0x0010000000066ec7
- (void)dealloc;	// IMP=0x0010000000066cc1
- (id)initWithInterpolatedEventTypeMask:(unsigned long long)arg1 postEventsBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066c31
- (id)init;	// IMP=0x0010000000066b9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

