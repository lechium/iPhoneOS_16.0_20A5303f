//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface CRAlert : NSObject
{
    struct __CFUserNotification *_alert;	// 8 = 0x8
    _Bool _alertAutoDismissed;	// 16 = 0x10
    NSTimer *_alertDismissTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000045bd
@property(nonatomic) _Bool alertAutoDismissed; // @synthesize alertAutoDismissed=_alertAutoDismissed;
@property(retain, nonatomic) NSTimer *alertDismissTimer; // @synthesize alertDismissTimer=_alertDismissTimer;
- (_Bool)dismissAlert;	// IMP=0x0010000000004573
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004132
- (id)_alertContents;	// IMP=0x0010000000003e07
- (_Bool)_isDeviceUnlocked;	// IMP=0x0010000000003dff
- (id)iconImagePath;	// IMP=0x0010000000003d83
- (id)alertOtherButtonTitle;	// IMP=0x0010000000003d7b
- (id)alertDeclineButtonTitle;	// IMP=0x0010000000003d73
- (id)alertAcceptButtonTitle;	// IMP=0x0010000000003d6b
- (id)alertMessage;	// IMP=0x0010000000003d63
- (id)alertTitle;	// IMP=0x0010000000003d5b
- (id)lockscreenMessage;	// IMP=0x0010000000003d53
- (id)lockscreenTitle;	// IMP=0x0010000000003d42
- (_Bool)requiresUnlockedDevice;	// IMP=0x0010000000003d3a
- (double)alertDismissal;	// IMP=0x0010000000003d31
- (_Bool)allowInCar;	// IMP=0x0010000000003d29
- (void)_setAlert:(struct __CFUserNotification *)arg1;	// IMP=0x0010000000003cf8

@end

