//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class UIEvent, UIPanGestureRecognizer;

@protocol UIPanGestureRecognizerDelegateInternal <UIGestureRecognizerDelegate>

@optional
- (_Bool)_panGestureRecognizer:(UIPanGestureRecognizer *)arg1 shouldTryToBeginVerticallyWithEvent:(UIEvent *)arg2;
- (_Bool)_panGestureRecognizer:(UIPanGestureRecognizer *)arg1 shouldTryToBeginHorizontallyWithEvent:(UIEvent *)arg2;
@end
