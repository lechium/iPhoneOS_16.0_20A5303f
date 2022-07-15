//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class LSApplicationProxy, LSDocumentProxy, MISSING_TYPE, NSData, NSDictionary, NSString, UISUISecurityContext;

@interface SUIOpenInAppActivity : UIActivity
{
    MISSING_TYPE *_isContentManaged;	// 8 = 0x8
    _Bool _appIsDocumentTypeOwner;	// 9 = 0x9
    NSString *_applicationIdentifier;	// 16 = 0x10
    LSDocumentProxy *_documentProxy;	// 24 = 0x18
    UISUISecurityContext *_securityContext;	// 32 = 0x20
    NSData *_sourceApplicationAuditTokenData;	// 40 = 0x28
    NSDictionary *_openURLAnnotationsByURL;	// 48 = 0x30
    LSApplicationProxy *_applicationProxy;	// 56 = 0x38
}

+ (id)_activitiesForFileURL:(id)arg1 isContentManaged:(_Bool)arg2 sourceApplicationAuditTokenData:(id)arg3 includeSourceApplicationInResults:(_Bool)arg4;	// IMP=0x00200000001a6e24
+ (long long)activityCategory;	// IMP=0x00100000001a6d06
+ (Class)classForPreparingExtensionItemData;	// IMP=0x00100000001a630d
+ (id)openInActivitiesForItems:(id)arg1 isContentManaged:(_Bool)arg2 sourceApplicationAuditTokenData:(id)arg3 includeSourceApplicationInResults:(_Bool)arg4;	// IMP=0x00100000001a528e
+ (id)openInActivitiesForItems:(id)arg1 isContentManaged:(_Bool)arg2 sourceApplicationAuditTokenData:(id)arg3;	// IMP=0x00100000001a5279
+ (Class)classForOpenByCopyActivity;	// IMP=0x00100000001a4fcd
+ (Class)classForOpenInPlaceActivity;	// IMP=0x00100000001a4fbc
- (void).cxx_destruct;	// IMP=0x00200000001a7659
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(nonatomic, getter=_appIsDocumentTypeOwner, setter=_setAppIsDocumentTypeOwner:) _Bool appIsDocumentTypeOwner; // @synthesize appIsDocumentTypeOwner=_appIsDocumentTypeOwner;
@property(retain, nonatomic) NSDictionary *openURLAnnotationsByURL; // @synthesize openURLAnnotationsByURL=_openURLAnnotationsByURL;
@property(retain, nonatomic) NSData *sourceApplicationAuditTokenData; // @synthesize sourceApplicationAuditTokenData=_sourceApplicationAuditTokenData;
@property(nonatomic) _Bool isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property(retain, nonatomic) UISUISecurityContext *securityContext; // @synthesize securityContext=_securityContext;
@property(retain, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)_firstMatchingDocumentProxyForActivityItems:(id)arg1;	// IMP=0x00100000001a728b
- (void)performActivity;	// IMP=0x00100000001a7bc3
- (id)activityTitle;	// IMP=0x00100000001a7b97
- (id)activityType;	// IMP=0x00100000001a6ddd
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x00100000001a6da4
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00100000001a6d71
- (id)_activitySettingsImage;	// IMP=0x00100000001a6d48
- (id)_activityImage;	// IMP=0x00100000001a6d1c
- (long long)_defaultSortGroup;	// IMP=0x00100000001a6d11
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;	// IMP=0x00100000001a6c9c
- (void)prepareWithActivityExtensionItemData:(id)arg1;	// IMP=0x00100000001a6792
- (void)prepareWithActivityItemData:(id)arg1;	// IMP=0x00100000001a631e
- (id)_bookmarkWithSandboxExtensionForExport;	// IMP=0x00100000001a60ff
- (void)performLaunchServicesImportOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a5ee0
- (_Bool)openByImportWillHandlePromiseURLs;	// IMP=0x00100000001a5e4a
- (void)performLaunchServicesInPlaceOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a5a40
- (_Bool)openInPlaceWillHandlePromiseURLs;	// IMP=0x00100000001a5a38
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000001a5981
- (void)_performLaunchServicesOpenWithDocumentOpenURL:(id)arg1 launchServiceOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a5411
@property(readonly, copy) NSString *description;
- (id)initWithApplicationProxy:(id)arg1 documentProxy:(id)arg2 isContentManaged:(_Bool)arg3 sourceApplicationAuditTokenData:(id)arg4 appIsDocumentTypeOwner:(_Bool)arg5;	// IMP=0x00100000001a4fde
- (id)ss_activitySpecificExtensionItemDataRequestInfo;	// IMP=0x00100000001a4f75
- (id)ss_activityTypeToReportToHost;	// IMP=0x00100000001a4f68
- (_Bool)ss_shouldExecuteInShareSheet;	// IMP=0x00100000001a4f60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
