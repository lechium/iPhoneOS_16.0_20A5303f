//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EscrowService : NSObject
{
}

+ (_Bool)isFatalError:(id)arg1;	// IMP=0x0040000000047757
+ (id)createEscrowBlobWithCertificate:(id)arg1 escrowRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000047371
+ (id)doubleEnrollmentRecordFromPrimaryRecord:(id)arg1;	// IMP=0x0010000000046f82
+ (id)certificateRequest:(id)arg1 duplicate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000042de8
- (void)logRecoveryResults:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cade
- (void)verifyCertificateWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c664
- (void)getCountrySMSCodesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c479
- (void)listSMSTargetsWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004c28e
- (void)changeSMSTargetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004bfe1
- (void)startSMSChallengeWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004bcce
- (void)updateRecordMetadataWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b9db
- (void)_deleteRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b6a2
- (void)deleteRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ae61
- (void)ttrForPCSDataMatchFailure:(id)arg1;	// IMP=0x001000000004a77f
- (void)_performDoubleRecoveryStingrayWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x0010000000049e77
- (void)_performDoubleRecoveryICDPWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x0010000000049455
- (void)_performPostEnrollSilentRecoveryWithRequest:(id)arg1;	// IMP=0x00100000000490d0
- (void)recoverRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000048c8e
- (void)_recoverActualRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000481d0
- (void)_srpInitHelper:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000047efb
- (void)_recoverWithVersion:(int)arg1 req:(id)arg2 duplicate:(_Bool)arg3 sesWrapper:(id)arg4 srpInitResponse:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000047776
- (_Bool)processPrerecord:(id)arg1 outerRequest:(id)arg2 escrowRequest:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000046a0c
- (void)storeRecordWithCertDataRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045ef3
- (void)_storeRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000458af
- (void)storeRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000044f63
- (id)fetchCachedCertificateWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000446c4
- (_Bool)cacheStoredCertificate:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000444d8
- (id)keychainBaseQueryWithEnvironment:(id)arg1 andBaseURL:(id)arg2;	// IMP=0x0010000000044370
- (void)fetchCertificatesAndDuplicateRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043ac0
- (void)fetchCertificatesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000439fc
- (void)_fetchCertificatesWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043576
- (void)getAccountInfoWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042b66
- (id)_getBypassToken;	// IMP=0x00100000000429eb
- (void)_removeBypassToken;	// IMP=0x00100000000428cf
- (void)_saveBypassToken:(id)arg1;	// IMP=0x0010000000042780

@end

