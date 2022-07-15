//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, UIView, UIViewPropertyAnimator;

@protocol _UISwipeViewManipulator <NSObject>
- (void)moveSwipedView:(UIView *)arg1 atIndexPath:(NSIndexPath *)arg2 withSwipeInfo:(CDStruct_b06b0113)arg3 animator:(UIViewPropertyAnimator *)arg4;

@optional
- (struct CGRect)restingFrameForSwipedView:(UIView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)removeAnimationsFromSwipedView:(UIView *)arg1 atIndexPath:(NSIndexPath *)arg2;
@end
