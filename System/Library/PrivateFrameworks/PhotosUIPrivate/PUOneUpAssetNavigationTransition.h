//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUNavigationTransition.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PUOneUpAssetNavigationTransition : PUNavigationTransition
{
}

- (void)_prepareViewForTransition;	// IMP=0x0000000000270054
- (void)_animateTransitionWithOperation:(long long)arg1;	// IMP=0x000000000026fcfa
- (void)animatePopTransition;	// IMP=0x000000000026fce3
- (void)animatePushTransition;	// IMP=0x000000000026fccc
- (id)init;	// IMP=0x000000000026fc95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
