//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKSubcredentialPairingFlowControllerOperation-Protocol.h>
#import <PassKitUI/PKSubcredentialProvisioningControllerDelegate-Protocol.h>
#import <PassKitUI/PKSubcredentialProvisioningUserAuthDelegate-Protocol.h>

@class PKAppletSubcredentialSharingSession;
@protocol PKSessionDelegate;

@protocol PKSubcredentialRemoteDevicePairingFlowControllerOperation <PKSubcredentialPairingFlowControllerOperation, PKSubcredentialProvisioningUserAuthDelegate, PKSubcredentialProvisioningControllerDelegate>
- (PKAppletSubcredentialSharingSession *)sharingSessionWithDelegate:(id <PKSessionDelegate>)arg1;
@end

