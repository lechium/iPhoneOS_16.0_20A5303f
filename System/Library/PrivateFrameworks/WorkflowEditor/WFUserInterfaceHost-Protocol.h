//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class INAppDescriptor, INIntent, INInteraction, LNAction, LNActionMetadata, LNActionParameterMetadata, LNSuccessResult, LNViewSnippet, NSArray, NSDictionary, NSString, NSURL, NSUserActivity, NSXPCConnection, WFAlert, WFContentCollection, WFDialogTransformer, WFWorkflowAuthorizationConfiguration;

@protocol WFUserInterfaceHost <NSObject>
- (_Bool)isRunningInSiri;
- (void)presentAlert:(WFAlert *)arg1;
@property(nonatomic, readonly) NSString *userInterfaceType;

@optional
- (_Bool)executeLinkAction:(LNAction *)arg1 inApplication:(NSString *)arg2 completionHandler:(void (^)(LNActionOutput *, NSError *))arg3;
- (_Bool)openApp:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)configureIntent:(INIntent *)arg1;
- (_Bool)executeIntent:(INIntent *)arg1 completionHandler:(void (^)(INInteraction *, NSError *))arg2;
- (_Bool)openUserActivity:(NSUserActivity *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (_Bool)openInteractionInApp:(INInteraction *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (_Bool)speakText:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@property(nonatomic, readonly) long long executionContext;
@property(nonatomic, readonly) NSArray *airPlayRouteIDs;
- (NSXPCConnection *)daemonConnection;
- (void)resolveDescriptor:(INAppDescriptor *)arg1 completionHandler:(void (^)(INAppDescriptor *))arg2;
- (_Bool)openURL:(NSURL *)arg1 withBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (WFDialogTransformer *)dialogTransformer;
- (_Bool)shouldNotHandoff;
- (void)requestFileAccessForURLs:(NSArray *)arg1 workflowName:(NSString *)arg2 workflowID:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)requestAuthorizationWithConfiguration:(WFWorkflowAuthorizationConfiguration *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)requestActionInterfacePresentationForActionClassName:(NSString *)arg1 classNamesByType:(NSDictionary *)arg2 completionHandler:(void (^)(id <WFActionRemoteUserInterface>, NSError *))arg3;
- (void)dismissPresentedContentWithCompletionHandler:(void (^)(void))arg1;
- (void)showPreviewForContentCollection:(WFContentCollection *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)getPreferredSizeForLinkViewSnippetWithCompletion:(void (^)(NSValue *))arg1;
- (void)showLinkResult:(LNSuccessResult *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)showLinkActionConfirmationWithActionMetadata:(LNActionMetadata *)arg1 dialogString:(NSString *)arg2 viewSnippet:(LNViewSnippet *)arg3 completionHandler:(void (^)(unsigned long long))arg4;
- (void)showLinkParameterConfirmationWithActionMetadata:(LNActionParameterMetadata *)arg1 dialogString:(NSString *)arg2 viewSnippet:(LNViewSnippet *)arg3 completionHandler:(void (^)(unsigned long long))arg4;
- (void)showHandleInteraction:(INInteraction *)arg1 prompt:(NSString *)arg2 completionHandler:(void (^)(unsigned long long))arg3;
- (void)showConfirmInteraction:(INInteraction *)arg1 prompt:(NSString *)arg2 requireAuthentication:(_Bool)arg3 completionHandler:(void (^)(unsigned long long))arg4;
- (_Bool)requestedFromAnotherDevice;
@end

