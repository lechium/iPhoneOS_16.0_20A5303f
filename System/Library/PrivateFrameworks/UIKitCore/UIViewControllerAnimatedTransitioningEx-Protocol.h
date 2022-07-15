//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class UIPercentDrivenInteractiveTransition, UIWindow;

@protocol UIViewControllerAnimatedTransitioningEx <UIViewControllerAnimatedTransitioning>
- (void)setOperation:(long long)arg1;
- (long long)operation;
- (void)setInteractionAborted:(_Bool)arg1;
- (_Bool)interactionAborted;
- (void)setInteractionController:(UIPercentDrivenInteractiveTransition *)arg1;
- (UIPercentDrivenInteractiveTransition *)interactionController;

@optional
- (UIWindow *)window;
@end
