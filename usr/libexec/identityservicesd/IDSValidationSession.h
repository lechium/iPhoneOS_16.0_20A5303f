//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface IDSValidationSession : NSObject
{
    NSData *_helloMessage;	// 8 = 0x8
    NSString *_UDID;	// 16 = 0x10
    NSString *_serialNumber;	// 24 = 0x18
    NSString *_IMEI;	// 32 = 0x20
    NSString *_MEID;	// 40 = 0x28
    NSData *_scoringNonce;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    long long _stateFlags;	// 64 = 0x40
    NSData *_BAACert;	// 72 = 0x48
    NSData *_intermediateRootCert;	// 80 = 0x50
    long long _mechanism;	// 88 = 0x58
}

+ (id)retrieveLocalUDID;	// IMP=0x0020000000206180
+ (id)_BAACertTTLInMinutesFromServerBag;	// IMP=0x0010000000205dd0
+ (id)_BAAFetchTimeoutFromServerBag;	// IMP=0x0010000000205cc0
+ (_Bool)_isBAAOptionEnabledByServerBag;	// IMP=0x0010000000205b80
+ (_Bool)_isAbsintheV3EnabledByServerBag;	// IMP=0x0010000000205a70
+ (_Bool)isScoringSupported;	// IMP=0x0010000000205a50
+ (_Bool)isSigningSupported;	// IMP=0x0010000000205a30
+ (void)purgeCachedCertsForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000002043e0
+ (void)absintheValidationSessionOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002041b0
+ (void)baaOnlyValidationSessionOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002040a0
+ (void)validationSessionOnQueue:(id)arg1 mechanism:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000203fc0
- (void).cxx_destruct;	// IMP=0x0020000000206520
@property(readonly, nonatomic) long long mechanism; // @synthesize mechanism=_mechanism;
@property(copy, nonatomic) NSData *intermediateRootCert; // @synthesize intermediateRootCert=_intermediateRootCert;
@property(copy, nonatomic) NSData *BAACert; // @synthesize BAACert=_BAACert;
@property(nonatomic) long long stateFlags; // @synthesize stateFlags=_stateFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSData *scoringNonce; // @synthesize scoringNonce=_scoringNonce;
@property(copy, nonatomic) NSString *MEID; // @synthesize MEID=_MEID;
@property(copy, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSData *helloMessage; // @synthesize helloMessage=_helloMessage;
- (id)_deviceAbsintheMEID;	// IMP=0x00100000002061e0
- (id)_deviceAbsintheIMEI;	// IMP=0x00100000002061d0
- (id)_deviceAbsintheSerialNumber;	// IMP=0x00100000002061c0
- (id)_deviceAbsintheUDID;	// IMP=0x0010000000206190
- (_Bool)_shouldUseDebugPiscoLogging;	// IMP=0x00100000002060d0
- (_Bool)_shouldUseBAACertOption;	// IMP=0x0010000000205ff0
- (_Bool)_shouldUseBAAOnly;	// IMP=0x0010000000205fd0
- (_Bool)_shouldUseAbsintheV4;	// IMP=0x0010000000205f00
- (_Bool)_shouldUseAbsintheV3;	// IMP=0x0010000000205ee0
@property(readonly, nonatomic) _Bool isUsingBAA;
@property(readonly, nonatomic) _Bool isUsingAbsintheV4;
@property(readonly, nonatomic) _Bool isUsingAbsintheV3;
@property(readonly, nonatomic) _Bool isInitializedForScoring;
@property(readonly, nonatomic) _Bool isInitializedForSigning;
- (void)invalidate;	// IMP=0x0010000000205740
- (void)deviceScoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000205590
- (id)headersBySigningData:(id)arg1 serverTimestamp:(id)arg2 error:(id *)arg3;	// IMP=0x00100000002048d0
- (id)signData:(id)arg1 serverTimestamp:(id)arg2;	// IMP=0x0010000000204660
- (id)activateWithValidationData:(id)arg1 serverKey:(id)arg2 scoringNonce:(id)arg3;	// IMP=0x0010000000204400
- (void)dealloc;	// IMP=0x0010000000203f70
- (id)description;	// IMP=0x0010000000203eb0
- (id)initWithQueue:(id)arg1 mechanism:(long long)arg2;	// IMP=0x0010000000203dc0

@end
