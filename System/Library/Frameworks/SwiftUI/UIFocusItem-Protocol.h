//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUI/UIFocusEnvironment-Protocol.h>

@class UIFocusEffect, UIFocusMovementHint;

@protocol UIFocusItem <UIFocusEnvironment>
@property(nonatomic, readonly) struct CGRect frame;
@property(nonatomic, readonly) _Bool canBecomeFocused;

@optional
- (void)didHintFocusMovement:(UIFocusMovementHint *)arg1;
@property(nonatomic, readonly) _Bool isTransparentFocusItem;
@property(nonatomic, readonly) long long focusGroupPriority;
@property(nonatomic, readonly) UIFocusEffect *focusEffect;
@end

