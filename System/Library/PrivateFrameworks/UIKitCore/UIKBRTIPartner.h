//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, RTIDocumentState, RTIDocumentTraits, RTIInputSystemClient, TIKeyboardOutput, UIKeyboardTaskExecutionContext;
@protocol UIKBRTIPartnerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBRTIPartner : NSObject
{
    RTIDocumentTraits *_remoteDocumentTraits;	// 8 = 0x8
    struct __CFStringTokenizer *_wkRectTokenizer;	// 16 = 0x10
    _Bool _inputSystemClientEnabled;	// 24 = 0x18
    _Bool _isNotifyingDelegateOfRemoteOutputOperation;	// 25 = 0x19
    _Bool _applicationStateIsActiveForRTI;	// 26 = 0x1a
    _Bool _viewServiceStateIsActiveForRTI;	// 27 = 0x1b
    _Bool _isObservingGeometry;	// 28 = 0x1c
    _Bool _cacheHitTestsAsOpaque;	// 29 = 0x1d
    _Bool _deactivatedByFullScreenTransientOverlay;	// 30 = 0x1e
    id <UIKBRTIPartnerDelegate> _partnerDelegate;	// 32 = 0x20
    RTIInputSystemClient *_rtiClient;	// 40 = 0x28
    RTIDocumentTraits *_rtiDocumentTraits;	// 48 = 0x30
    RTIDocumentState *_rtiDocumentState;	// 56 = 0x38
    TIKeyboardOutput *_pendingOutputOperation;	// 64 = 0x40
    UIKeyboardTaskExecutionContext *_waitingRTIOutputOperationResponseContext;	// 72 = 0x48
    NSUUID *_currentSessionIdentifier;	// 80 = 0x50
    NSMutableDictionary *_supplementalLexicons;	// 88 = 0x58
    NSMutableDictionary *_textSuggestions;	// 96 = 0x60
    NSMutableArray *_queuedSupplementalLexiconOperations;	// 104 = 0x68
}

+ (void)registerTextOperationCustomInfo;	// IMP=0x0010000000c3042e
- (void).cxx_destruct;	// IMP=0x0000000000c40bcc
@property(nonatomic) _Bool deactivatedByFullScreenTransientOverlay; // @synthesize deactivatedByFullScreenTransientOverlay=_deactivatedByFullScreenTransientOverlay;
@property(retain, nonatomic) NSMutableArray *queuedSupplementalLexiconOperations; // @synthesize queuedSupplementalLexiconOperations=_queuedSupplementalLexiconOperations;
@property(retain, nonatomic) NSMutableDictionary *textSuggestions; // @synthesize textSuggestions=_textSuggestions;
@property(retain, nonatomic) NSMutableDictionary *supplementalLexicons; // @synthesize supplementalLexicons=_supplementalLexicons;
@property(nonatomic) _Bool cacheHitTestsAsOpaque; // @synthesize cacheHitTestsAsOpaque=_cacheHitTestsAsOpaque;
@property(nonatomic) _Bool isObservingGeometry; // @synthesize isObservingGeometry=_isObservingGeometry;
@property(copy, nonatomic) NSUUID *currentSessionIdentifier; // @synthesize currentSessionIdentifier=_currentSessionIdentifier;
@property(retain) UIKeyboardTaskExecutionContext *waitingRTIOutputOperationResponseContext; // @synthesize waitingRTIOutputOperationResponseContext=_waitingRTIOutputOperationResponseContext;
@property(retain, nonatomic) TIKeyboardOutput *pendingOutputOperation; // @synthesize pendingOutputOperation=_pendingOutputOperation;
@property(nonatomic) _Bool viewServiceStateIsActiveForRTI; // @synthesize viewServiceStateIsActiveForRTI=_viewServiceStateIsActiveForRTI;
@property(nonatomic) _Bool applicationStateIsActiveForRTI; // @synthesize applicationStateIsActiveForRTI=_applicationStateIsActiveForRTI;
@property(retain, nonatomic) RTIDocumentState *rtiDocumentState; // @synthesize rtiDocumentState=_rtiDocumentState;
@property(retain, nonatomic) RTIDocumentTraits *rtiDocumentTraits; // @synthesize rtiDocumentTraits=_rtiDocumentTraits;
@property(retain, nonatomic) RTIInputSystemClient *rtiClient; // @synthesize rtiClient=_rtiClient;
@property(readonly, nonatomic) _Bool isNotifyingDelegateOfRemoteOutputOperation; // @synthesize isNotifyingDelegateOfRemoteOutputOperation=_isNotifyingDelegateOfRemoteOutputOperation;
@property(nonatomic) _Bool inputSystemClientEnabled; // @synthesize inputSystemClientEnabled=_inputSystemClientEnabled;
@property(nonatomic) __weak id <UIKBRTIPartnerDelegate> partnerDelegate; // @synthesize partnerDelegate=_partnerDelegate;
- (id)insertionPointColor;	// IMP=0x0000000000c40905
- (void)_geometryChanged:(const CDStruct_ac6e8047 *)arg1 forAncestor:(id)arg2;	// IMP=0x0000000000c408ec
- (void)_updateGeometryObserverIfNecessary;	// IMP=0x0000000000c40609
- (struct CGRect)convertRect:(struct CGRect)arg1 from:(id)arg2;	// IMP=0x0000000000c40401
- (void)_queryUIKitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3edee
- (void)_queryWKDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3e64e
- (void)_addMergedTextRectsToDocumentState:(id)arg1 forWKContext:(id)arg2 textInputView:(id)arg3 granularity:(long long)arg4;	// IMP=0x0000000000c3e289
- (void)_addAutocorrectStylingToDocumentState:(id)arg1;	// IMP=0x0000000000c3dede
- (void)_addFirstSelectionRectToDocumentState:(id)arg1;	// IMP=0x0000000000c3daad
- (struct CGRect)_selectionClipRect;	// IMP=0x0000000000c3d93d
- (long long)_uiTextGranularityForRTITextGranularity:(long long)arg1;	// IMP=0x0000000000c3d92a
- (void)_queryDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3d862
- (void)performDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3d77b
- (void)defaultDocumentRequestDidChange:(id)arg1;	// IMP=0x0000000000c3d6e9
- (unsigned int)_performKeyboardOutputOperations:(id)arg1;	// IMP=0x0000000000c3d3fb
- (void)_queued_performTextOperations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3ba02
- (void)performTextOperations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c3b826
- (void)performTextOperations:(id)arg1;	// IMP=0x0000000000c3b807
- (void)connectionInterrupted:(id)arg1;	// IMP=0x0000000000c3b7f5
- (void)connectionInvalidated:(id)arg1;	// IMP=0x0000000000c3b7e3
- (void)finishCompletionHandlersIfNeeded;	// IMP=0x0000000000c3b72e
- (void)inputSession:(id)arg1 didRemoveRTISupplementalLexicon:(id)arg2;	// IMP=0x0000000000c3b511
- (void)inputSession:(id)arg1 didAddRTISupplementalLexicon:(id)arg2;	// IMP=0x0000000000c3b2cf
- (void)inputSession:(id)arg1 textSuggestionsChanged:(id)arg2;	// IMP=0x0000000000c3b14c
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2 withResponse:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c3aab3
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2;	// IMP=0x0000000000c392dd
- (void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;	// IMP=0x0000000000c392c6
- (void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;	// IMP=0x0000000000c392af
- (void)applyRemoteDocumentStateIfNecessary:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000c39084
- (void)applyAssistantItem:(id)arg1;	// IMP=0x0000000000c39012
- (void)applyRemoteDocumentTraitsIfNecessary:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000c37ac0
- (void)_addTextCheckingAnnotatedStringToDocumentState:(id)arg1;	// IMP=0x0000000000c377af
- (void)_addCharacterRectsToDocumentState:(id)arg1 textRange:(id)arg2 offset:(long long)arg3;	// IMP=0x0000000000c371b1
- (void)_updateRTIStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c36d59
- (id)inputDelegateView;	// IMP=0x0000000000c36caa
- (id)inputDelegate;	// IMP=0x0000000000c36c5a
- (_Bool)_updateRTITraitsIfNecessary;	// IMP=0x0000000000c358ba
- (void)updateStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c35868
- (void)restartCurrentSession;	// IMP=0x0000000000c357a0
- (void)endAllowingRemoteTextInput:(id)arg1;	// IMP=0x0000000000c356ef
- (void)beginAllowingRemoteTextInput:(id)arg1;	// IMP=0x0000000000c35663
- (void)ensureRTIConnection;	// IMP=0x0000000000c3546e
- (void)_createRTIClientIfNecessary;	// IMP=0x0000000000c353b9
- (void)_createRTIClient;	// IMP=0x0000000000c35342
- (void)_didCreateRTIClient:(id)arg1;	// IMP=0x0000000000c35305
- (id)_newRTIConnection;	// IMP=0x0000000000c351cd
- (id)_newInputSystemUIClient;	// IMP=0x0000000000c35000
- (id)_defaultRTIMachNames;	// IMP=0x0000000000c34c7f
- (void)_updateRTIAllowedAndNotify:(_Bool)arg1 withReason:(id)arg2;	// IMP=0x0000000000c34b20
- (void)_didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000000c34aab
- (void)_didAddSupplementalLexicon:(id)arg1;	// IMP=0x0000000000c3473b
- (void)didRemoveSupplementalLexicon:(id)arg1;	// IMP=0x0000000000c34690
- (void)didAddSupplementalLexicon:(id)arg1;	// IMP=0x0000000000c3460f
- (void)_performQueuedSupplementalLexiconOperations;	// IMP=0x0000000000c343a8
- (void)_queueSupplementalLexiconOperation:(unsigned long long)arg1 lexicon:(id)arg2;	// IMP=0x0000000000c34266
- (_Bool)remoteTextInputClientHasActiveSession;	// IMP=0x0000000000c341ab
- (void)removeTextSuggestionsForSessionWithID:(id)arg1;	// IMP=0x0000000000c340ef
- (void)addTextSuggestions:(id)arg1;	// IMP=0x0000000000c33fde
- (void)updateTextSuggestionsIfNecessary:(id)arg1;	// IMP=0x0000000000c33e54
- (void)textSuggestionsChanged:(id)arg1;	// IMP=0x0000000000c33da7
- (id)textOperation_insertionPointExitedTextWithSupplementalItems;	// IMP=0x0000000000c33cbf
- (id)textOperation_insertionPointEnteredText:(id)arg1 withSupplementalCandidate:(id)arg2;	// IMP=0x0000000000c33b43
- (id)textOperation_cancelChooseSupplementalItemToInsert;	// IMP=0x0000000000c33a5b
- (id)textOperation_chooseSupplementalItem:(id)arg1 toReplaceText:(id)arg2;	// IMP=0x0000000000c33776
- (id)textOperation_insertSupplementalCandidate:(id)arg1 textToCommit:(id)arg2;	// IMP=0x0000000000c33623
- (void)forwardEventToRemoteSource_canSuggestSupplementalItemsForCurrentSelection:(_Bool)arg1;	// IMP=0x0000000000c3345d
- (void)forwardEventCallbackToRemoteSource_didChooseSupplementalItem:(id)arg1 toReplaceText:(id)arg2;	// IMP=0x0000000000c33211
- (void)forwardKeyboardCameraEvent_startCameraInput:(id)arg1;	// IMP=0x0000000000c330dd
- (void)forwardSelectorToUIHost:(SEL)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c32ef3
- (void)forwardUserInteractionEventToUIHost:(SEL)arg1;	// IMP=0x0000000000c32dfe
- (void)forwardDictationEventToUIHost:(SEL)arg1 withOptionalObject:(id)arg2;	// IMP=0x0000000000c32ccb
- (_Bool)synchronousForwardKeyInputMethodCommandEventToUIHost:(id)arg1 canHandleAppKeyCommand:(_Bool)arg2;	// IMP=0x0000000000c328e6
- (_Bool)synchronousForwardKeyCommandsToUIHost:(id)arg1;	// IMP=0x0000000000c325f8
- (_Bool)synchronousForwardKeyCommandsBeforePublicToUIHost:(id)arg1;	// IMP=0x0000000000c32249
- (void)forwardKeyboardEventToUIHost:(id)arg1;	// IMP=0x0000000000c3213c
- (void)forwardClearForwardingInputDelegateAndResign:(_Bool)arg1;	// IMP=0x0000000000c31f59
- (void)forwardKeyboardInputMode:(id)arg1;	// IMP=0x0000000000c31e1f
- (void)forwardKeyboardSuppressionAndSuppressAssistantBar:(_Bool)arg1;	// IMP=0x0000000000c31c92
- (void)performInputOperation:(id)arg1;	// IMP=0x0000000000c31bc5
- (void)documentStateChanged:(_Bool)arg1;	// IMP=0x0000000000c31a08
- (void)documentStateChanged;	// IMP=0x0000000000c319f4
- (void)endInputSessionWithIdentifier:(id)arg1 shouldResign:(_Bool)arg2;	// IMP=0x0000000000c318d2
- (void)endInputSessionWithIdentifier:(id)arg1;	// IMP=0x0000000000c318bb
- (void)beginInputSessionWithIdentifier:(id)arg1;	// IMP=0x0000000000c314d6
- (void)updateAnimationForOptions:(id)arg1;	// IMP=0x0000000000c3140c
- (void)documentTraitsChanged;	// IMP=0x0000000000c312fc
- (id)delegate;	// IMP=0x0000000000c312ac
- (void)_screenModeDidChange:(id)arg1;	// IMP=0x0000000000c31291
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;	// IMP=0x0000000000c310e6
- (void)_applicationWillAddDeactivationReason:(id)arg1;	// IMP=0x0000000000c30ef1
- (void)_viewServiceHostDidBecomeActive:(id)arg1;	// IMP=0x0000000000c30eb5
- (void)_viewServiceHostWillResignActive:(id)arg1;	// IMP=0x0000000000c30e7c
- (void)_applicationWillSuspend:(id)arg1;	// IMP=0x0000000000c30e00
- (void)_macWindowChangedKey:(id)arg1;	// IMP=0x0000000000c30dee
- (void)dealloc;	// IMP=0x0000000000c30d3e
- (id)init;	// IMP=0x0000000000c302c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

