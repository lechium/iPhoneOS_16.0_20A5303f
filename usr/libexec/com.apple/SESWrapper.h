//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface SESWrapper : NSObject
{
    _Bool _useCKVR;	// 8 = 0x8
    _Bool _recoveryPassphraseMutable;	// 9 = 0x9
    int _reqVersion;	// 12 = 0xc
    NSString *_decodedLabel;	// 16 = 0x10
    NSDate *_escrowDate;	// 24 = 0x18
    NSData *_recoveryBlob;	// 32 = 0x20
    struct ccses_crypto_t *_ccses;	// 40 = 0x28
    struct ccsrp_ctx *_srp;	// 48 = 0x30
    struct ckvr_srp_context *_ckvr;	// 56 = 0x38
    NSString *_dsid;	// 64 = 0x40
    NSString *_recoveryPassphrase;	// 72 = 0x48
    NSString *_label;	// 80 = 0x50
    NSString *_recordID;	// 88 = 0x58
    NSDictionary *_escrowRecord;	// 96 = 0x60
    NSData *_escrowBlob;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000060010
@property(retain, nonatomic) NSData *escrowBlob; // @synthesize escrowBlob=_escrowBlob;
@property(readonly, copy, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(readonly, copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) _Bool recoveryPassphraseMutable; // @synthesize recoveryPassphraseMutable=_recoveryPassphraseMutable;
@property(copy, nonatomic) NSString *recoveryPassphrase; // @synthesize recoveryPassphrase=_recoveryPassphrase;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) struct ckvr_srp_context *ckvr; // @synthesize ckvr=_ckvr;
@property(nonatomic) int reqVersion; // @synthesize reqVersion=_reqVersion;
@property(readonly, nonatomic) _Bool useCKVR; // @synthesize useCKVR=_useCKVR;
@property(readonly, nonatomic) struct ccsrp_ctx *srp; // @synthesize srp=_srp;
@property(readonly, nonatomic) struct ccses_crypto_t *ccses; // @synthesize ccses=_ccses;
@property(retain) NSData *recoveryBlob; // @synthesize recoveryBlob=_recoveryBlob;
@property(copy, nonatomic) NSDate *escrowDate; // @synthesize escrowDate=_escrowDate;
@property(copy, nonatomic) NSString *decodedLabel; // @synthesize decodedLabel=_decodedLabel;
- (void)dealloc;	// IMP=0x001000000005fe96
- (id)recoveryResponseForBlob:(id)arg1;	// IMP=0x001000000005f603
- (id)srpResponseForEscrowBlob:(id)arg1 withKey:(struct __SecKey *)arg2 withFullCCKey:(struct ccrsa_full_ctx *)arg3;	// IMP=0x001000000005ea33
- (id)decodedEscrowRecordFromData:(id)arg1 stingray:(_Bool)arg2 env:(id)arg3 duplicate:(_Bool)arg4;	// IMP=0x001000000005db8c
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey *)arg1 error:(id *)arg2;	// IMP=0x001000000005bc2e
- (id)srpRecoveryBlobFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ac2c
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;	// IMP=0x001000000005abae
- (unsigned long long)srpPublicKeySize;	// IMP=0x001000000005ab54
- (unsigned long long)srpKeySize;	// IMP=0x001000000005aade
- (id)srpInitBlob;	// IMP=0x001000000005a956
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5 ckvrFlag:(_Bool)arg6 reqVersion:(int)arg7;	// IMP=0x001000000005a6e4
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5;	// IMP=0x001000000005a5ff
- (id)initWithRequest:(id)arg1 ckvrFlag:(_Bool)arg2 reqVersion:(int)arg3;	// IMP=0x001000000005a442
- (id)initWithRequest:(id)arg1 reqVersion:(int)arg2;	// IMP=0x001000000005a3e1
- (id)initWithRequest:(id)arg1;	// IMP=0x001000000005a3cd

@end
