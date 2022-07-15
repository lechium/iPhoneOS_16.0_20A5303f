//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PUAnimationGroup : NSObject
{
    _Bool _paused;	// 8 = 0x8
    PUAnimationGroup *_superAnimationGroup;	// 16 = 0x10
    NSMutableArray *_subAnimationGroups;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

+ (void)popAnimationGroup:(id)arg1;	// IMP=0x00600000000bdf73
+ (void)pushAnimationGroup:(id)arg1;	// IMP=0x00600000000bde0f
+ (id)animationGroupWithAnimations:(CDUnknownBlockType)arg1;	// IMP=0x00600000000bdd1f
- (void).cxx_destruct;	// IMP=0x00000000000bdb85
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSMutableArray *subAnimationGroups; // @synthesize subAnimationGroups=_subAnimationGroups;
@property(nonatomic) __weak PUAnimationGroup *superAnimationGroup; // @synthesize superAnimationGroup=_superAnimationGroup;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (id)description;	// IMP=0x00000000000bd842
- (void)finishImmediately;	// IMP=0x00000000000bd715
- (void)complete;	// IMP=0x00000000000bd6c9
- (void)resumeAnimations;	// IMP=0x00000000000bd6c3
- (void)pauseAnimations;	// IMP=0x00000000000bd6bd
- (void)completeIfNeeded;	// IMP=0x00000000000bd480
@property(readonly, nonatomic, getter=isReadyToComplete) _Bool readyToComplete;
- (void)addSubAnimationGroup:(id)arg1;	// IMP=0x00000000000bd149
@property(nonatomic) double elapsedTime;
- (void)dealloc;	// IMP=0x00000000000bcd49

@end
