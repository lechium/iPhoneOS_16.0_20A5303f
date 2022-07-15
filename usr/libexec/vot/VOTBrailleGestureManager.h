//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXDispatchTimer, BKSAccelerometer, NSArray, NSDictionary, NSMutableDictionary, NSString, VOTBrailleGestureSpellingSuggestionHandler, VOTBrailleGestureTranslator, VOTTextMovementManager;
@protocol BSInvalidatable, VOTBrailleGestureManagerDelegate;

@interface VOTBrailleGestureManager
{
    VOTBrailleGestureTranslator *_gestureTranslator;	// 8 = 0x8
    VOTBrailleGestureSpellingSuggestionHandler *_spellingSuggestionHandler;	// 16 = 0x10
    BKSAccelerometer *_accelerometer;	// 24 = 0x18
    NSMutableDictionary *_allTouchLocationsByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_firstTouchLocationsByIdentifier;	// 40 = 0x28
    _Bool _shouldUpdateDotPositions;	// 48 = 0x30
    _Bool _exploring;	// 49 = 0x31
    _Bool _splitting;	// 50 = 0x32
    _Bool _didMoveFingersTooFarForInput;	// 51 = 0x33
    _Bool _didAnnounceExplorationMode;	// 52 = 0x34
    _Bool _didAnnounceBrailleTypingProperties;	// 53 = 0x35
    _Bool _didStartFullGesture;	// 54 = 0x36
    _Bool _didEnterInvalidGesture;	// 55 = 0x37
    id <VOTBrailleGestureManagerDelegate> _brailleGestureManagerDelegate;	// 56 = 0x38
    long long _typingMode;	// 64 = 0x40
    long long _keyboardOrientation;	// 72 = 0x48
    NSString *_lastPrintBrailleCharacter;	// 80 = 0x50
    NSDictionary *_lastTouchLocationsByIdentifier;	// 88 = 0x58
    AXDispatchTimer *_speakingDelayTimer;	// 96 = 0x60
    AXDispatchTimer *_brailleTypingPropertiesAnnouncementTimer;	// 104 = 0x68
    AXDispatchTimer *_warningTonesTimer;	// 112 = 0x70
    AXDispatchTimer *_lockScreenDimmingTimer;	// 120 = 0x78
    AXDispatchTimer *_logBSIUsageTimer;	// 128 = 0x80
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 136 = 0x88
    VOTTextMovementManager *_movementManager;	// 144 = 0x90
    NSArray *_calibrationStartTouchPoints;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000122a5f
@property(retain, nonatomic) NSArray *calibrationStartTouchPoints; // @synthesize calibrationStartTouchPoints=_calibrationStartTouchPoints;
@property(retain, nonatomic) VOTTextMovementManager *movementManager; // @synthesize movementManager=_movementManager;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) AXDispatchTimer *logBSIUsageTimer; // @synthesize logBSIUsageTimer=_logBSIUsageTimer;
@property(retain, nonatomic) AXDispatchTimer *lockScreenDimmingTimer; // @synthesize lockScreenDimmingTimer=_lockScreenDimmingTimer;
@property(nonatomic) _Bool didEnterInvalidGesture; // @synthesize didEnterInvalidGesture=_didEnterInvalidGesture;
@property(nonatomic) _Bool didStartFullGesture; // @synthesize didStartFullGesture=_didStartFullGesture;
@property(retain, nonatomic) AXDispatchTimer *warningTonesTimer; // @synthesize warningTonesTimer=_warningTonesTimer;
@property(retain, nonatomic) AXDispatchTimer *brailleTypingPropertiesAnnouncementTimer; // @synthesize brailleTypingPropertiesAnnouncementTimer=_brailleTypingPropertiesAnnouncementTimer;
@property(retain, nonatomic) AXDispatchTimer *speakingDelayTimer; // @synthesize speakingDelayTimer=_speakingDelayTimer;
@property(retain, nonatomic) NSDictionary *lastTouchLocationsByIdentifier; // @synthesize lastTouchLocationsByIdentifier=_lastTouchLocationsByIdentifier;
@property(copy, nonatomic) NSString *lastPrintBrailleCharacter; // @synthesize lastPrintBrailleCharacter=_lastPrintBrailleCharacter;
@property(nonatomic) long long keyboardOrientation; // @synthesize keyboardOrientation=_keyboardOrientation;
@property(nonatomic) _Bool didAnnounceBrailleTypingProperties; // @synthesize didAnnounceBrailleTypingProperties=_didAnnounceBrailleTypingProperties;
@property(nonatomic) _Bool didAnnounceExplorationMode; // @synthesize didAnnounceExplorationMode=_didAnnounceExplorationMode;
@property(nonatomic) _Bool didMoveFingersTooFarForInput; // @synthesize didMoveFingersTooFarForInput=_didMoveFingersTooFarForInput;
@property(nonatomic, getter=isSplitting) _Bool splitting; // @synthesize splitting=_splitting;
@property(nonatomic, getter=isExploring) _Bool exploring; // @synthesize exploring=_exploring;
@property(nonatomic) _Bool shouldUpdateDotPositions; // @synthesize shouldUpdateDotPositions=_shouldUpdateDotPositions;
@property(nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic) __weak id <VOTBrailleGestureManagerDelegate> brailleGestureManagerDelegate; // @synthesize brailleGestureManagerDelegate=_brailleGestureManagerDelegate;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x00100000001226ea
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x00100000001226e4
- (void)_cancelWarningTones;	// IMP=0x001000000012268a
- (void)_playWarningTones:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001223d5
- (void)_playWarningTone;	// IMP=0x001000000012235d
- (void)_playBonk;	// IMP=0x00100000001222e5
- (id)_outputRequestForText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x0010000000121d08
- (void)_speakText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x0010000000121c9e
- (void)_speakText:(id)arg1 hint:(id)arg2;	// IMP=0x0010000000121c75
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3 isInsert:(_Bool)arg4 isDelete:(_Bool)arg5 speakLiterally:(_Bool)arg6;	// IMP=0x0010000000121c3b
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3;	// IMP=0x0010000000121c1d
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2;	// IMP=0x0010000000121c08
- (void)_flashInsertedTextIfAllowed:(id)arg1;	// IMP=0x0010000000121b6b
- (void)_updateBrailleUI;	// IMP=0x0010000000121a41
- (void)_handleTouchPoints:(id)arg1;	// IMP=0x0010000000121907
- (void)_handlePrintBraille:(id)arg1;	// IMP=0x0010000000121281
- (void)_handleBrailleGestureWithLeftPatternDictionary:(id)arg1 rightPatternDictionary:(id)arg2;	// IMP=0x001000000012117c
- (_Bool)_handleCarriageReturnSwipe;	// IMP=0x00100000001210e0
- (id)_languageCodeForSpeakingAndBrailleTranslation;	// IMP=0x0010000000120e4e
- (id)_languageCodeForSpellChecking;	// IMP=0x0010000000120df0
- (id)_languageCodeForBrailleTable;	// IMP=0x0010000000120d23
- (void)_handleTranslateImmediately;	// IMP=0x0010000000120b88
- (void)_handleChangeBrailleMode:(_Bool)arg1;	// IMP=0x0010000000120795
- (id)_printBrailleForTouchPoints:(id)arg1;	// IMP=0x00100000001206a5
- (void)_inputBrailleFromSeriesOfTouchPoints:(id)arg1;	// IMP=0x0010000000120638
- (void)_inputBrailleFromTouchPoints:(id)arg1;	// IMP=0x0010000000120589
- (_Bool)_isAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x00100000001204d6
- (_Bool)_isAdjustTextSegmentEvent:(id)arg1;	// IMP=0x0010000000120423
- (_Bool)_isSelectEvent:(id)arg1;	// IMP=0x0010000000120370
- (_Bool)_isCarriageReturnSwipeEvent:(id)arg1;	// IMP=0x001000000012031f
- (_Bool)_isToggleLockedConfigurationEvent:(id)arg1;	// IMP=0x00100000001202ce
- (_Bool)_isTranslateImmediatelyEvent:(id)arg1;	// IMP=0x001000000012027d
- (_Bool)_isPreviousBrailleModeEvent:(id)arg1;	// IMP=0x001000000012022c
- (_Bool)_isNextBrailleModeEvent:(id)arg1;	// IMP=0x00100000001201db
- (void)_scheduleExploringModeIfNeeded;	// IMP=0x001000000012001d
- (void)_updateDotNumberCirclesForPrintBraille:(id)arg1;	// IMP=0x001000000011fec1
- (id)_newBrailleInput;	// IMP=0x001000000011fe60
- (long long)valueChangeOriginator;	// IMP=0x001000000011fe55
- (void)_handleFingersOnScreen:(id)arg1 didAddOrRemoveFingers:(_Bool)arg2;	// IMP=0x001000000011f795
- (void)_cleanUpTouchesIncludingCalibrationStartPoints:(_Bool)arg1;	// IMP=0x001000000011f6b5
- (_Bool)_handleAllFingersLifted;	// IMP=0x001000000011f404
- (void)_handleCalibrationTimeout;	// IMP=0x001000000011f35d
- (id)_spokenStringForPrintBraille:(id)arg1 useLongForm:(_Bool)arg2;	// IMP=0x001000000011f11d
- (id)_spokenStringForPrintBraille:(id)arg1;	// IMP=0x001000000011f109
- (void)_enumerateDotNumbersForPrintBraille:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011efc0
- (void)_speakPrintBrailleForExploration;	// IMP=0x001000000011ed29
- (void)_calibrateWithTouchPoints:(id)arg1;	// IMP=0x001000000011ec83
- (id)_stringWithFirstPart:(id)arg1 secondPart:(id)arg2;	// IMP=0x001000000011ec5b
- (void)_endExploringDotPatterns;	// IMP=0x001000000011ec1c
- (void)_beginExploringDotPatterns;	// IMP=0x001000000011eb6f
- (id)_touchPointsForCalibrationGivenFirstPoints:(id)arg1 lastPoints:(id)arg2;	// IMP=0x001000000011eae5
- (_Bool)_isCalibrationEndPattern:(id)arg1;	// IMP=0x001000000011ea77
- (_Bool)_isCalibrationStartPattern:(id)arg1;	// IMP=0x001000000011ea09
- (_Bool)_patternIncludesEveryFinger:(id)arg1;	// IMP=0x001000000011e97a
- (_Bool)_deviceSupportsMoreThanFiveTouches;	// IMP=0x001000000011e970
- (_Bool)_requiresLaTeXInput;	// IMP=0x001000000011e857
- (_Bool)_shouldUseContractedBraille;	// IMP=0x001000000011e83a
- (_Bool)_hasContractedBraillePreference;	// IMP=0x001000000011e7ea
- (_Bool)_canUseContractedBraille;	// IMP=0x001000000011e7a6
- (void)_updateShouldUseContractedBraille;	// IMP=0x001000000011e757
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1 forUnlockConfiguration:(_Bool)arg2;	// IMP=0x001000000011e263
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1;	// IMP=0x001000000011e24f
- (void)_announceBrailleTypingPropertiesIncludingOrientation:(_Bool)arg1 typingMode:(_Bool)arg2 brailleMode:(_Bool)arg3 forUnlockConfiguration:(_Bool)arg4;	// IMP=0x001000000011df2e
- (id)_descriptionForCurrentBrailleMode;	// IMP=0x001000000011de52
- (void)_appendOrientationToAnnouncement:(id)arg1;	// IMP=0x001000000011db35
- (unsigned long long)_numberOfDots;	// IMP=0x001000000011db18
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x001000000011daa6
- (void)eventFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x001000000011d9ff
- (id)hintForAppLaunch;	// IMP=0x001000000011d9e2
- (_Bool);	// IMP=0x001000000011d9bb
- (void)didInputWordBackspace;	// IMP=0x001000000011d99e
- (void)didInputBackspace;	// IMP=0x001000000011d95d
- (_Bool)performCustomWordBackspace;	// IMP=0x001000000011d765
- (_Bool)performCustomBackspace;	// IMP=0x001000000011d5db
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x001000000011d5c4
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x001000000011d5ad
- (void)_applySuggestionToElement:(id)arg1 direction:(long long)arg2;	// IMP=0x001000000011d3c0
- (void)_outputChosenSuggestion:(id)arg1;	// IMP=0x001000000011d2ff
- (void)_insertCurrentSelectedSuggestion:(id)arg1;	// IMP=0x001000000011d1ee
- (_Bool)performNextBrailleTableCommand;	// IMP=0x001000000011d0fa
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x001000000011d0a9
- (_Bool)performNextKeyboardLanguage;	// IMP=0x001000000011d062
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x001000000011d011
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x001000000011cf8a
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x001000000011cf39
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x001000000011cee8
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x001000000011ce97
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x001000000011ce46
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x001000000011cdf5
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x001000000011cda4
@property(readonly, nonatomic) unsigned long long mode;
- (_Bool)_handleAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x001000000011cc33
- (_Bool)_shouldReverseDots;	// IMP=0x001000000011cbe8
- (void)updateWithString:(id)arg1;	// IMP=0x001000000011cb5b
- (void)_handleWordBreak:(id)arg1;	// IMP=0x001000000011ca83
- (void)sendCarriageReturnForElement:(id)arg1;	// IMP=0x001000000011c9ea
- (void)pressReturnKeyForElement:(id)arg1;	// IMP=0x001000000011c802
- (void)inputSpaceForElement:(id)arg1;	// IMP=0x001000000011c5ca
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x001000000011c424
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x001000000011c41c
- (_Bool)processEvent:(id)arg1;	// IMP=0x001000000011bf3c
- (void)clearCurrentString;	// IMP=0x001000000011bef3
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000011b899
- (void)dealloc;	// IMP=0x001000000011b831
- (id)init;	// IMP=0x001000000011b6cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
