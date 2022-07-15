//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFAccount, CARSessionConfiguration, CARSessionStatus, CLLocationManager, CRDiagnosticsData, DNDStateService, NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CRDiagnosticsService : NSObject
{
    _Bool _dictationComplete;	// 8 = 0x8
    _Bool _initialDiagnosticsBannerPresented;	// 9 = 0x9
    _Bool _vehicleSupportsStartSession;	// 10 = 0xa
    unsigned int _sleepInterval;	// 12 = 0xc
    CRDiagnosticsData *_diagnosticsData;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_diagnosticsSerialQueue;	// 24 = 0x18
    NSString *_transcription;	// 32 = 0x20
    CARSessionStatus *_session;	// 40 = 0x28
    NSString *_additionalDescription;	// 48 = 0x30
    NSString *_activeBundleIdentifier;	// 56 = 0x38
    AFAccount *_siriInfo;	// 64 = 0x40
    DNDStateService *_dndStateService;	// 72 = 0x48
    CLLocationManager *_locationManager;	// 80 = 0x50
    NSObject<OS_os_transaction> *_idleExitTransaction;	// 88 = 0x58
    CDUnknownBlockType _diagnosticsCompletionBlock;	// 96 = 0x60
    CARSessionConfiguration *_lastConfiguration;	// 104 = 0x68
    long long _pendingDrafts;	// 112 = 0x70
}

+ (id)carPlayDiagnosticsFolderForTime:(id)arg1;	// IMP=0x002000000002cf4b
+ (id)sharedInstance;	// IMP=0x001000000002cef6
- (void).cxx_destruct;	// IMP=0x0020000000031f32
@property(nonatomic) long long pendingDrafts; // @synthesize pendingDrafts=_pendingDrafts;
@property(retain, nonatomic) CARSessionConfiguration *lastConfiguration; // @synthesize lastConfiguration=_lastConfiguration;
@property(copy, nonatomic) CDUnknownBlockType diagnosticsCompletionBlock; // @synthesize diagnosticsCompletionBlock=_diagnosticsCompletionBlock;
@property(retain, nonatomic) NSObject<OS_os_transaction> *idleExitTransaction; // @synthesize idleExitTransaction=_idleExitTransaction;
@property(nonatomic) _Bool vehicleSupportsStartSession; // @synthesize vehicleSupportsStartSession=_vehicleSupportsStartSession;
@property(nonatomic) unsigned int sleepInterval; // @synthesize sleepInterval=_sleepInterval;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) DNDStateService *dndStateService; // @synthesize dndStateService=_dndStateService;
@property(retain, nonatomic) AFAccount *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(retain, nonatomic) NSString *activeBundleIdentifier; // @synthesize activeBundleIdentifier=_activeBundleIdentifier;
@property(retain, nonatomic) NSString *additionalDescription; // @synthesize additionalDescription=_additionalDescription;
@property(retain, nonatomic) CARSessionStatus *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *transcription; // @synthesize transcription=_transcription;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsSerialQueue; // @synthesize diagnosticsSerialQueue=_diagnosticsSerialQueue;
- (id);	// IMP=0x0010000000031dd3
@property(retain, nonatomic) CRDiagnosticsData *diagnosticsData; // @synthesize diagnosticsData=_diagnosticsData;
@property(nonatomic) _Bool initialDiagnosticsBannerPresented; // @synthesize initialDiagnosticsBannerPresented=_initialDiagnosticsBannerPresented;
@property(nonatomic) _Bool dictationComplete; // @synthesize dictationComplete=_dictationComplete;
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0010000000031d0b
- (void)session:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x0010000000031ccc
- (void)_endIdleExitTransaction;	// IMP=0x0010000000031bf3
- (void)_beginIdleExitTransaction;	// IMP=0x0010000000031b06
- (id)radarDescriptionForData:(id)arg1;	// IMP=0x001000000003169d
- (id)radarTitleTagsForData:(id)arg1;	// IMP=0x0010000000031690
- (id)radarAttachmentsForData:(id)arg1;	// IMP=0x0010000000031516
- (id)_screenshotURLsForData:(id)arg1;	// IMP=0x0010000000031449
- (id)_extensionIdentifiersForDiagnosticsData:(id)arg1;	// IMP=0x00100000000312e3
- (id)_collectCarConfiguration;	// IMP=0x001000000003072e
- (id)_stringForScreens:(id)arg1;	// IMP=0x0010000000030085
- (id)_stringForViewArea:(id)arg1;	// IMP=0x001000000002ff5c
- (id)_keywordsToAttachForDiagnosticsData:(id)arg1;	// IMP=0x001000000002f645
- (void)_presentCarAlertWithTitle:(id)arg1 dismissTime:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f489
- (void)_performVibrate;	// IMP=0x001000000002f368
- (void)_stopDictation;	// IMP=0x001000000002f2ca
- (void)_beginDictationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002ec34
- (void)_completeDictation;	// IMP=0x001000000002eb42
- (void)_presentDictationBannerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e87b
- (void)_createRadarDraftFromDiagnosticsData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e865
- (_Bool)shouldTriggerSysdiagnose;	// IMP=0x001000000002e7e8
- (_Bool)_mapsActive;	// IMP=0x001000000002e733
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x001000000002e548
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000002e331
- (void)_completeLogging;	// IMP=0x001000000002e250
- (void)_displayDraftCountBanner;	// IMP=0x001000000002e177
- (void)_startStateCaptureFromData:(id)arg1;	// IMP=0x001000000002dfcb
- (void)collectDiagnosticsWithDeviceScreenshotURL:(id)arg1 carScreenshotURL:(id)arg2 attachmentURLs:(id)arg3 accessoryDetails:(id)arg4 accessoryDescription:(id)arg5 activeBundleIdentifier:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000002d38f
- (id)initWithSession:(id)arg1 locationManager:(id)arg2 sleepInterval:(unsigned int)arg3;	// IMP=0x001000000002d23d
- (void)dealloc;	// IMP=0x001000000002d1d2
- (id)init;	// IMP=0x001000000002d128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
