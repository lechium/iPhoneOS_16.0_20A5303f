//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UITargetedPreview, _UIGravityWellEffectBody;
@protocol _UIContentEffectDescriptor;

__attribute__((visibility("hidden")))
@interface _UIGravityWellEffect : NSObject
{
    id <_UIContentEffectDescriptor> _descriptor;	// 8 = 0x8
    UITargetedPreview *_continuationPreview;	// 16 = 0x10
    _UIGravityWellEffectBody *_primaryBody;	// 24 = 0x18
    NSArray *_secondaryBodies;	// 32 = 0x20
    NSMutableArray *_completions;	// 40 = 0x28
    unsigned long long _animationCount;	// 48 = 0x30
    double _effectProgress;	// 56 = 0x38
    long long _state;	// 64 = 0x40
}

+ (id)effectWithDescriptor:(id)arg1 continuationPreview:(id)arg2;	// IMP=0x00100000003eb872
- (void).cxx_destruct;	// IMP=0x00000000003ee3e5
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double effectProgress; // @synthesize effectProgress=_effectProgress;
@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSArray *secondaryBodies; // @synthesize secondaryBodies=_secondaryBodies;
@property(retain, nonatomic) _UIGravityWellEffectBody *primaryBody; // @synthesize primaryBody=_primaryBody;
@property(retain, nonatomic) UITargetedPreview *continuationPreview; // @synthesize continuationPreview=_continuationPreview;
@property(readonly, nonatomic) id <_UIContentEffectDescriptor> descriptor; // @synthesize descriptor=_descriptor;
- (id)_effectSpringBehavior;	// IMP=0x00000000003ee2e5
- (void)_performAllCompletions;	// IMP=0x00000000003ee1cc
- (void)_tearDownEffectViews;	// IMP=0x00000000003ee025
- (void)_updateToProgress:(double)arg1 state:(long long)arg2;	// IMP=0x00000000003ed81e
- (void)_installEffectViews;	// IMP=0x00000000003ec790
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ec704
- (id)previewForContinuingToEffectWithPreview:(id)arg1;	// IMP=0x00000000003ec333
- (void)setDescriptor:(id)arg1 andKey:(id)arg2;	// IMP=0x00000000003ec322
- (void)endForHandOff;	// IMP=0x00000000003ec27d
- (void)end;	// IMP=0x00000000003ec1fc
- (void)updateWithProgress:(double)arg1;	// IMP=0x00000000003ec1b9
- (void)begin;	// IMP=0x00000000003ec0f9
@property(readonly, nonatomic) NSArray *secondaryBodyPreviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
