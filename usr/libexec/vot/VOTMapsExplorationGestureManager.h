//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol VOTMapsExplorationGestureManagerDelegate;

@interface VOTMapsExplorationGestureManager
{
    NSArray *_explorationSegments;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    long long _selectionIndex;	// 24 = 0x18
    double _movedAngle;	// 32 = 0x20
    double _lastAngle;	// 40 = 0x28
    _Bool _recentlyMoved;	// 48 = 0x30
    struct CGPoint _currentLocation;	// 56 = 0x38
    struct CGPoint _currentCenter;	// 72 = 0x48
    id <VOTMapsExplorationGestureManagerDelegate> _mapsExplorationGestureManagerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000005b37e
@property(nonatomic) __weak id <VOTMapsExplorationGestureManagerDelegate> mapsExplorationGestureManagerDelegate; // @synthesize mapsExplorationGestureManagerDelegate=_mapsExplorationGestureManagerDelegate;
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x001000000005b349
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x001000000005b341
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x001000000005b339
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x001000000005b331
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x001000000005b329
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x001000000005b321
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x001000000005b319
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x001000000005b311
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x001000000005b309
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x001000000005b303
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x001000000005b2fd
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x001000000005b2f5
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x001000000005b2ed
- (void)_playSound:(id)arg1;	// IMP=0x001000000005b277
- (void)_speakText:(id)arg1 doesNotInterrupt:(_Bool)arg2 cannotBeInterrupted:(_Bool)arg3;	// IMP=0x001000000005b1de
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x001000000005aef3
- (void)processTouch:(struct CGPoint)arg1;	// IMP=0x001000000005ad87
- (id)explorationSegmentsForRoadsWithAngles:(id)arg1;	// IMP=0x001000000005a9d3
- (_Bool)processEvent:(id)arg1;	// IMP=0x001000000005a7c7
- (_Bool)handleVerbosityChangeIncreasing:(_Bool)arg1;	// IMP=0x001000000005a743
- (_Bool)handleSelection;	// IMP=0x001000000005a517
- (_Bool)handleTracking:(struct CGPoint)arg1;	// IMP=0x001000000005a348
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000005a1a0
- (void)endExploration;	// IMP=0x001000000005a163
- (void)beginExploration;	// IMP=0x001000000005a0dd
- (_Bool)explorationIsPending;	// IMP=0x001000000005a099
- (_Bool)explorationIsActive;	// IMP=0x001000000005a055
- (id)currentIntersectionInformation;	// IMP=0x001000000005a005
- (void)updateCurrentLocation;	// IMP=0x0010000000059fa9
- (void)updateExplorationSegments;	// IMP=0x0010000000059e7d
- (id)currentMap;	// IMP=0x0010000000059d4e
- (id)init;	// IMP=0x0010000000059c27

@end
