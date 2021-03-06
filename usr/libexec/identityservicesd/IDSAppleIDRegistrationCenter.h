//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, NSMutableDictionary;
@protocol FTPasswordManager, IDSAppleIDRegistrationCenterMessageDelivery;

@interface IDSAppleIDRegistrationCenter : NSObject
{
    NSMutableDictionary *_queues;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    id <IDSAppleIDRegistrationCenterMessageDelivery> _messageDelivery;	// 24 = 0x18
    id <FTPasswordManager> _passwordManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000068b960
- (void).cxx_destruct;	// IMP=0x0020000000694a30
- (void)removeListener:(id)arg1;	// IMP=0x00100000006949a0
- (void)addListener:(id)arg1;	// IMP=0x00100000006948e0
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x0010000000694810
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x00100000006946e0
- (_Bool)authenticateRegistration:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x0010000000694590
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2;	// IMP=0x0010000000694440
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x00100000006942e0
- (_Bool)authenticateRegistration:(id)arg1 forceRenewal:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x0010000000694170
- (_Bool)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3;	// IMP=0x0010000000693fc0
- (_Bool)queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x0010000000693e90
- (_Bool)_queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x00100000006939a0
- (MISSING_TYPE *)_validateRegionID:phoneNumber:registration: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000693400
- (_Bool)_registrationNeedsAuthentication:(id)arg1;	// IMP=0x00100000006932e0
- (_Bool)_registrationIsAuthenticating:(id)arg1;	// IMP=0x0010000000693240
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 forceRenewal:(_Bool)arg3 failIfNotSilent:(_Bool)arg4;	// IMP=0x0010000000692ab0
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x0010000000692a20
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2;	// IMP=0x00100000006929a0
- (void)_fetchTokenForRegistrationInfo:(id)arg1 failIfNotSilent:(_Bool)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000691e70
- (void)_renewTokenForRegistrationInfo:(id)arg1 forceRenewal:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x0010000000691390
- (void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 selfID:(id)arg3 forRegistrationInfo:(id)arg4 wasFetched:(_Bool)arg5;	// IMP=0x0010000000690c90
- (void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000690830
- (void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000690430
- (void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000006901e0
- (void)_notifyAuthenticationSuccess:(id)arg1;	// IMP=0x001000000068fa30
- (void)_notifyAuthenticationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x001000000068ed10
- (void)_notifyAuthenticating:(id)arg1;	// IMP=0x001000000068e810
- (void)_notifyRegionValidationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x001000000068daf0
- (void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(_Bool)arg5;	// IMP=0x001000000068d1d0
- (void)_notifyInitialRegionQuerySuccess:(id)arg1;	// IMP=0x001000000068ccc0
- (void)_removeMessageForRegistration:(id)arg1 fromQueueForKey:(id)arg2;	// IMP=0x001000000068c8c0
- (_Bool)_haveQueuedMessageForRegistration:(id)arg1 inQueueForKey:(id)arg2;	// IMP=0x001000000068c4c0
- (void)_serviceQueueForKey:(id)arg1;	// IMP=0x001000000068bff0
- (void)_setQueue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000068beb0
- (id)_queueForKey:(id)arg1;	// IMP=0x001000000068bd50
- (void)dealloc;	// IMP=0x001000000068bc70
- (id)init;	// IMP=0x001000000068bb90
- (id)initWithMessageDelivery:(id)arg1 passwordManager:(id)arg2;	// IMP=0x001000000068ba20

@end

