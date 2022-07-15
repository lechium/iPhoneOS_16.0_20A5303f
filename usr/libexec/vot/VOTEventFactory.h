//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXEventProcessor, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSRecursiveLock, NSString, SCRCGestureFactory, SCRCTargetSelectorTimer, SCRCThreadKey, VOTBrailleGestureManager, VOTDirectInteractionKeyboardManager, VOTElement, VOTEvent, VOTGestureEvent, VOTMapsExplorationGestureManager;
@protocol VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTEventFactoryCallbackProtocol, VOTRotorManagementProtocol;

@interface VOTEventFactory : NSObject
{
    SCRCGestureFactory *_gestureFactory;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    unsigned long long _edgePanGestureState;	// 24 = 0x18
    struct CGPoint _edgePanGestureStartPoint;	// 32 = 0x20
    double _edgePanGestureStartTime;	// 48 = 0x30
    struct CGPoint _edgePanGesturePausePoint;	// 56 = 0x38
    SCRCTargetSelectorTimer *_edgePanGestureSpeakHintTimer;	// 72 = 0x48
    long long _direction;	// 80 = 0x50
    long long _rotorSoundZone;	// 88 = 0x58
    long long _continuityZone;	// 96 = 0x60
    double _startPinchDistance;	// 104 = 0x68
    long long _fingerCount;	// 112 = 0x70
    double _travelDistance;	// 120 = 0x78
    struct CGPoint _tapHoldOffset;	// 128 = 0x80
    struct CGPoint _audiographScrubbingPreviousLocation;	// 144 = 0x90
    _Bool _canPlayBoundaryFeedback;	// 160 = 0xa0
    VOTGestureEvent *_lastDownEvent;	// 168 = 0xa8
    SCRCThreadKey *_threadKey;	// 176 = 0xb0
    NSRecursiveLock *_currentElementLock;	// 184 = 0xb8
    VOTElement *_currentElement;	// 192 = 0xc0
    VOTElement *_firstResponder;	// 200 = 0xc8
    double _lastEdgePressTime;	// 208 = 0xd0
    double _lastEchoTime;	// 216 = 0xd8
    double _rotateStartTime;	// 224 = 0xe0
    long long _rotateDirection;	// 232 = 0xe8
    SCRCTargetSelectorTimer *_tapHoldTimer;	// 240 = 0xf0
    SCRCTargetSelectorTimer *_elementSummaryTimer;	// 248 = 0xf8
    SCRCTargetSelectorTimer *_twoFingerHoldTimer;	// 256 = 0x100
    SCRCTargetSelectorTimer *_threeFingerHoldTimer;	// 264 = 0x108
    SCRCTargetSelectorTimer *_memorizeSoundTimer;	// 272 = 0x110
    SCRCTargetSelectorTimer *_systemControlLocationTimer;	// 280 = 0x118
    double _currentTouchForce;	// 288 = 0x120
    double _previewFingerStartingForce;	// 296 = 0x128
    struct CGPoint _previewFingerLocation;	// 304 = 0x130
    NSMutableArray *_previewFingerContextId;	// 320 = 0x140
    _Bool _isInPreview;	// 328 = 0x148
    double _previewStartTime;	// 336 = 0x150
    double _previewPopDelayTime;	// 344 = 0x158
    _Bool _isPreviewPinned;	// 352 = 0x160
    long long _currentOrbGestureMode;	// 360 = 0x168
    struct CGPoint _nativeSlidingOffset;	// 368 = 0x170
    struct CGPoint _nativeSlidingCenter;	// 384 = 0x180
    double _lastTwoFingerSlideTime;	// 400 = 0x190
    double _oldVolumeChangeDistance;	// 408 = 0x198
    double _volumeChangeDistance;	// 416 = 0x1a0
    SCRCTargetSelectorTimer *_volumeChangeTimer;	// 424 = 0x1a8
    SCRCTargetSelectorTimer *_wakeTapTimer;	// 432 = 0x1b0
    unsigned long long _watchWakeTapCount;	// 440 = 0x1b8
    double _lastWatchWakeUpTime;	// 448 = 0x1c0
    NSMutableArray *_snarfedWatchWakeRecords;	// 456 = 0x1c8
    _Bool _aotEnabled;	// 464 = 0x1d0
    struct __AXObserver *_axEventObserver;	// 472 = 0x1d8
    VOTGestureEvent *_currentGestureEvent;	// 480 = 0x1e0
    NSArray *_directInteractionElements;	// 488 = 0x1e8
    NSString *_zoomListenerIdentifier;	// 496 = 0x1f0
    MISSING_TYPE *_zigzag;	// 504 = 0x1f8
    double _lastNativeSlideCancel;	// 552 = 0x228
    struct os_unfair_lock_s _tapAndHoldLock;	// 560 = 0x230
    NSMutableArray *_tapAndHoldContextIds;	// 568 = 0x238
    long long _tapAndHoldFingerType;	// 576 = 0x240
    VOTElement *_tapAndHoldScribbleElement;	// 584 = 0x248
    struct CGPoint _systemControlStartPoint;	// 592 = 0x250
    int _systemControlPosition;	// 608 = 0x260
    _Bool _systemControlActivated;	// 612 = 0x264
    double _systemControlStartSwipeTime;	// 616 = 0x268
    double _systemControlFingerDownFollowupTime;	// 624 = 0x270
    double _lastScrollEventTime;	// 632 = 0x278
    long long _currentAccumulatedScroll;	// 640 = 0x280
    _Bool _scrollWheelIsActive;	// 648 = 0x288
    struct {
        _Bool tapAndHoldMode;
        _Bool tapAndHoldModeContextless;
        _Bool tapAndHoldOffsetNeedsUpdate;
        _Bool orbMode;
        _Bool firedElementSummaryTimer;
        _Bool rotating;
        _Bool memorizingData;
        _Bool twoFingerTapAndSlide;
        _Bool threeFingerTapAndSlide;
        _Bool splitSlide;
        _Bool handwritingOnly;
        _Bool didPlayStartLabelSound;
        _Bool sendingToDirectTouch;
        _Bool sendingToNativeSlide;
        _Bool gestureSawDownEvent;
        _Bool allowingSystemGesturePassthrough;
        _Bool hasSentFirstTrackingEventForGesture;
        _Bool audiographScrubbingMode;
    } _flags;	// 649 = 0x289
    double _gestureKeyboardShiftLockStartTime;	// 672 = 0x2a0
    VOTBrailleGestureManager *_brailleGestureManager;	// 680 = 0x2a8
    VOTMapsExplorationGestureManager *_mapsExplorationGestureManager;	// 688 = 0x2b0
    struct {
        _Bool tapDown;
        _Bool tapMoved;
        _Bool tapUp;
        _Bool heldDown;
        _Bool heldUp;
    } _audioAccButtonStates[3];	// 696 = 0x2b8
    unsigned long long _audioAccTapCount;	// 712 = 0x2c8
    double _audioAccLastDownTime;	// 720 = 0x2d0
    double _audioAccLastTapTime;	// 728 = 0x2d8
    _Bool _audioAccHoldSent;	// 736 = 0x2e0
    unsigned long long _currentSoundButton;	// 744 = 0x2e8
    unsigned long long _pendingSoundButton;	// 752 = 0x2f0
    unsigned long long _audioAccTouchGeneration;	// 760 = 0x2f8
    unsigned long long _audioAccPendingGeneration;	// 768 = 0x300
    SCRCTargetSelectorTimer *_audioAccTapTimer;	// 776 = 0x308
    struct __IOHIDEventSystemClient *_audioAccIOSystemPostBackClient;	// 784 = 0x310
    _Bool _nowPlayingState;	// 792 = 0x318
    unsigned long long _splitSlideFingerCount;	// 800 = 0x320
    NSDictionary *_handGestureCommandDict;	// 808 = 0x328
    id <VOTElementManagementProtocol> _elementManager;	// 816 = 0x330
    id <VOTRotorManagementProtocol> _rotorManager;	// 824 = 0x338
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 832 = 0x340
    id <VOTEventFactoryCallbackProtocol> _delegate;	// 840 = 0x348
    AXDispatchTimer *_handwritingCaptureTimer;	// 848 = 0x350
    VOTDirectInteractionKeyboardManager *_directInteractionKeyboardManager;	// 856 = 0x358
    AXEventProcessor *_eventProcessor;	// 864 = 0x360
    VOTElement *_lastTouchedDirectTouchElement;	// 872 = 0x368
    VOTEvent *_lastGestureEvent;	// 880 = 0x370
}

+ (void)_updateZoomFrame:(struct CGRect)arg1;	// IMP=0x00200000000e7214
+ (void)initialize;	// IMP=0x00100000000e5391
- (void).cxx_destruct;	// IMP=0x00200000000f6007
@property(retain, nonatomic) VOTEvent *lastGestureEvent; // @synthesize lastGestureEvent=_lastGestureEvent;
@property(retain, nonatomic) VOTElement *lastTouchedDirectTouchElement; // @synthesize lastTouchedDirectTouchElement=_lastTouchedDirectTouchElement;
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(readonly, nonatomic) VOTDirectInteractionKeyboardManager *directInteractionKeyboardManager; // @synthesize directInteractionKeyboardManager=_directInteractionKeyboardManager;
@property(retain, nonatomic, setter=_setHandwritingCaptureTimer:) AXDispatchTimer *_handwritingCaptureTimer; // @synthesize _handwritingCaptureTimer;
@property(nonatomic) __weak id <VOTEventFactoryCallbackProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VOTDirectTouchManagementProtocol> directTouchManager; // @synthesize directTouchManager=_directTouchManager;
@property(nonatomic) __weak id <VOTRotorManagementProtocol> rotorManager; // @synthesize rotorManager=_rotorManager;
@property(nonatomic) __weak id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (id)_mapAXEventToVOTEvent:(id)arg1;	// IMP=0x00100000000f5e00
- (_Bool)_handleVoiceOverGreySupportAccessibilityEvent:(id)arg1;	// IMP=0x00100000000f5d46
- (void)_updateVoiceOverHandGesturesActionCustomizations;	// IMP=0x00100000000f5cd7
- (_Bool)_handleAccessibilityEvent:(id)arg1;	// IMP=0x00100000000f5cae
- (void)brailleGestureManager:(id)arg1 unsetForcedOrientationAndAnnounce:(_Bool)arg2;	// IMP=0x00100000000f5c75
- (void)brailleGestureManager:(id)arg1 setForcedOrientation:(long long)arg2 shouldAnnounce:(_Bool)arg3;	// IMP=0x00100000000f5c2d
- (void)gesturedTextInputManager:(id)arg1 accessCurrentGesturedTextInputElement:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f5bbd
- (void)gesturedTextInputManager:(id)arg1 moveToElementMatchingRotorType:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00100000000f5b6c
- (id)votActionForEdgePanGestureState:(unsigned long long)arg1;	// IMP=0x00100000000f5b2f
- (double)_edgePanGestureStartThreshold;	// IMP=0x00100000000f5ae2
- (void)_updateCurrentElementOrbGestureMode;	// IMP=0x00100000000f5887
- (_Bool)_shouldDismissPreviewOnLift;	// IMP=0x00100000000f5853
- (void)_liftPreviewFinger;	// IMP=0x00100000000f567c
- (void)_switchToTrackingMode;	// IMP=0x00100000000f53c5
- (void)_simulatePeekAndSwitchToTapHoldMode;	// IMP=0x00100000000f4cba
- (void)_simulateEdgePress;	// IMP=0x00100000000f4b95
- (void)_simulatePop;	// IMP=0x00100000000f48d6
- (void)_reducePreviewFingerStartingForce:(double)arg1;	// IMP=0x00100000000f4668
- (void)_simulatePreviewActionGesture;	// IMP=0x00100000000f43d2
- (_Bool)_isPreviewElementSelected;	// IMP=0x00100000000f435d
- (void)directInteractionModeStatus:(_Bool)arg1;	// IMP=0x00100000000f4222
@property(readonly, nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
@property(readonly, nonatomic) unsigned long long fingerCount; // @dynamic fingerCount;
- (void)_setFingerCount:(unsigned long long)arg1;	// IMP=0x00100000000f41ef
@property(readonly, nonatomic) struct CGPoint fingerPosition; // @dynamic fingerPosition;
- (void)_handleEventWithData:(id)arg1;	// IMP=0x00100000000f3ea3
- (void)_convertZoomRecordToDeviceRecord:(id)arg1;	// IMP=0x00100000000f3cab
- (struct CGPoint)_convertZoomPointToDevicePoint:(struct CGPoint)arg1;	// IMP=0x00100000000f3bf5
- (struct CGRect)_convertFrame:(struct CGRect)arg1 toPortraitFromOrientation:(long long)arg2;	// IMP=0x00100000000f3aa1
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x00100000000f3893
- (void)_handleKeyboardVisibilityChanged:(id)arg1;	// IMP=0x00100000000f3803
- (void)_handleElementPreviewNotification:(id)arg1;	// IMP=0x00100000000f3790
- (void)_endAudiographScrubbingMode;	// IMP=0x00100000000f36f6
- (void)_handleAudiographScrubbingPositionChanged;	// IMP=0x00100000000f3429
- (void)_beginAudiographScrubbingMode;	// IMP=0x00100000000f32f9
- (_Bool)_canScribbleWithElement:(id)arg1;	// IMP=0x00100000000f32ad
- (void)_liftFromTapAndHoldAndResetFingers:(_Bool)arg1;	// IMP=0x00100000000f3155
- (void)_markTapAndHoldOffsetAsDirty;	// IMP=0x00100000000f30d4
- (void)_scheduleUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00100000000f303a
- (void)_cancelUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00100000000f2fad
- (void)_endScribbleTapAndHoldMode;	// IMP=0x00100000000f2e86
- (void)_startScribbleTapAndHoldModeTimeout;	// IMP=0x00100000000f2dec
- (void)_cancelScribbleTapAndHoldModeTimeout;	// IMP=0x00100000000f2d5f
- (void)_processTapAndHoldMode:(id)arg1;	// IMP=0x00100000000f2958
- (void)_processIdle:(struct CGPoint)arg1;	// IMP=0x00100000000f2842
- (void)_touchLiftAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000f25b8
- (id)tapAndHoldContextNumbers;	// IMP=0x00100000000f244b
- (void)_touchDragAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00100000000f212f
- (void)_touchDownAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00100000000f1e13
- (void)_contextlessTouchWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;	// IMP=0x00100000000f1afb
- (void)_threeFingerHoldFired;	// IMP=0x00100000000f1a8e
- (void)_twoFingerHoldFired;	// IMP=0x00100000000f1928
- (void)_startTouchDownForTapAndHoldActionWithCenter:(id)arg1 force:(id)arg2 altitude:(id)arg3 azimuth:(id)arg4;	// IMP=0x00100000000f17f4
- (struct CGPoint)_startPointForScribbleWithElement:(id)arg1 originalStartPoint:(struct CGPoint)arg2;	// IMP=0x00100000000f1758
- (struct CGPoint)_updateTapAndHoldLocationDataForElement:(id)arg1;	// IMP=0x00100000000f131a
- (void)_tapHoldFired:(id)arg1;	// IMP=0x00100000000f0913
- (_Bool)_tapAndHoldModeIsForScribble;	// IMP=0x00100000000f0902
- (void)_edgePanGestureSpeakHintTimerFired;	// IMP=0x00100000000f088d
- (void)_stopMemorizingSession;	// IMP=0x00100000000f07a8
- (void)_startLabelElementSoundPlay;	// IMP=0x00100000000f06f8
- (void)firstResponderDidUpdate:(id)arg1;	// IMP=0x00100000000f059c
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x00100000000f0531
- (_Bool)directInteractionGestureInProgress;	// IMP=0x00100000000f0525
- (void)directInteractionElementsUpdated:(id)arg1;	// IMP=0x00100000000f04f2
- (void)_cancelTapAndHold:(struct CGPoint)arg1 forScribble:(_Bool)arg2;	// IMP=0x00100000000f01d8
- (void)_cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00100000000f01c4
- (void)_cancelTapAndHoldWithValue:(id)arg1;	// IMP=0x00100000000f0193
- (void)cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00100000000f011c
- (void)_outputElementSummaryFired;	// IMP=0x00100000000f00b5
@property(nonatomic) long long orientation; // @dynamic orientation;
- (void)_beginNativeSliding:(id)arg1;	// IMP=0x00100000000efefb
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x00100000000efea1
- (id)currentElement;	// IMP=0x00100000000efe87
- (void)_commitDeferredZoomInfoIfAppropriate;	// IMP=0x00100000000efe65
- (void)_commitDeferredZoomInfo;	// IMP=0x00100000000efde7
- (void)_processGestureEvent:(id)arg1;	// IMP=0x00100000000ed430
- (void)_playFeedbackForGestureState:(unsigned long long)arg1 gestureComplete:(_Bool)arg2;	// IMP=0x00100000000ed2e2
- (void)_transitionToGestureState:(unsigned long long)arg1 playHaptic:(_Bool)arg2;	// IMP=0x00000000000ed1c5
- (void)_transitionToGestureState:(unsigned long long)arg1;	// IMP=0x00100000000ed1ae
- (id)_updateEdgePanGestureForState:(long long)arg1;	// IMP=0x00100000000ec8b8
- (double)_edgeGestureScaleFactor:(_Bool)arg1;	// IMP=0x00100000000ec81d
- (_Bool)_willStartEdgePanGestureForEvent:(id)arg1;	// IMP=0x00100000000ec560
- (_Bool)_handleOrbEvent:(id)arg1;	// IMP=0x00100000000ec558
- (id)_touchLocationsForGestureEvent:(id)arg1;	// IMP=0x00100000000ec232
- (void)updateOrientation;	// IMP=0x00100000000ec1f5
- (_Bool)_gestureEventIsInvalid:(id)arg1;	// IMP=0x00100000000ec160
- (_Bool)directTouchElementsPresent;	// IMP=0x00100000000ec140
- (_Bool)_handleDirectInteractionEvent:(id)arg1;	// IMP=0x00100000000eb6bd
- (_Bool)_shouldUseGesturedTextInputManager;	// IMP=0x00100000000eb68a
- (struct CGPoint)adjustedPointForFactoryPoint:(struct CGPoint)arg1 forOrientation:(long long)arg2;	// IMP=0x00100000000eb628
- (void)gestureTappingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000ea2c9
- (_Bool)_isStylusGesture;	// IMP=0x00100000000ea286
- (id)_handleGestureKeyboardTappingCallback:(unsigned long long)arg1 fingerCount:(unsigned long long)arg2 isDown:(_Bool)arg3 originalLocation:(struct CGPoint)arg4 convertedLocation:(struct CGPoint)arg5;	// IMP=0x00100000000ea08a
- (void)gestureFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00100000000e9ffd
- (void)gestureSplitTappingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000e9f00
- (_Bool)shouldBlockSplitTapGestureWithFactory:(id)arg1;	// IMP=0x00100000000e9ef8
- (_Bool)_updateFingersInSystemControlLocation:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2 isLift:(_Bool)arg3;	// IMP=0x00100000000e9a58
- (struct CGPoint)_averagePointForLastDownEvent;	// IMP=0x00100000000e97f6
- (void)_resetSystemControlStatus;	// IMP=0x00100000000e97ac
- (void)_sendSystemControlEvent:(id)arg1;	// IMP=0x00100000000e96d8
- (int)_systemControlPosition:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2;	// IMP=0x00100000000e94e7
- (void)_systemControlLocationTimer;	// IMP=0x00100000000e9424
- (void)_volumeChangeTimer;	// IMP=0x00100000000e92f3
- (void)_gestureTrackingCallbackWithFactory:(id)arg1 isHandlingSystemControlEvent:(_Bool)arg2;	// IMP=0x00100000000e8b58
- (void)_updateFirstnessOfTrackingEvent:(id)arg1;	// IMP=0x00100000000e8afe
- (_Bool)_isEdgePressSupportedAtPosition:(struct CGPoint)arg1;	// IMP=0x00100000000e8a66
- (_Bool)_shouldAttemptTracking;	// IMP=0x00100000000e89ea
- (_Bool)_isTapAndHoldPending;	// IMP=0x00100000000e89a8
- (void)gestureTrackingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000e8994
- (void)gestureGutterUpCallbackWithFactory:(id)arg1;	// IMP=0x00100000000e898e
- (void)processEvent:(id)arg1;	// IMP=0x00100000000e8745
- (_Bool)processEventAsGesturedTextInput:(id)arg1;	// IMP=0x00100000000e86b8
- (id)_currentGesturedTextInputManager;	// IMP=0x00100000000e86a2
- (id)_currentGesturedTextInputManagerAndCommandResolver:(id)arg1 forCommandResolver:(_Bool)arg2;	// IMP=0x00100000000e8375
- (id)_commandResolver;	// IMP=0x00100000000e82ec
- (void)_handleSOSMedicalIDShown;	// IMP=0x00100000000e826f
- (int)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x00100000000e80d6
- (_Bool)registerForEvents;	// IMP=0x00100000000e7a4e
- (void)unregisterForEvents;	// IMP=0x00100000000e79a9
- (void)resetEventFactory;	// IMP=0x00100000000e7993
- (void)_handleRotorChangedNotification:(id)arg1;	// IMP=0x00100000000e7777
- (void)dealloc;	// IMP=0x00100000000e7519
- (void)shutdown;	// IMP=0x00100000000e74ab
- (void)_registerForZoomListener;	// IMP=0x00100000000e7230
- (void)_registerForIOHIDUsage;	// IMP=0x00100000000e6ee7
- (_Bool)_iosEventFilter:(id)arg1;	// IMP=0x00100000000e6b1a
- (id)_preprocessEventForSimulator:(id)arg1;	// IMP=0x00100000000e696a
- (void)_handleIOHIDEvent:(id)arg1;	// IMP=0x00100000000e6203
- (id)_denormalizeEventRepresentation:(id)arg1;	// IMP=0x00100000000e61e7
- (void)_wakeTapFired;	// IMP=0x00100000000e5f8e
- (_Bool)shouldSnarfEventForTapWakeGesture:(id)arg1;	// IMP=0x00100000000e5ebe
- (void)_updateTapSpeedFromPreferences;	// IMP=0x00100000000e5e22
- (id)init;	// IMP=0x00100000000e53ee
- (_Bool)mapsExplorationInputActive;	// IMP=0x00100000000e536f
- (id)_mapsExplorationGestureManager;	// IMP=0x00100000000e5311
@property(readonly, nonatomic) _Bool brailleInputActive;
- (id)_brailleGestureManager;	// IMP=0x00100000000e5283
- (id)gestureFactory;	// IMP=0x00100000000e5275
- (void)setGestureFactory:(id)arg1;	// IMP=0x00100000000e5264

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
