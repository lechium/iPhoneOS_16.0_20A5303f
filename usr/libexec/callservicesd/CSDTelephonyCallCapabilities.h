//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCoreTelephonyClient, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol CSDEmergencyCallbackCapabilities, CSDTelephonyCallCapabilitiesDelegate, OS_dispatch_queue;

@interface CSDTelephonyCallCapabilities : NSObject
{
    _Bool _capabilitiesValid;	// 8 = 0x8
    _Bool _emergencyCallbackModeEnabled;	// 9 = 0x9
    NSArray *_secondaryThumperAccounts;	// 16 = 0x10
    id <CSDTelephonyCallCapabilitiesDelegate> _delegate;	// 24 = 0x18
    NSDictionary *_senderIdentityCapabilitiesStateByUUID;	// 32 = 0x20
    NSString *_localThumperDeviceID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSSet *_subscriptions;	// 56 = 0x38
    NSMutableDictionary *_lastSavedAccountIDByCapability;	// 64 = 0x40
    CSDCoreTelephonyClient *_coreTelephonyClient;	// 72 = 0x48
    id <CSDEmergencyCallbackCapabilities> _emergencyCallbackCapabilities;	// 80 = 0x50
    NSArray *_localThumperAccounts;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000019ca0f
@property(nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled; // @synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled;
@property(copy, nonatomic) NSArray *localThumperAccounts; // @synthesize localThumperAccounts=_localThumperAccounts;
@property(readonly, nonatomic) id <CSDEmergencyCallbackCapabilities> emergencyCallbackCapabilities; // @synthesize emergencyCallbackCapabilities=_emergencyCallbackCapabilities;
@property(readonly, nonatomic) CSDCoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(readonly, nonatomic) NSMutableDictionary *lastSavedAccountIDByCapability; // @synthesize lastSavedAccountIDByCapability=_lastSavedAccountIDByCapability;
@property(copy, nonatomic) NSSet *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(nonatomic, getter=areCapabilitiesValid) _Bool capabilitiesValid; // @synthesize capabilitiesValid=_capabilitiesValid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *localThumperDeviceID; // @synthesize localThumperDeviceID=_localThumperDeviceID;
@property(copy, nonatomic) NSDictionary *senderIdentityCapabilitiesStateByUUID; // @synthesize senderIdentityCapabilitiesStateByUUID=_senderIdentityCapabilitiesStateByUUID;
@property(nonatomic) __weak id <CSDTelephonyCallCapabilitiesDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldUpdateSubscriptions;	// IMP=0x001000000019c7db
- (void)emergencyCallbackModeDidChangeForAllSubscriptionsForClient:(id)arg1;	// IMP=0x001000000019c75a
- (void)client:(id)arg1 subscription:(id)arg2 capabilitiesDidChange:(id)arg3;	// IMP=0x001000000019c5f0
- (void)client:(id)arg1 capabilitiesDidChange:(id)arg2;	// IMP=0x001000000019c555
- (void)client:(id)arg1 subscription:(id)arg2 callCapabilitiesDidChange:(id)arg3;	// IMP=0x001000000019c414
- (void)subscriptionsDidChangeForClient:(id)arg1;	// IMP=0x001000000019c2f9
- (void)_updateThumperAccountState;	// IMP=0x001000000019b92d
- (void)_updateEmergencyCallbackModeEnabledState;	// IMP=0x001000000019b80f
- (void)_updateSystemCapabilitiesStateForSubscription:(id)arg1 capabilitiesState:(id)arg2;	// IMP=0x001000000019b627
- (id)_senderIdentityCapabilitiesStateForSubscription:(id)arg1;	// IMP=0x001000000019b3cf
- (void)_updateCallCapabilitiesForSubscription:(id)arg1 capabilitiesState:(id)arg2;	// IMP=0x001000000019b277
- (void)_updateSubscriptions;	// IMP=0x001000000019a828
- (void)_updateState;	// IMP=0x001000000019a7c8
- (id)_subscriptionWithUUID:(id)arg1;	// IMP=0x001000000019a5cd
- (void)setCapabilityInfo:(id)arg1 forSubscription:(id)arg2 senderIdentityCapabilitiesState:(id)arg3;	// IMP=0x0010000000199fcf
- (void)setCallCapabilities:(id)arg1 forSenderIdentityCapabilitiesState:(id)arg2;	// IMP=0x0010000000199dbd
- (id)telephonySubscriptionLabelIdentifierForSenderIdentityUUID:(id)arg1;	// IMP=0x0010000000199d6d
- (id)secondaryThumperAccountForRegisteredDeviceID:(id)arg1;	// IMP=0x0010000000199bc8
- (id)secondaryThumperAccountForAccountID:(id)arg1;	// IMP=0x00100000001999e6
- (void)endEmergencyCallbackMode;	// IMP=0x0010000000199972
- (void)invalidateAndRefreshThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000199803
- (void)invalidateAndRefreshVoLTECallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000199694
- (void)invalidateAndRefreshWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;	// IMP=0x0010000000199525
- (void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;	// IMP=0x001000000019937d
- (void)setThumperCallingAssociatedAccountID:(id)arg1;	// IMP=0x0010000000199174
@property(copy, nonatomic) NSString *associatedThumperAccountID;
- (void)setThumperCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0010000000198dd8
- (void)setWiFiCallingRoamingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0010000000198b55
- (void)setWiFiCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x00100000001989dd
- (void)setVoLTECallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(id)arg2;	// IMP=0x0010000000198865
- (id)primaryThumperAccountUsingDevices:(id)arg1 outgoingCallerIDURI:(id)arg2 requireMatchingCallerIDURI:(_Bool)arg3 requireAvailableDeviceSlots:(_Bool)arg4;	// IMP=0x0010000000197f17
@property(readonly, nonatomic, getter=isEmergencyCallbackPossible) _Bool emergencyCallbackPossible;
@property(copy, nonatomic) NSArray *secondaryThumperAccounts; // @synthesize secondaryThumperAccounts=_secondaryThumperAccounts;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithQueue:(id)arg1 coreTelephonyClient:(id)arg2 emergencyCallbackCapabilities:(id)arg3;	// IMP=0x0010000000197866
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001977b8

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
