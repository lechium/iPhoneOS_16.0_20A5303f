//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CROutstandingWirelessVehicleApprovalAlert
{
    _Bool _shouldEnableWiFi;	// 16 = 0x10
}

@property(nonatomic) _Bool shouldEnableWiFi; // @synthesize shouldEnableWiFi=_shouldEnableWiFi;
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000248fd
- (id)alertDeclineButtonTitle;	// IMP=0x00100000000248ec
- (id)alertAcceptButtonTitle;	// IMP=0x001000000002487c
- (id)alertMessage;	// IMP=0x001000000002486b
- (id)alertTitle;	// IMP=0x00100000000247a1

@end

