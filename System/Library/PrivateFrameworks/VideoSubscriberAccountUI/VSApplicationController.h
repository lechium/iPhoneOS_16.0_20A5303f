//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSValue, NSError, NSOperationQueue, NSString, NSURL, VSAppDocumentController, VSApplication, VSApplicationControllerResponseHandler, VSAuditToken, VSIdentityProvider, VSPreferences, VSStateMachine;
@protocol VSApplicationControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSApplicationController : NSObject
{
    _Bool _applicationMustSelfValidate;	// 8 = 0x8
    _Bool _allowUI;	// 9 = 0x9
    id <VSApplicationControllerDelegate> _delegate;	// 16 = 0x10
    VSIdentityProvider *_identityProvider;	// 24 = 0x18
    NSString *_accountProviderAuthenticationToken;	// 32 = 0x20
    VSAuditToken *_auditToken;	// 40 = 0x28
    VSStateMachine *_stateMachine;	// 48 = 0x30
    NSError *_delegateError;	// 56 = 0x38
    NSError *_onLaunchError;	// 64 = 0x40
    NSURL *_fetchedURL;	// 72 = 0x48
    NSOperationQueue *_privateQueue;	// 80 = 0x50
    VSApplication *_application;	// 88 = 0x58
    VSApplicationControllerResponseHandler *_responseHandler;	// 96 = 0x60
    VSAppDocumentController *_appDocumentController;	// 104 = 0x68
    JSValue *_applicationReadyCallback;	// 112 = 0x70
    VSPreferences *_preferences;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000002920a
@property(retain, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) _Bool allowUI; // @synthesize allowUI=_allowUI;
@property(nonatomic) _Bool applicationMustSelfValidate; // @synthesize applicationMustSelfValidate=_applicationMustSelfValidate;
@property(retain, nonatomic) JSValue *applicationReadyCallback; // @synthesize applicationReadyCallback=_applicationReadyCallback;
@property(retain, nonatomic) VSAppDocumentController *appDocumentController; // @synthesize appDocumentController=_appDocumentController;
@property(retain, nonatomic) VSApplicationControllerResponseHandler *responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain) VSApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSURL *fetchedURL; // @synthesize fetchedURL=_fetchedURL;
@property(retain) NSError *onLaunchError; // @synthesize onLaunchError=_onLaunchError;
@property(retain) NSError *delegateError; // @synthesize delegateError=_delegateError;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) NSString *accountProviderAuthenticationToken; // @synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property(nonatomic) __weak id <VSApplicationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_makeJavaScriptRequest;	// IMP=0x0000000000028fc0
- (id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2;	// IMP=0x0000000000028b38
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;	// IMP=0x000000000002889a
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000285a4
- (id)_applicationControllerAlertForJavascriptAlert:(id)arg1;	// IMP=0x0000000000028047
- (id)_applicationLaunchParams;	// IMP=0x0000000000027cf4
- (id)_bootURL;	// IMP=0x0000000000027c4f
- (void)_notifyDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027b9d
- (void)_notifyStartDidFailWithError:(id)arg1;	// IMP=0x0000000000027aaa
- (void)_notifyDidStart;	// IMP=0x0000000000027a00
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000278e4
- (void)_notifyDidReceiveViewModelError:(id)arg1;	// IMP=0x00000000000277f1
- (void)_notifyDidReceiveViewModel:(id)arg1;	// IMP=0x00000000000276fe
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;	// IMP=0x00000000000275e2
- (void)_completeRequest:(id)arg1 withResult:(id)arg2;	// IMP=0x000000000002725d
- (void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3;	// IMP=0x0000000000026f65
- (void)_applicationReadyWithSuccess:(_Bool)arg1 javascriptErrorValue:(id)arg2;	// IMP=0x0000000000026c24
- (void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2;	// IMP=0x0000000000026481
- (void)_cancelValidation;	// IMP=0x00000000000263a1
- (void)_beginAuthentication;	// IMP=0x0000000000026230
- (void)_presentAlert:(id)arg1;	// IMP=0x0000000000026036
- (void)_presentDocument:(id)arg1;	// IMP=0x0000000000025aa0
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;	// IMP=0x0000000000025a29
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;	// IMP=0x000000000002596a
- (id)activeAppDocumentForApplication:(id)arg1;	// IMP=0x000000000002591a
- (id)launchParamsForApplication:(id)arg1;	// IMP=0x0000000000025908
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;	// IMP=0x0000000000025881
- (void)applicationDidStart:(id)arg1;	// IMP=0x000000000002583d
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;	// IMP=0x0000000000024bb8
- (void)applicationStartSelfValidationWithAuthenticationToken:(id)arg1;	// IMP=0x00000000000247f2
- (void)submitRequest:(id)arg1;	// IMP=0x000000000002463c
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1;	// IMP=0x0000000000024052
- (void)sendErrorMessage:(id)arg1;	// IMP=0x0000000000023fe0
- (void)stop;	// IMP=0x0000000000023f06
- (void)start;	// IMP=0x0000000000023ec2
- (void)transitionToInvalidState;	// IMP=0x0000000000023dc9
- (void)transitionToNotifyingOfLaunchFailureState;	// IMP=0x0000000000023b3c
- (void)transitionToReadyState;	// IMP=0x0000000000023adf
- (void)transitionToWaitingForBothLaunchCallbacksState;	// IMP=0x000000000002338f
- (void)transitionToWaitingForBootUrlState;	// IMP=0x0000000000022eb0
- (void)dealloc;	// IMP=0x0000000000022dff
- (id)initWithIdentityProvider:(id)arg1;	// IMP=0x00000000000229a3
- (id)init;	// IMP=0x0000000000022934
- (oneway void)release;	// IMP=0x000000000000c8e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
