//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIContextualAction, UISwipeActionPullView;

@protocol UISwipeActionPullViewDelegate <NSObject>
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(UISwipeActionPullView *)arg1;
- (void)swipeActionPullView:(UISwipeActionPullView *)arg1 tappedAction:(UIContextualAction *)arg2;
@end
