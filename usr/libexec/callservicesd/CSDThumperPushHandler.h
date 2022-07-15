//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSDThumperPushHandler : NSObject
{
    _Bool _thumperCallingAllowedOnDefaultPairedDeviceDefault;	// 8 = 0x8
}

@property(nonatomic) _Bool thumperCallingAllowedOnDefaultPairedDeviceDefault; // @synthesize thumperCallingAllowedOnDefaultPairedDeviceDefault=_thumperCallingAllowedOnDefaultPairedDeviceDefault;
- (_Bool);	// IMP=0x00100000000a4fc9
- (void)updateUINotification;	// IMP=0x00100000000a4fa3
- (void)displayPinRequestFailure;	// IMP=0x00100000000a4d5a
- (void)displayIncomingPinCode:(id)arg1 fromID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a4754
- (void)pinCodeEnteredSuccessfully:(_Bool)arg1 cancelled:(_Bool)arg2 onPrimaryDevice:(id)arg3;	// IMP=0x00100000000a45e7
- (void)resetOneTimeMessage;	// IMP=0x00100000000a45e1
- (void)displayServiceConfirmationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a4216
- (void)displayPinMessageForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a3c93
- (void)unenrollDevice:(id)arg1;	// IMP=0x00100000000a3c2d
- (void)enrollDevice:(id)arg1 forSenderIdentityUUID:(id)arg2;	// IMP=0x00100000000a3a84
- (id)serviceDescription;	// IMP=0x00100000000a3a03
- (const struct __CFString *)ctServiceType;	// IMP=0x00100000000a39f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
