//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewAnimationState;
@protocol OS_dispatch_queue, UIIntervalAnimating, UIViewAnimationComposing;

__attribute__((visibility("hidden")))
@interface UIViewRunningAnimationEntry : NSObject
{
    id <UIIntervalAnimating> _animation;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    CDUnknownBlockType _completionCallback;	// 24 = 0x18
    _Bool _invalidated;	// 32 = 0x20
    _Bool _running;	// 33 = 0x21
    UIViewAnimationState *_animationState;	// 40 = 0x28
    id <UIViewAnimationComposing> _composer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000001332e2b
@property(retain, nonatomic) id <UIViewAnimationComposing> composer; // @synthesize composer=_composer;
@property(nonatomic) __weak UIViewAnimationState *animationState; // @synthesize animationState=_animationState;
@property(nonatomic) _Bool running; // @synthesize running=_running;
- (void)performWithoutLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000001332dc5
- (void)performWithLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000001332d21
- (void)setCompletionCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000001332cfc
- (void)performCompletionCallbackFinished:(_Bool)arg1;	// IMP=0x0000000001332cab
@property(nonatomic) _Bool invalidated;
- (id)initWithAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2 composer:(id)arg3;	// IMP=0x0000000001332ba8

@end
