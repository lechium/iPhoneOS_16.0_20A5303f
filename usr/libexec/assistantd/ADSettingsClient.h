//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreEmbeddedSpeechRecognizer, MISSING_TYPE, NSString, NSXPCConnection;

@interface ADSettingsClient : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CoreEmbeddedSpeechRecognizer *_localSpeechRecognizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000029b15d
- (oneway void)readSyncTokenForAceHost:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029b03a
- (oneway void)setSyncToken:(id)arg1 forAceHost:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000029af90
- (oneway void)getCurrentActiveLanguageCodesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029aef6
- (oneway void)getAssistantIsEnabledForDeviceWithSiriInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029ae85
- (oneway void)getAssetStatusForLanguage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000029adfb
- (oneway void)areSiriUODAssetsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x001000000029ad85
- (oneway void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x001000000029ad32
- (oneway void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029ac68
- (void)adSyncVerificationServerReport:(id)arg1;	// IMP=0x001000000029abf6
- (void)adSyncVerificationPartialResult:(id)arg1;	// IMP=0x001000000029ab84
- (oneway void)triggerABCForType:(id)arg1 subType:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000029a8f7
- (oneway void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000029a86d
- (oneway void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000029a7e3
- (oneway void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029a76d
- (oneway void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029a6f7
- (oneway void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000029a64e
- (oneway void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029a5c4
- (oneway void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x001000000029a590
- (oneway void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029a55a
- (void)_postWatchNotificationWithContext:(id)arg1 withError:(id)arg2;	// IMP=0x001000000029a437
- (oneway void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;	// IMP=0x001000000029a3e4
- (oneway void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000299935
- (oneway void)shouldSuppressSiriDataSharingOptInAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000299901
- (oneway void)setIsHomePodInHH2Mode:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029983a
- (oneway void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000299748
- (oneway void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000299712
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000029929b
- (oneway void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002991ae
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029907d
- (oneway void)clearOpportuneSpeakingEdgeDetectorSignalOverride;	// IMP=0x0010000000299073
- (oneway void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;	// IMP=0x0010000000299066
- (oneway void)clearMessageWithoutConfirmationHeadphonesEnabled;	// IMP=0x001000000029905c
- (oneway void)setMessageWithoutConfirmationHeadphonesEnabled:(_Bool)arg1;	// IMP=0x0010000000299050
- (oneway void)getMessageWithoutConfirmationHeadphonesEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029901e
- (oneway void)clearMessageWithoutConfirmationInCarPlayEnabled;	// IMP=0x0010000000299014
- (oneway void)setMessageWithoutConfirmationInCarPlayEnabled:(_Bool)arg1;	// IMP=0x0010000000299008
- (oneway void)getMessageWithoutConfirmationInCarPlayEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298fd6
- (oneway void)clearMessageWithoutConfirmationEnabled;	// IMP=0x0010000000298fcc
- (oneway void)setMessageWithoutConfirmationEnabled:(_Bool)arg1;	// IMP=0x0010000000298fc0
- (oneway void)getMessageWithoutConfirmationEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298f8e
- (oneway void)setAnnounceNotificationsOnBuiltInSpeakerEnabled:(_Bool)arg1;	// IMP=0x0010000000298f82
- (oneway void)updateAnnounceNotificationsOnHearingAidSupportedStatus;	// IMP=0x0010000000298f78
- (oneway void)setAnnounceNotificationsOnHearingAidsSupported:(_Bool)arg1;	// IMP=0x0010000000298f6c
- (oneway void)setAnnounceNotificationsOnHearingAidsEnabled:(_Bool)arg1;	// IMP=0x0010000000298f60
- (oneway void)clearAnnounceNotificationsInCarPlayType;	// IMP=0x0010000000298eb7
- (oneway void)setAnnounceNotificationsInCarPlayType:(long long)arg1;	// IMP=0x0010000000298dc7
- (oneway void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298d95
- (oneway void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;	// IMP=0x0010000000298d0b
- (oneway void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;	// IMP=0x0010000000298c65
- (oneway void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298c33
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 forApp:(id)arg2 platform:(long long)arg3;	// IMP=0x0010000000298c20
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000298bb9
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 platform:(long long)arg2;	// IMP=0x0010000000298ba9
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000298b52
- (oneway void)setSpokenNotificationProxCardSeen:(_Bool)arg1;	// IMP=0x0010000000298b48
- (oneway void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;	// IMP=0x0010000000298b3c
- (oneway void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298b0a
- (oneway void)setSpokenNotificationShouldAnnounceAllNotifications:(_Bool)arg1;	// IMP=0x0010000000298afe
- (oneway void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298acc
- (oneway void)setSpokenNotificationIsAlwaysOpportune:(_Bool)arg1;	// IMP=0x0010000000298ac0
- (oneway void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298a8e
- (oneway void)clearSpokenNotificationTemporarilyDisabledStatus;	// IMP=0x0010000000298a84
- (oneway void)stopObservingBluetoothWirelessSplitterSession;	// IMP=0x0010000000298a40
- (oneway void)startObservingBluetoothWirelessSplitterSession;	// IMP=0x00100000002989fc
- (oneway void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298901
- (oneway void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002988f4
- (oneway void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000298417
- (oneway void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029830b
- (oneway void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002981ff
- (oneway void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000298106
- (oneway void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029801c
- (oneway void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297f4b
- (oneway void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297e7a
- (oneway void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297d8d
- (oneway void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297c4c
- (oneway void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297b0b
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000297993
- (oneway void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029791e
- (oneway void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297908
- (oneway void)getSharedUserID:(CDUnknownBlockType)arg1;	// IMP=0x001000000029784f
- (oneway void)updateMultiUserWithSharedUserId:(id)arg1 companionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000297771
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002976a6
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002975db
- (oneway void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000029751b
- (oneway void)showHomeProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002974e8
- (oneway void)resetProfileNames:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002974b5
- (oneway void)showLocalProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297482
- (oneway void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297403
- (oneway void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000297386
- (oneway void)showMultiUserCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000296f17
- (oneway void)showMultiUsers:(CDUnknownBlockType)arg1;	// IMP=0x0010000000296e9a
- (oneway void)removeMultiUserUserWithSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296dc9
- (oneway void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296cf8
- (oneway void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000296b9b
- (oneway void)getSharedCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000296b2a
- (oneway void)setNanoAlwaysShowRecognizedSpeech:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296b18
- (oneway void)setNanoSiriResponseShouldAlwaysPrint:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296b06
- (oneway void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296af4
- (oneway void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296ae2
- (oneway void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296ad0
- (oneway void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296abe
- (oneway void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296aac
- (oneway void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296a9a
- (oneway void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296a88
- (oneway void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296a76
- (oneway void)setNanoDictationAutoPunctuationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296a64
- (oneway void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296a52
- (oneway void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296a40
- (oneway void)getStereoPairState:(CDUnknownBlockType)arg1;	// IMP=0x00100000002969cf
- (oneway void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;	// IMP=0x001000000029695e
- (oneway void)getMeCard:(CDUnknownBlockType)arg1;	// IMP=0x0010000000296864
- (oneway void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002967f6
- (oneway void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296788
- (oneway void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;	// IMP=0x001000000029671a
- (oneway void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00100000002966ac
- (oneway void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000296640
- (oneway void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002965d4
- (MISSING_TYPE *)postTestResultSelectedWithRcId: /* Error: Ran out of types for this method. */;	// IMP=0x001000000029655e
- (oneway void)postTestResultCandidateWithRcId:(id)arg1 recognitionSausage:(id)arg2;	// IMP=0x00100000002964d4
- (oneway void)hasEverSetLanguageCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002963d1
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x0010000000296359
- (oneway void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00100000002962bf
- (oneway void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000029620d
- (oneway void)getPeerIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x001000000029600c
- (oneway void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000295df6
- (void)_createMockServerIfNeededAndSetActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000295ba2
- (oneway void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000295802
- (oneway void)dismissUI;	// IMP=0x00100000002957be
- (oneway void)startUIRequestWithSpeechAudioFileURL:(id)arg1;	// IMP=0x001000000029565c
- (oneway void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000295399
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000295205
- (oneway void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002950a7
- (oneway void)setSpeechProfileExternalOfflineModelRootPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000295017
- (oneway void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000294f87
- (oneway void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000294ec0
- (oneway void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000294e2c
- (oneway void)getOfflineAssistantStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000294db0
- (id)_localSpeechRecognizer;	// IMP=0x0010000000294d5c
- (oneway void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000294bfd
- (oneway void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000294ac5
- (oneway void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002949ce
- (oneway void)getAvailableVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000294077
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000293d5a
- (oneway void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000293cbc
- (oneway void)getCurrentNWActivityIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000293bed
- (oneway void)resetExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000293b63
- (oneway void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000293aed
- (oneway void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000029392a
- (oneway void)getProximityTuplesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000293736
- (oneway void)getCapabilitiesDataFromReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002933c7
- (oneway void)getManagedLocalAndRemotePeerInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000029334d
- (oneway void)setHardcodedBluetoothProximity:(id)arg1;	// IMP=0x001000000029331b
- (oneway void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292fdc
- (oneway void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000292f52
- (oneway void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292edc
- (oneway void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292e66
- (oneway void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000292e50
- (oneway void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292e38
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000292e22
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292d77
- (oneway void)_runServiceMaintenance;	// IMP=0x0010000000292d31
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002929ff
- (oneway void)_fetchPeerData:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292987
- (oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002925b9
- (oneway void)_clearSyncNeededForKey:(id)arg1;	// IMP=0x001000000029251b
- (oneway void)_setSyncNeededForReason:(id)arg1;	// IMP=0x001000000029250e
- (oneway void)configOverrides:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292476
- (oneway void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002923e2
- (oneway void)barrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002923d7
- (oneway void)_shutdownSessionIfIdle;	// IMP=0x0010000000292315
- (oneway void)_killDaemon;	// IMP=0x0010000000292253
- (oneway void)setEnableAssistantLogging:(_Bool)arg1;	// IMP=0x00100000002920f7
- (oneway void)setDictationAutoPunctuationEnabled:(_Bool)arg1;	// IMP=0x00100000002920a4
- (oneway void)setDictationEnabled:(_Bool)arg1;	// IMP=0x0010000000291c2a
- (oneway void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x0010000000291b0b
- (oneway void)fetchActiveAccount:(CDUnknownBlockType)arg1;	// IMP=0x0010000000291926
- (oneway void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00100000002918b0
- (oneway void)deleteAccountWithIdentifier:(id)arg1;	// IMP=0x001000000029183a
- (void)_saveAccount:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x0010000000291792
- (oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00100000002914e7
- (oneway void)retrieveAccountMessageDictionariesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000290ffa
- (oneway void)fetchSupportedLanguagesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000290f1b
- (id)_serviceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000290f05
- (id)_serviceDelegate;	// IMP=0x0010000000290eef
- (void)connectionDisconnected;	// IMP=0x0010000000290ea5
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000290e3a
- (id)_appIdentifierfromConnection:(id)arg1;	// IMP=0x0010000000290d24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

