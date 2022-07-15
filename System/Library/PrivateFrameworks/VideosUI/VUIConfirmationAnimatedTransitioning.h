//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VUIConfirmationAnimatedTransitioningDelegate;

__attribute__((visibility("hidden")))
@interface VUIConfirmationAnimatedTransitioning : NSObject
{
    _Bool _presenting;	// 8 = 0x8
    id <VUIConfirmationAnimatedTransitioningDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b752d
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <VUIConfirmationAnimatedTransitioningDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationEnded:(_Bool)arg1;	// IMP=0x00000000000b74b1
- (void)animateTransition:(id)arg1;	// IMP=0x00000000000b6ecd
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000b6ebf
- (id)initWithPresenting:(_Bool)arg1;	// IMP=0x00000000000b6e84
- (id)init;	// IMP=0x00000000000b6e6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
