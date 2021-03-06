//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDeviceToDeviceShareInvitationToken, CKShareMetadata, CKShareParticipant, NSArray, NSDictionary, NSError, NSPersonNameComponents, NSString, NSURL, NSXPCConnection, RetrievingDialog;

@interface ShareAcceptor : NSObject
{
    _Bool _shouldTerminateAfterFetchingMetadata;	// 8 = 0x8
    _Bool _hasValidConnection;	// 9 = 0x9
    _Bool _accepting;	// 10 = 0xa
    _Bool _cancelled;	// 11 = 0xb
    unsigned long long _backgroundTaskID;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    CKShareMetadata *_shareMetadata;	// 32 = 0x20
    RetrievingDialog *_retrievingDialog;	// 40 = 0x28
    CKDeviceToDeviceShareInvitationToken *_invitationToken;	// 48 = 0x30
    NSString *_shareName;	// 56 = 0x38
    NSArray *_registeredAppBundleIDs;	// 64 = 0x40
    NSArray *_registeredDaemonBundleIDs;	// 72 = 0x48
    NSDictionary *_localBundleIDsToDisplayNames;	// 80 = 0x50
    NSString *_chosenAppBundleID;	// 88 = 0x58
    CKShareParticipant *_singleOONMatch;	// 96 = 0x60
    NSPersonNameComponents *_currentUserNameComponents;	// 104 = 0x68
    NSString *_currentUserFormattedUsername;	// 112 = 0x70
    CKContainer *_metadataIndicatedContainer;	// 120 = 0x78
    NSString *_chosenAccountID;	// 128 = 0x80
    NSXPCConnection *_xpcConnection;	// 136 = 0x88
    long long _state;	// 144 = 0x90
    NSError *_fallbackFlowCause;	// 152 = 0x98
    NSString *_webFlowReason;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000000f618
@property(retain, nonatomic) NSString *webFlowReason; // @synthesize webFlowReason=_webFlowReason;
@property(retain, nonatomic) NSError *fallbackFlowCause; // @synthesize fallbackFlowCause=_fallbackFlowCause;
@property(nonatomic, setter=setState:) long long state; // @synthesize state=_state;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool accepting; // @synthesize accepting=_accepting;
@property(nonatomic) _Bool hasValidConnection; // @synthesize hasValidConnection=_hasValidConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(copy, nonatomic) NSString *chosenAccountID; // @synthesize chosenAccountID=_chosenAccountID;
@property(retain, nonatomic) CKContainer *metadataIndicatedContainer; // @synthesize metadataIndicatedContainer=_metadataIndicatedContainer;
@property(copy, nonatomic) NSString *currentUserFormattedUsername; // @synthesize currentUserFormattedUsername=_currentUserFormattedUsername;
@property(copy, nonatomic) NSPersonNameComponents *currentUserNameComponents; // @synthesize currentUserNameComponents=_currentUserNameComponents;
@property(copy, nonatomic) CKShareParticipant *singleOONMatch; // @synthesize singleOONMatch=_singleOONMatch;
@property(copy, nonatomic) NSString *chosenAppBundleID; // @synthesize chosenAppBundleID=_chosenAppBundleID;
@property(copy, nonatomic) NSDictionary *localBundleIDsToDisplayNames; // @synthesize localBundleIDsToDisplayNames=_localBundleIDsToDisplayNames;
@property(copy, nonatomic) NSArray *registeredDaemonBundleIDs; // @synthesize registeredDaemonBundleIDs=_registeredDaemonBundleIDs;
@property(copy, nonatomic) NSArray *registeredAppBundleIDs; // @synthesize registeredAppBundleIDs=_registeredAppBundleIDs;
@property(copy, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
@property(copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // @synthesize invitationToken=_invitationToken;
@property(readonly, retain, nonatomic) RetrievingDialog *retrievingDialog; // @synthesize retrievingDialog=_retrievingDialog;
@property(copy, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(nonatomic) _Bool shouldTerminateAfterFetchingMetadata; // @synthesize shouldTerminateAfterFetchingMetadata=_shouldTerminateAfterFetchingMetadata;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
- (void)acceptShareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ed28
- (_Bool)makeStateTransition:(id *)arg1;	// IMP=0x001000000000e344
- (_Bool)_launchApp:(id *)arg1;	// IMP=0x001000000000e069
- (long long)_handlePotentialOONMatches;	// IMP=0x001000000000dfca
- (_Bool)_checkDataclassError:(id *)arg1;	// IMP=0x001000000000dd26
- (_Bool)_verifySelectedApp:(id *)arg1;	// IMP=0x001000000000da0a
- (_Bool)_promptAppSelection:(id *)arg1;	// IMP=0x001000000000d768
- (long long)_lookUpLocalBundleIDs:(id *)arg1 success:(_Bool *)arg2;	// IMP=0x001000000000d5a4
- (_Bool)_handlePotentialAppleInternalDaemon:(id *)arg1;	// IMP=0x001000000000c632
- (_Bool)_handleAppleInternalDaemon:(id)arg1 response:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000c50f
- (_Bool)_lookUpRegisteredBundleIDs:(id *)arg1;	// IMP=0x001000000000bbf8
- (_Bool)_urlHasALongToken:(id)arg1;	// IMP=0x001000000000b78b
- (_Bool)_urlIsALegacyiWorkShareURL:(id)arg1;	// IMP=0x001000000000b732
- (_Bool)_fetchMetadata:(id *)arg1;	// IMP=0x001000000000add5
- (_Bool)_notifyBladeRunner:(id *)arg1;	// IMP=0x001000000000acae
- (_Bool)_validateShareURL:(id *)arg1;	// IMP=0x001000000000ac12
- (id)_iosShowAppSelectionDialogWithTitlesDictionary:(id)arg1;	// IMP=0x001000000000a92b
- (id)chooseFromMultipleBundleIDs;	// IMP=0x001000000000a89f
- (id)_deduplicateBundleToNamesMapping:(id)arg1;	// IMP=0x001000000000a6e9
- (void)_initiateVettingForParticipantID:(id)arg1 address:(id)arg2 andThen:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a3cc
- (id)_iosShowVettingAlert;	// IMP=0x0010000000009579
- (_Bool)_requestSelectionFromMultipleOONMatches:(id *)arg1;	// IMP=0x00100000000094cc
- (_Bool)_initiateVettingOfSingleOONMatch:(id *)arg1;	// IMP=0x0010000000008d02
- (long long)initiateVetting;	// IMP=0x0010000000008c88
- (id)_showVettingAlert;	// IMP=0x0010000000008c76
- (id)_trySelectingOONParticipant;	// IMP=0x001000000000809f
- (void)_extractEmailAddressesFromProperties:(id)arg1 into:(id)arg2;	// IMP=0x0010000000007c5a
- (_Bool)_getShareName;	// IMP=0x0010000000007a50
- (id)promptForSingleBundleID;	// IMP=0x0010000000007343
- (id)_fetchCurrentUserNameComponents;	// IMP=0x00100000000070d6
- (_Bool)shareNeedsAcceptance;	// IMP=0x001000000000704d
- (id)_fetchShareMetadataForAccountID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006852
- (id)_promptForAccountIDChoiceWithAccountIDsByUsername:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000648e
- (id)fetchMetadata;	// IMP=0x00100000000058b7
- (long long)_checkRepresentativeDataclassEnabled:(id *)arg1 appCandidatesPresent:(_Bool)arg2;	// IMP=0x001000000000524d
- (_Bool)_promptToOpenAppStoreLink:(id *)arg1 alertOptions:(id)arg2 appURL:(id)arg3;	// IMP=0x0010000000004eb4
- (id)_findStoreDataForBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000043f8
- (_Bool)_fallbackFlowDownloadAppUpdate:(id *)arg1;	// IMP=0x0010000000003fcb
- (_Bool)_fallbackFlowDownloadApp:(id *)arg1;	// IMP=0x0010000000003b91
- (id)_iOSwatchOSHandleMultipleAppStoreCandidates:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003a13
- (_Bool)_fallbackFlowWebRedirect:(id *)arg1;	// IMP=0x00100000000032a6
- (_Bool)_fallbackFlowWarnShareUnavailable:(id *)arg1;	// IMP=0x00100000000030df
- (_Bool)_fallbackFlowWarnServiceUnavailable:(id *)arg1;	// IMP=0x0010000000002fc9
- (_Bool)_fallbackFlowWarnNetworkUnavailable:(id *)arg1;	// IMP=0x0010000000002eb3
- (long long)_fallbackFlowICloudAccountSettings:(id *)arg1 success:(_Bool *)arg2;	// IMP=0x0010000000002b94
- (_Bool)_shouldSendURLToPhotos:(id)arg1;	// IMP=0x0010000000002a89
- (_Bool)_shouldSendURLToBladeRunner:(id)arg1;	// IMP=0x001000000000295d
- (_Bool)_urlIsAniWorkShareURL:(id)arg1;	// IMP=0x0010000000002848
- (void)retrievingDialogCancelled;	// IMP=0x0010000000002836
- (_Bool)retrievingDialogShouldDisplay;	// IMP=0x00100000000027d0
- (_Bool)shouldShowRetrievingDialogForState:(long long)arg1;	// IMP=0x00100000000027b6
- (_Bool)_shouldShowICloudLoginPrompt:(id)arg1;	// IMP=0x0010000000002480
- (void)_cancel;	// IMP=0x0010000000002469
- (id)initWithShareMetadata:(id)arg1 shareURL:(id)arg2;	// IMP=0x001000000000240a
- (id)initWithCloudKitURL:(id)arg1 invitationToken:(id)arg2;	// IMP=0x00100000000023ab
- (id)initWithCloudKitURL:(id)arg1;	// IMP=0x00100000000022ec

@end

