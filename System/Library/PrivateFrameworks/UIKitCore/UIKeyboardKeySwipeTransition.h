//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeySwipeTransition
{
    _Bool _disableMeshOptimization;	// 113 = 0x71
    NSArray *_startKeysOrdered;	// 120 = 0x78
    NSArray *_endKeysOrdered;	// 128 = 0x80
    NSArray *_startGeometries;	// 136 = 0x88
    NSArray *_transitionKeys;	// 144 = 0x90
    NSArray *_keyInfos;	// 152 = 0x98
    double _previousProgress;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000c8f334
@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(retain, nonatomic) NSArray *keyInfos; // @synthesize keyInfos=_keyInfos;
@property(retain, nonatomic) NSArray *transitionKeys; // @synthesize transitionKeys=_transitionKeys;
@property(retain, nonatomic) NSArray *startGeometries; // @synthesize startGeometries=_startGeometries;
@property(retain, nonatomic) NSArray *endKeysOrdered; // @synthesize endKeysOrdered=_endKeysOrdered;
@property(retain, nonatomic) NSArray *startKeysOrdered; // @synthesize startKeysOrdered=_startKeysOrdered;
@property(nonatomic) _Bool disableMeshOptimization; // @synthesize disableMeshOptimization=_disableMeshOptimization;
- (id)meshTransformForKeyplane:(id)arg1 forward:(_Bool)arg2 initial:(_Bool)arg3;	// IMP=0x0000000000c8c16f
- (struct CGRect)keyRectForFrame:(struct CGRect)arg1 normalizedSubRect:(struct CGRect)arg2;	// IMP=0x0000000000c8c145
- (void)gatherTransitionKeys;	// IMP=0x0000000000c8bbcb
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000c8bb50
- (void)removeAllAnimations;	// IMP=0x0000000000c8b9e2
- (void)_runOpacityAnimation;	// IMP=0x0000000000c8b8b0
- (void)_runTransformAnimation;	// IMP=0x0000000000c8b60b
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c8b5d0
- (double)nonInteractiveDuration;	// IMP=0x0000000000c8b5c2
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000c8b4f1
- (void)commitTransitionRebuild;	// IMP=0x0000000000c8b499
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;	// IMP=0x0000000000c8b089

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

