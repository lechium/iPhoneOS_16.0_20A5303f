//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, _UIPointerInteractionHoverGestureRecognizer, _UIPointerInteractionPressGestureRecognizer;
@protocol _UIPointerInteractionDriverSink;

__attribute__((visibility("hidden")))
@interface _UIPointerInteractionHoverDriver : NSObject
{
    id <_UIPointerInteractionDriverSink> _sink;	// 8 = 0x8
    _UIPointerInteractionHoverGestureRecognizer *_hoverGestureRecognizer;	// 16 = 0x10
    _UIPointerInteractionPressGestureRecognizer *_pressGestureRecognizer;	// 24 = 0x18
    struct {
        _Bool invalid;
        _Bool receivedUpdateWhilePointerDisabled;
        _Bool observing;
    } _flags;	// 32 = 0x20
    UIView *_view;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000007ea128
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)_installToView:(id)arg1;	// IMP=0x00000000007e9f2a
- (void)_uninstallFromView:(id)arg1;	// IMP=0x00000000007e9e53
- (void)_pointerStateDidChange:(id)arg1;	// IMP=0x00000000007e9cd9
- (long long)_currentButtonMask;	// IMP=0x00000000007e9c8e
- (void)_handlePressGesture:(id)arg1;	// IMP=0x00000000007e9b8f
- (void)_updateHover:(id)arg1 forced:(_Bool)arg2;	// IMP=0x00000000007e99a9
- (void)_handleHoverGesture:(id)arg1;	// IMP=0x00000000007e98f1
- (void)invalidate;	// IMP=0x00000000007e97df
- (_Bool)isActive;	// IMP=0x00000000007e979d
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x00000000007e9787
- (id)initWithSink:(id)arg1;	// IMP=0x00000000007e9723

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

