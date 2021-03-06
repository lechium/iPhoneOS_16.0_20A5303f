//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPointerInteractionAnimator : NSObject
{
    NSString *_debugName;	// 8 = 0x8
    NSMutableArray *_animations;	// 16 = 0x10
    NSMutableArray *_completions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000125f1d4
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void)performAllCompletions:(_Bool)arg1;	// IMP=0x000000000125ef6e
- (void)performAllAnimations;	// IMP=0x000000000125ed8a
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000125ecfe
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x000000000125ec72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

