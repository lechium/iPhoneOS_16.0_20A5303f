//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WKWebProcessPlugInScriptWorld, _SFFormMetadataController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface _SFWebProcessPlugInAutoFillPageController
{
    _WKRemoteObjectInterface *_activityControllerInterface;	// 8 = 0x8
    _WKRemoteObjectInterface *_autoFillerInterface;	// 16 = 0x10
    WKWebProcessPlugInScriptWorld *_isolatedWorld;	// 24 = 0x18
    _SFFormMetadataController *_formMetadataController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000152611
@property(retain, nonatomic) _SFFormMetadataController *formMetadataController; // @synthesize formMetadataController=_formMetadataController;
- (void)makeAutomaticStrongPasswordElementViewable:(_Bool)arg1 frame:(id)arg2 passwordControlUniqueIDs:(id)arg3;	// IMP=0x000000000015250a
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;	// IMP=0x0000000000152431
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;	// IMP=0x0000000000152358
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3;	// IMP=0x000000000015225a
- (void)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(long long)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001520ee
- (void)clearAutoFillMetadata;	// IMP=0x0000000000152041
- (void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000151f17
- (void)collectFormMetadataForPageLevelAutoFillAtURL:(id)arg1;	// IMP=0x0000000000151e30
- (void)collectFormMetadataForPrefillingAtURL:(id)arg1;	// IMP=0x0000000000151d49
- (void)collectURLsForPrefillingAtURL:(id)arg1;	// IMP=0x0000000000151c62
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;	// IMP=0x0000000000151b39
- (void)focusFormForStreamlinedLogin:(long long)arg1 inFrame:(id)arg2;	// IMP=0x0000000000151a72
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 shouldSubmit:(_Bool)arg3;	// IMP=0x000000000015198e
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;	// IMP=0x0000000000151893
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;	// IMP=0x0000000000151794
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;	// IMP=0x00000000001516a0
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;	// IMP=0x00000000001515c7
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 fieldsToObscure:(id)arg6 submitForm:(_Bool)arg7;	// IMP=0x000000000015148a
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 submitForm:(_Bool)arg6;	// IMP=0x0000000000151465
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5;	// IMP=0x0000000000151449
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 selectFieldAfterFilling:(id)arg4;	// IMP=0x0000000000151426
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;	// IMP=0x00000000001513a5
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;	// IMP=0x0000000000151347
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;	// IMP=0x00000000001512e9
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000001512c9
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000151001
- (void)willDestroyBrowserContextController:(id)arg1;	// IMP=0x0000000000150ed4
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;	// IMP=0x0000000000150d49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
