//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UGCAddPhotosController, UGCSubmissionLookupResult, UGCSubmissionLookupTicket, UIViewController;
@protocol UGCPOIEnrichmentEditor;

@interface UGCRatingsAndPhotosCoordinator
{
    UIViewController<UGCPOIEnrichmentEditor> *_ratingContributionsViewController;	// 8 = 0x8
    UGCAddPhotosController *_photoPicker;	// 16 = 0x10
    UGCSubmissionLookupTicket *_lookupTicket;	// 24 = 0x18
    _Bool _shouldShowThankYouScreen;	// 32 = 0x20
    _Bool _userHasDeletedSubmission;	// 33 = 0x21
    _Bool _hasPhotoPickerEmphasis;	// 34 = 0x22
    _Bool _suppressRatings;	// 35 = 0x23
    long long _initialOverallState;	// 40 = 0x28
    NSArray *_initialPhotosWithMetadata;	// 48 = 0x30
    long long _preferredSourceType;	// 56 = 0x38
    UGCSubmissionLookupResult *_existingSubmission;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000009480ca
@property(retain, nonatomic) UGCSubmissionLookupResult *existingSubmission; // @synthesize existingSubmission=_existingSubmission;
@property(nonatomic) long long preferredSourceType; // @synthesize preferredSourceType=_preferredSourceType;
@property(nonatomic) _Bool suppressRatings; // @synthesize suppressRatings=_suppressRatings;
@property(nonatomic) _Bool hasPhotoPickerEmphasis; // @synthesize hasPhotoPickerEmphasis=_hasPhotoPickerEmphasis;
@property(retain, nonatomic) NSArray *initialPhotosWithMetadata; // @synthesize initialPhotosWithMetadata=_initialPhotosWithMetadata;
@property(nonatomic) long long initialOverallState; // @synthesize initialOverallState=_initialOverallState;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0010000000947f8c
- (void)_dismissPOIEnrichmentEditorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000947cb6
- (void)_failWithAccountErrorWithPresentingViewController:(id)arg1;	// IMP=0x0010000000947bc7
- (void)_failLookupWithError:(id)arg1;	// IMP=0x0010000000947aac
- (void)_failSavedReportVersionTooNew;	// IMP=0x00100000009479af
- (id)addPhotosControllerRequestsAnchoringBarButtonItem:(id)arg1;	// IMP=0x001000000094799d
- (id)addPhotosControllerRequestsAnchoringView:(id)arg1;	// IMP=0x001000000094798b
- (void)_dismissPhotoPickerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000947813
- (void)takePhotoController:(id)arg1 didSelectPhotosWithMetadata:(id)arg2;	// IMP=0x00100000009476ee
- (void)takePhotoControllerDidCancel:(id)arg1;	// IMP=0x00100000009475fb
- (void)_presentFailedToSubmitAlertForResponse:(id)arg1 withPresentingViewController:(id)arg2;	// IMP=0x00100000009475e4
- (void)poiEnrichmenEditorDidCancel:(id)arg1;	// IMP=0x0010000000947577
- (void)_persistSubmissionWithUpdatedReviewedPlace:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009474c4
- (void)_presentThirdPartyPhotoSharePromptIfNecessaryForReviewedPlace:(id)arg1;	// IMP=0x0010000000947391
- (void)_presentPushNotificationPromptIfNecessary;	// IMP=0x001000000094719e
- (void)poiEnrichmentEditor:(id)arg1 finishedFillingEnrichmentForm:(id)arg2;	// IMP=0x001000000094638e
@property(readonly, nonatomic) _Bool isEditingSubmission;
- (id)_createPOIEnrichmentFormWithContext;	// IMP=0x0010000000945fd1
- (void)_presentPOIEnrichmentViewController;	// IMP=0x0010000000945cdd
- (void)_presentPhotoPickerWithMaxCount:(unsigned long long)arg1;	// IMP=0x0010000000945bce
- (void)_startRatingsAndPhotosFlowWithSubmissionLookup;	// IMP=0x0010000000945855
- (void)_startPOIEnrichmentFlow;	// IMP=0x0010000000945640
- (void)_startRatingsAndPhotosFlowWithInformedConsent;	// IMP=0x0010000000945314
- (void)_dismissPlacecardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000945163
@property(readonly, nonatomic) _Bool shouldDismissPlacecard;
- (void)_macOSBasedPresentation;	// IMP=0x0000000000944fff
- (void)_iosBasedPresentation;	// IMP=0x0010000000944fed
- (void)present;	// IMP=0x0010000000944f7a
- (id)init;	// IMP=0x0010000000944f3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
