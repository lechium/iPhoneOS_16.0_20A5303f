//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLRequest, NSURLSession;
@protocol OS_dispatch_queue;

@interface SDAppleIDServerTask : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSString *_gsToken;	// 40 = 0x28
    NSURLSession *_session;	// 48 = 0x30
    NSDictionary *_taskInfo;	// 56 = 0x38
    long long _type;	// 64 = 0x40
    NSURLRequest *_urlRequest;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000f2cea
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSString *gsToken; // @synthesize gsToken=_gsToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_sendRequest;	// IMP=0x00100000000f2a70
- (id)_parseServerResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000f2964
- (id)_parseGetMyInfoResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000f2219
- (id)_parseFindPersonResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000f1aa6
- (id)_parseFetchCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000f11af
- (id)_parseCreateCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000f0de6
- (void)_handleTaskResponse:(id)arg1 withData:(id)arg2 error:(int)arg3;	// IMP=0x00100000000f04f7
- (void)_invalidate;	// IMP=0x00100000000f0405
- (void)_handleServerError:(long long)arg1 withStatusCode:(long long)arg2 nextSuggestedAttemptDelay:(long long)arg3;	// IMP=0x00100000000f00b1
- (void)_handleGSTokenIsAvailable;	// IMP=0x00100000000eff7c
- (void)_handleURLRequestIsAvailable;	// IMP=0x00100000000efc19
- (void)invalidate;	// IMP=0x00100000000efbb8
- (void)_activate;	// IMP=0x00100000000efa5c
- (void)_urlRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ef908
- (void)_handleURLIsAvailable:(id)arg1 error:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ef646
- (void)_urlWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ef258
- (_Bool)_isTaskInfoValid;	// IMP=0x00100000000eecf5
- (void)_callResponseHandlerWithInfo:(id)arg1 error:(int)arg2;	// IMP=0x00100000000eecde
- (void)_callResponseHandlerWithInfo:(id)arg1 errorInfo:(id)arg2 error:(int)arg3;	// IMP=0x00100000000eebc5
- (void)activate;	// IMP=0x00100000000eeb62
- (id)description;	// IMP=0x00100000000eeb29
- (id)initWithType:(long long)arg1 appleID:(id)arg2 info:(id)arg3;	// IMP=0x00100000000ee994

@end

