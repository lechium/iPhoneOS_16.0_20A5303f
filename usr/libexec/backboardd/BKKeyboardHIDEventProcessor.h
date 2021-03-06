//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayController, BKIOHIDServiceMatcher, BKKeyboardInfo, BSCompoundAssertion, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol BKHIDEventDispatcher, BKHIDEventProcessorRegistering, BKHIDSystemInterfacing, BSInvalidatable;

@interface BKKeyboardHIDEventProcessor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_allKeyboardsBySenderID;	// 16 = 0x10
    NSMutableArray *_usableKeyboards;	// 24 = 0x18
    NSMutableArray *_eventRecognizers;	// 32 = 0x20
    NSMutableSet *_keyCommandsToAuthenticate;	// 40 = 0x28
    NSString *_keyboardLayout;	// 48 = 0x30
    BSCompoundAssertion *_keyboardObserverAssertion;	// 56 = 0x38
    long long _globalActiveModifiers;	// 64 = 0x40
    id <BSInvalidatable> _displayBlankingObservationAssertion;	// 72 = 0x48
    long long _countOfKeyboardsRequiringAllSmartCoverHESDisengagedForOpen;	// 80 = 0x50
    NSMutableDictionary *_keyDownToEventSequence;	// 88 = 0x58
    NSMutableDictionary *_senderIDToKeysDown;	// 96 = 0x60
    NSMutableSet *_senderIDsWithModifiersOnly;	// 104 = 0x68
    BKIOHIDServiceMatcher *_keyboardServiceMatcher;	// 112 = 0x70
    id <BKHIDSystemInterfacing> _eventSystemInterface;	// 120 = 0x78
    id <BKHIDEventDispatcher> _eventDispatcher;	// 128 = 0x80
    id <BKHIDEventProcessorRegistering> _eventProcessorRegistry;	// 136 = 0x88
    BKDisplayController *_displayController;	// 144 = 0x90
    BKKeyboardInfo *_primaryKeyboardInfo;	// 152 = 0x98
    NSMutableSet *_downModifierKeys;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000000363aa
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000036272
- (void)serviceDidDisappear:(id)arg1;	// IMP=0x0010000000036217
- (void)matcher:(id)arg1 servicesDidMatch:(id)arg2;	// IMP=0x0010000000036146
- (void)display:(id)arg1 didBecomeBlank:(_Bool)arg2;	// IMP=0x00100000000360fd
- (void)bufferDidEndDraining:(id)arg1;	// IMP=0x0010000000036069
- (void)bufferWillBeginDraining:(id)arg1;	// IMP=0x0010000000036063
- (void)bufferingDidAddNewBuffers:(id)arg1;	// IMP=0x0010000000035f94
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 withContext:(id)arg2 buffer:(id)arg3 sequence:(id)arg4 sender:(id)arg5 dispatcher:(id)arg6 resolution:(id)arg7;	// IMP=0x0010000000035e9d
- (void)postEvent:(struct __IOHIDEvent *)arg1 withContext:(id)arg2 toResolution:(id)arg3 fromSequence:(id)arg4;	// IMP=0x001000000003593b
- (void)conformsToBKHIDBufferedEventProcessor;	// IMP=0x0010000000035935
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x001000000003581a
- (void)_modifierRemappingsDidChange;	// IMP=0x001000000003558d
- (void)_lock_setCapsLockActive:(_Bool)arg1 onSenderID:(unsigned long long)arg2;	// IMP=0x00100000000352dd
- (void)_lock_postSyntheticCapsLockPressForKeyboard:(id)arg1;	// IMP=0x00100000000351c2
- (void)_lock_smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x00100000000350d4
- (void)smartKeyboardAttachmentStateDidChange:(id)arg1;	// IMP=0x0010000000035079
- (void)_lock_stopWatchingForGestures:(id)arg1;	// IMP=0x0010000000034fa4
- (void)_lock_watchForGestures:(id)arg1;	// IMP=0x0010000000034b63
- (void)_lock_handleKeyEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x00100000000348a2
- (void)_lock_dispatchKeyEvent:(struct __IOHIDEvent *)arg1 keyCommand:(id)arg2 keyboardInfo:(id)arg3 eventSource:(int)arg4 fromSender:(id)arg5 dispatcher:(id)arg6;	// IMP=0x00100000000340cb
- (void)_lock_applyDeliveryInformation:(id)arg1 resolution:(id)arg2 toEvent:(struct __IOHIDEvent *)arg3;	// IMP=0x0010000000033e00
- (void)_lock_handleUnicodeEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2 dispatcher:(id)arg3;	// IMP=0x0010000000033c7f
- (int)_eventSourceForKeyboardInfo:(id)arg1 sender:(id)arg2;	// IMP=0x0010000000033c4c
- (void)_lock_cancelKeyDownEvents:(id)arg1;	// IMP=0x0010000000033b75
- (void)_lock_usableKeyboardDetached:(id)arg1;	// IMP=0x00100000000339ab
- (void)_lock_removeSenderIDFromTracking:(unsigned long long)arg1;	// IMP=0x00100000000336d9
- (void)_lock_usableKeyboardAttached:(id)arg1;	// IMP=0x001000000003345f
- (void)_lock_setPrimaryKeyboard:(id)arg1;	// IMP=0x00100000000332c6
- (void)_lock_keyboardRemoved:(id)arg1;	// IMP=0x001000000003304f
- (void)_lock_keyboardsDetected:(id)arg1;	// IMP=0x0010000000032fd2
- (void)_lock_setKeyboardLightsSuspended:(_Bool)arg1;	// IMP=0x0010000000032e6e
- (_Bool)_lock_anyKeyboardHasCapsLockActive;	// IMP=0x0010000000032d58
- (long long)_lock_activeModifiers;	// IMP=0x0010000000032d02
- (void)_lock_updateGlobalModifierState;	// IMP=0x0010000000032b83
@property(copy) NSSet *keyCommandsToAuthenticate;
- (_Bool)capsLockKeyHasLanguageSwitchLabel;	// IMP=0x0010000000032aed
@property(getter=isCapsLockLightOn) _Bool capsLockLightOn;
- (void)setStandardType:(unsigned int)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x00100000000328b7
- (void)setCapsLockDelayOverride:(double)arg1;	// IMP=0x001000000003276c
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1;	// IMP=0x001000000003262a
- (id)devicePropertiesForSenderID:(unsigned long long)arg1;	// IMP=0x001000000003248c
- (_Bool)keyboardWantsStandardTypeOverrideForSenderID:(unsigned long long)arg1;	// IMP=0x00100000000322be
- (_Bool)isCapsLockLightOnForSenderID:(unsigned long long)arg1;	// IMP=0x0010000000032211
- (void)setCapsLockActive:(_Bool)arg1 onSenderID:(unsigned long long)arg2;	// IMP=0x00100000000321c3
- (void)setCapsLockDelayOverride:(double)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x0010000000032119
- (void)setRomanCapsLockSwitchModeActive:(_Bool)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x0010000000032073
- (void)setKeyboardLayout:(id)arg1 forSenderID:(unsigned long long)arg2;	// IMP=0x0010000000031e65
- (id)keyboardLanguageForSenderID:(unsigned long long)arg1;	// IMP=0x0010000000031db2
- (id)addGlobalKeyboardObserver:(id)arg1;	// IMP=0x0010000000031c61
@property(readonly) long long activeModifiers;
@property(retain) NSString *keyboardLayout;
- (int)eventSourceForSender:(id)arg1;	// IMP=0x0010000000031815
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x00100000000316b6
- (id)initWithContext:(id)arg1;	// IMP=0x00100000000311b9

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

