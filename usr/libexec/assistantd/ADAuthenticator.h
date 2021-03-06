//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;
@protocol ADDeviceAuthenticationSession, OS_dispatch_queue;

@interface ADAuthenticator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSData *_requestData;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    unsigned long long _authStrategyVersion;	// 32 = 0x20
    id <ADDeviceAuthenticationSession> _deviceAuthSession;	// 40 = 0x28
    unsigned long long _deviceAuthSessionState;	// 48 = 0x30
}

+ (_Bool)authenticationAvailable;	// IMP=0x00400000001b8d15
- (void).cxx_destruct;	// IMP=0x00200000001b9565
@property(retain, nonatomic, setter=_setRequestData:) NSData *_requestData; // @synthesize _requestData;
- (id)_createDeviceAuthenticationSessionForVersion:(unsigned long long)arg1;	// IMP=0x00100000001b9513
- (void)reset;	// IMP=0x00100000001b9460
- (double)sessionInfoDuration;	// IMP=0x00100000001b9455
- (id)signedDataForData:(id)arg1;	// IMP=0x00100000001b92e4
- (void)setSessionInfo:(id)arg1 duration:(double)arg2;	// IMP=0x00100000001b916a
- (id)requestData;	// IMP=0x00100000001b9158
- (void)prepareWithCertificateData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b8edc
- (unsigned long long)authenticationStrategyVersion;	// IMP=0x00100000001b8ed2
- (int)state;	// IMP=0x00100000001b8e64
- (id)deviceAuthSession;	// IMP=0x00100000001b8dc7
- (id)initWithTargetQueue:(id)arg1 authenticationStrategyVersion:(id)arg2;	// IMP=0x00100000001b8d1d

@end

