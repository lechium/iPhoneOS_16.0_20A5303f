//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITouch, UIView, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject
{
    UIView *_view;	// 8 = 0x8
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;	// 16 = 0x10
    UITouch *_currentTouch;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000d7317f
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)_handleTouchObservingGestureRecognizer:(id)arg1;	// IMP=0x0000000000d72ef1
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000d72eb3
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000d72e62
- (void)cancelInteraction;	// IMP=0x0000000000d72e20
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;	// IMP=0x0000000000d72d33
@property(readonly, nonatomic) double touchForce;
- (void)dealloc;	// IMP=0x0000000000d72cb2
- (id)initWithView:(id)arg1;	// IMP=0x0000000000d72afe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

