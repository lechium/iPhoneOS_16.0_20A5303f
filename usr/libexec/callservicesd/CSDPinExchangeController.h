//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol CSDPinExchangeDelegate;

@interface CSDPinExchangeController : NSObject
{
    NSMutableDictionary *_pendingCodesToDevicesForApproval;	// 8 = 0x8
    id <CSDPinExchangeDelegate> _pinExchangeDelegate;	// 16 = 0x10
    NSString *_outgoingPinRequestIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d1f95
@property(copy) NSString *outgoingPinRequestIdentifier; // @synthesize outgoingPinRequestIdentifier=_outgoingPinRequestIdentifier;
@property(retain) id <CSDPinExchangeDelegate> pinExchangeDelegate; // @synthesize pinExchangeDelegate=_pinExchangeDelegate;
@property(retain) NSMutableDictionary *pendingCodesToDevicesForApproval; // @synthesize pendingCodesToDevicesForApproval=_pendingCodesToDevicesForApproval;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000d1d3b
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000d10f4
- (void)handlePINCodeEnteredSuccessfully:(_Bool)arg1 canceled:(_Bool)arg2 fromDevice:(id)arg3 isPrimaryDevice:(_Bool)arg4;	// IMP=0x00100000000d1007
- (void)displaySlotsFullNotification;	// IMP=0x00100000000d0f34
- (void)displayMismatchedAccountsNotification;	// IMP=0x00100000000d0e43
- (void)displayPinErrorNotification;	// IMP=0x00100000000d0d70
- (void)removeErrorNotifications;	// IMP=0x00100000000d0d25
- (void)displayErrorNotificationWithMessage:(id)arg1;	// IMP=0x00100000000d0b57
- (unsigned long long)randomSixDigitCode;	// IMP=0x00100000000d0b40
- (_Bool)sendIDSAction:(id)arg1 toDevices:(id)arg2;	// IMP=0x00100000000d0337
- (_Bool)sendIDSAction:(id)arg1 toDevice:(id)arg2;	// IMP=0x00100000000d026b
- (void)sendApprovalResponseToDevice:(id)arg1 enteredCorrectly:(_Bool)arg2 wasCancelled:(_Bool)arg3;	// IMP=0x00100000000d0231
- (_Bool)sendApprovalDisplayPinToDevice:(id)arg1;	// IMP=0x00100000000cffaf
- (void)sendPinCodeAndPromptForResponseToDevice:(id)arg1 forSenderIdentityUUID:(id)arg2;	// IMP=0x00100000000cf997
- (id)allIDSTelephonyDevices;	// IMP=0x00100000000cf7e6
- (id)idsDeviceFromUniqueID:(id)arg1;	// IMP=0x00100000000cf5ec
- (void)cancelPinRequests;	// IMP=0x00100000000cf45b
- (void)requestPinFromDevice:(id)arg1;	// IMP=0x00100000000cf284
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000cf170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

