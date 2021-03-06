//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestContainerViewControllerAnimator : NSObject
{
    _Bool _presenting;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000000076b8
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000007498
- (id)_viewControllerForTransitionContext:(id)arg1;	// IMP=0x000000000000741f
- (id)initWithPresenting:(_Bool)arg1;	// IMP=0x00000000000073c6
- (id)init;	// IMP=0x00000000000073af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

