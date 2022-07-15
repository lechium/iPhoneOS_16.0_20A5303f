//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFocusItem-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentInternal-Protocol.h>

@class UIView;
@protocol UICoordinateSpace;

@protocol _UIFocusItemInternal <UIFocusItem, _UIFocusEnvironmentInternal>

@optional
@property(readonly, nonatomic, getter=_focusTouchSensitivityStyle) long long focusTouchSensitivityStyle;
- (_Bool)_wantsKeyCommandsWhenDeferred;
- (long long)_systemDefaultFocusGroupPriority;
- (struct CGRect)_focusCastingFrameForHeading:(unsigned long long)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (_Bool)_drawsFocusRingWhenChildrenFocused;
- (unsigned long long)_insertionIndexOfFocusLayerInView;
- (UIView *)_viewToAddFocusLayer;
@end
