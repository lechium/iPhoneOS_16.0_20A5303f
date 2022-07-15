//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NSArray, NSString, PLExpandedPlatterInteractionManager, UIMenu, UIView, UIViewController;
@protocol PLExpandedPlatterInteractionAnimating;

@protocol PLExpandedPlatterInteractionManagerDelegate <NSObject>

@optional
- (void)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 willDismissContentWithAnimator:(id <PLExpandedPlatterInteractionAnimating>)arg2;
- (_Bool)expandedPlatterInteractionManagerShouldAllowLongPressGesture:(PLExpandedPlatterInteractionManager *)arg1;
- (_Bool)expandedPlatterInteractionManagerShouldAllowInitialSwipeToDismiss:(PLExpandedPlatterInteractionManager *)arg1;
- (void)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 shouldCommitInteraction:(void (^)(_Bool))arg2;
- (void)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 willPresentContentWithAnimator:(id <PLExpandedPlatterInteractionAnimating>)arg2;
- (_Bool)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg2;
- (UIView *)expandedPlatterInteractionManagerContainerView:(PLExpandedPlatterInteractionManager *)arg1;
- (UIMenu *)expandedPlatterInteractionManager:(PLExpandedPlatterInteractionManager *)arg1 menuWithSuggestedActions:(NSArray *)arg2;
- (UIViewController *)expandedPlatterInteractionManagerContentViewController:(PLExpandedPlatterInteractionManager *)arg1;
- (NSString *)expandedPlatterInteractionManagerIdentifier:(PLExpandedPlatterInteractionManager *)arg1;
@end
