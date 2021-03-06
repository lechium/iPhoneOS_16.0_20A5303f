//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, NSNumber, NSString, PSUIAppInstallController;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceManager : NSObject
{
    CTCarrierSpaceCapabilities *_capabilities;	// 8 = 0x8
    CTCarrierSpaceUsageInfo *_usageInfo;	// 16 = 0x10
    CTCarrierSpacePlansInfo *_plansInfo;	// 24 = 0x18
    CTCarrierSpaceAppsInfo *_appsInfo;	// 32 = 0x20
    PSUIAppInstallController *_carrierAppInstallController;	// 40 = 0x28
    NSNumber *_hasUserConsent;	// 48 = 0x30
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;	// 56 = 0x38
    NSNumber *_userConsentResponse;	// 64 = 0x40
    struct __CTServerConnection *_serverConnection;	// 72 = 0x48
    CoreTelephonyClient *_coreTelephonyClient;	// 80 = 0x50
    CTCarrierSpaceClient *_carrierSpaceClient;	// 88 = 0x58
}

+ (id)getNSURLSessionConfiguration;	// IMP=0x001000000004c1eb
+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;	// IMP=0x0010000000048abb
+ (_Bool)isCarrierMetricTypeValid:(int)arg1;	// IMP=0x0010000000048aad
+ (int)carrierMetricTypeForString:(id)arg1;	// IMP=0x0010000000048955
+ (id)sharedManager;	// IMP=0x0010000000048900
- (void).cxx_destruct;	// IMP=0x000000000004c30a
@property(retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient; // @synthesize carrierSpaceClient=_carrierSpaceClient;
- (id)getLogger;	// IMP=0x000000000004c2cf
- (void)userConsentFlowInfoDidChange;	// IMP=0x000000000004c062
- (void)appsDidChange;	// IMP=0x000000000004bef3
- (void)plansDidChange;	// IMP=0x000000000004bd84
- (void)usageDidChange;	// IMP=0x000000000004bc15
- (void)capabilitiesDidChange:(id)arg1;	// IMP=0x000000000004bab1
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;	// IMP=0x000000000004b9be
- (id)localizedDataStringFromBytes:(unsigned long long)arg1;	// IMP=0x000000000004b9aa
- (id)descriptionForPlanMetrics:(id)arg1;	// IMP=0x000000000004b37a
- (_Bool)planChangeIsRestricted;	// IMP=0x000000000004b321
- (id)carrierAppInstallController;	// IMP=0x000000000004b05c
- (id)appsInfo;	// IMP=0x000000000004ad08
- (id)planMetrics;	// IMP=0x000000000004aa56
- (id)subscribedDomesticPlanOptions;	// IMP=0x000000000004a738
- (id)subscribedPlanOptions;	// IMP=0x000000000004a44a
- (id)plansInfo;	// IMP=0x000000000004a159
- (id)usageInfo;	// IMP=0x0000000000049e68
- (id)capabilities;	// IMP=0x0000000000049b5e
- (_Bool)supportsSweetgum;	// IMP=0x0000000000049a67
- (void)refresh;	// IMP=0x00000000000496dc
- (void)refreshAndReload;	// IMP=0x00000000000495c3
- (void)reset;	// IMP=0x0000000000049553
- (void)userConsentAcknowledged:(_Bool)arg1;	// IMP=0x000000000004930b
- (void)setUserConsent:(_Bool)arg1;	// IMP=0x0000000000049226
- (id)userConsentFlowInfo;	// IMP=0x000000000004905d
- (_Bool)hasUserConsent;	// IMP=0x0000000000048f3e
- (void)dealloc;	// IMP=0x0000000000048ef6
- (id)init;	// IMP=0x0000000000048cc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

