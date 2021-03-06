//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IDSAccountSigningKeyKeychainAdapter;

@interface IDSAccountSigningKey : NSObject
{
    struct __SecKey *_keyRef;	// 8 = 0x8
    id <IDSAccountSigningKeyKeychainAdapter> _adapter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000006c36c0
@property(retain, nonatomic) id <IDSAccountSigningKeyKeychainAdapter> adapter; // @synthesize adapter=_adapter;
@property(readonly, nonatomic) struct __SecKey *keyRef; // @synthesize keyRef=_keyRef;
- (_Bool)withinSyncCircleVerifySignature:(id)arg1 overData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000006c3530
- (id)withinSyncCircleSignatureOfData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006c3430
- (_Bool)verifySignature:(id)arg1 overData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000006c2db0
- (id)signatureOfData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000006c27c0
- (id)publicDataRepresentationWithError:(id *)arg1;	// IMP=0x00100000006c2320
- (_Bool)isInSyncCircle;	// IMP=0x00100000006c2070
- (void)dealloc;	// IMP=0x00100000006c2020
- (id)initWithKeyRef:(struct __SecKey *)arg1 adapter:(id)arg2;	// IMP=0x00100000006c1f50

@end

