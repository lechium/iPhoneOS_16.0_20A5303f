//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSString, NSURL, StoreKitClient;

@interface RestoreInAppTransactionsTask
{
    _Bool _forceAuthentication;	// 8 = 0x8
    StoreKitClient *_client;	// 16 = 0x10
    long long _apiVersion;	// 24 = 0x18
    NSString *_applicationUsername;	// 32 = 0x20
    NSString *_logKey;	// 40 = 0x28
    NSURL *_receiptInstallURL;	// 48 = 0x30
    NSArray *_transactions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000012a2c3
@property(readonly, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(retain, nonatomic) NSURL *receiptInstallURL; // @synthesize receiptInstallURL=_receiptInstallURL;
@property(readonly, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(nonatomic) _Bool forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property(copy, nonatomic) NSString *applicationUsername; // @synthesize applicationUsername=_applicationUsername;
@property(readonly, nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, nonatomic) StoreKitClient *client; // @synthesize client=_client;
- (MISSING_TYPE *)_authenticateAccount:withClientInfo:error: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000129d00
- (id)_runRequestWithError:(id *)arg1;	// IMP=0x0010000000129a32
- (void)main;	// IMP=0x0010000000129460
- (id)initWithClient:(id)arg1 apiVersion:(long long)arg2;	// IMP=0x00100000001293a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

