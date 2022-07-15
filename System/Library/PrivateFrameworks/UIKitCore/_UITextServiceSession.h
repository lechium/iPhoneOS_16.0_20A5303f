//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKeyboardSceneDelegate, UIResponder, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject
{
    long long _type;	// 8 = 0x8
    UIViewController *_modalViewController;	// 16 = 0x10
    UIView *_contextView;	// 24 = 0x18
    UIResponder *_pinnedResponder;	// 32 = 0x20
    UIKeyboardSceneDelegate *_keyboardSceneDelegate;	// 40 = 0x28
    _Bool _dismissed;	// 48 = 0x30
    CDUnknownBlockType _dismissedHandler;	// 56 = 0x38
}

+ (_Bool)textServiceIsDisplaying;	// IMP=0x00100000012269a8
+ (id)textServiceSessionForType:(long long)arg1;	// IMP=0x0010000001226850
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;	// IMP=0x0010000001226738
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;	// IMP=0x00100000012254bc
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange)arg2 type:(long long)arg3 fromRect:(struct CGRect)arg4 inView:(id)arg5;	// IMP=0x00100000012254b4
+ (_Bool)shouldPresentServiceInSameWindowAsView:(id)arg1;	// IMP=0x0010000001225455
+ (_Bool)_canShowTextServiceForType:(long long)arg1;	// IMP=0x001000000122542f
+ (long long)availableTextServices;	// IMP=0x001000000122536a
+ (_Bool)_canShowTextServices;	// IMP=0x001000000122534b
- (void).cxx_destruct;	// IMP=0x0000000001226cad
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
- (void)_endSession;	// IMP=0x0000000001226bf6
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000001226be4
- (void)dismissTextServiceAnimated:(_Bool)arg1;	// IMP=0x0000000001226ae0
- (long long)type;	// IMP=0x0000000001226846
- (_Bool)isDisplaying;	// IMP=0x0000000001226839
- (id)init;	// IMP=0x0000000001226822
- (id)initWithType:(long long)arg1;	// IMP=0x00000000012267e5
- (void)sessionDidDismiss;	// IMP=0x0000000001226cf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
