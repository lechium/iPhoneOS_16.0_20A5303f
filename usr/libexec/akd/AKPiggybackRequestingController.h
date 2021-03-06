//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext, AKAuthenticationServerResponse, AKCAPiggybackReporter, AKCircleRequestContext, AKPiggybackingPresenceServer, KCJoiningRequestSecretSession, NSDictionary, NSError, NSNumber, NSString;
@protocol AKPiggybackRequestingControllerDelegate;

@interface AKPiggybackRequestingController : NSObject
{
    NSString *_latestIDMSData;	// 8 = 0x8
    AKCircleRequestContext *_currentReplyContext;	// 16 = 0x10
    AKCAPiggybackReporter *_piggybackReporter;	// 24 = 0x18
    unsigned long long _retryCount;	// 32 = 0x20
    _Bool _unitTestContext;	// 40 = 0x28
    id <AKPiggybackRequestingControllerDelegate> _delegate;	// 48 = 0x30
    AKAppleIDAuthenticationContext *_initiatingContext;	// 56 = 0x38
    NSString *_initiatingPassword;	// 64 = 0x40
    AKAuthenticationServerResponse *_initialAuthResponse;	// 72 = 0x48
    KCJoiningRequestSecretSession *_requestSession;	// 80 = 0x50
    NSNumber *_capturedCode;	// 88 = 0x58
    NSError *_escapeHatchTrigger;	// 96 = 0x60
    NSError *_escapeHatchError;	// 104 = 0x68
    NSDictionary *_authResults;	// 112 = 0x70
    double _initialHandshakeTimeout;	// 120 = 0x78
    AKPiggybackingPresenceServer *_presenceServer;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000005663b
@property(readonly, nonatomic) AKPiggybackingPresenceServer *presenceServer; // @synthesize presenceServer=_presenceServer;
@property(nonatomic) double initialHandshakeTimeout; // @synthesize initialHandshakeTimeout=_initialHandshakeTimeout;
@property(nonatomic) _Bool unitTestContext; // @synthesize unitTestContext=_unitTestContext;
@property(retain, nonatomic) NSDictionary *authResults; // @synthesize authResults=_authResults;
@property(retain, nonatomic) NSError *escapeHatchError; // @synthesize escapeHatchError=_escapeHatchError;
@property(retain, nonatomic) NSError *escapeHatchTrigger; // @synthesize escapeHatchTrigger=_escapeHatchTrigger;
@property(retain, nonatomic) NSNumber *capturedCode; // @synthesize capturedCode=_capturedCode;
@property(retain, nonatomic) KCJoiningRequestSecretSession *requestSession; // @synthesize requestSession=_requestSession;
@property(readonly, nonatomic) AKAuthenticationServerResponse *initialAuthResponse; // @synthesize initialAuthResponse=_initialAuthResponse;
@property(retain, nonatomic) NSString *initiatingPassword; // @synthesize initiatingPassword=_initiatingPassword;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *initiatingContext; // @synthesize initiatingContext=_initiatingContext;
@property(nonatomic) __weak id <AKPiggybackRequestingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_teardownPresenceServer;	// IMP=0x001000000005642d
- (void)_setupPresenceServerWithPushPayload:(id)arg1;	// IMP=0x0010000000056193
- (void)_clearCaptureState;	// IMP=0x001000000005615a
- (void)_cacheSecondFactor:(id)arg1 codeCaptureError:(id)arg2;	// IMP=0x0010000000056016
- (id)_capturedCodeString;	// IMP=0x0010000000055fd3
- (void)_processCodeEntryErrorWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055e1a
- (void)_processCachedUserInputWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055bd7
- (void)_promptForSecretWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005576e
- (void)_handleVerificationError:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055631
- (_Bool)processAccountCode:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005521a
- (id)verificationFailed:(_Bool)arg1;	// IMP=0x0010000000055208
- (id)secret;	// IMP=0x0010000000055148
- (_Bool)isDone;	// IMP=0x0010000000054ff6
- (_Bool)_shouldContinueProcessing:(id *)arg1;	// IMP=0x0010000000054cc4
- (id)idmsData;	// IMP=0x0010000000054cb6
- (id)contextWithIncomingPayload:(id)arg1;	// IMP=0x0010000000054c00
- (void)replyWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054a9a
- (void)_sendDeviceCancelledReplyWithContext:(id)arg1;	// IMP=0x00100000000549b1
- (void)_deliverPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053fe7
- (void)processPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053bec
- (void)_clearSessionState;	// IMP=0x0010000000053b58
- (void)_processHandshakeWithContext:(id)arg1 handshakeReply:(id)arg2 andHandshakeError:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000535c4
- (void)_initiatePiggybackingWithCleanSession:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000524e3
- (void)initiatePiggybackingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000524cc
- (id)initWithServerResponse:(id)arg1 andDelegate:(id)arg2 piggybackReporter:(id)arg3;	// IMP=0x00100000000523f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

