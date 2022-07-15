//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSMessageHashStore, IDSRegistrationKeyManager;

@interface IDSMessageHashChecker : NSObject
{
    _Bool _usePairingKey;	// 8 = 0x8
    IDSRegistrationKeyManager *_registrationKeyManager;	// 16 = 0x10
    IDSMessageHashStore *_messageHashStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001e4e20
@property(retain, nonatomic) IDSMessageHashStore *messageHashStore; // @synthesize messageHashStore=_messageHashStore;
@property(nonatomic) _Bool usePairingKey; // @synthesize usePairingKey=_usePairingKey;
@property(readonly, nonatomic) IDSRegistrationKeyManager *registrationKeyManager; // @synthesize registrationKeyManager=_registrationKeyManager;
- (id)_legacyIdentity;	// IMP=0x00100000001e4c70
- (_Bool)allowMessageData:(id)arg1 withDelayedCommitBlock:(CDUnknownBlockType *)arg2;	// IMP=0x00100000001e4990
- (_Bool)allowMessageData:(id)arg1;	// IMP=0x00100000001e47d0
- (id)initWithRegistrationKeyManager:(id)arg1 messageHashStore:(id)arg2 usePairingKey:(_Bool)arg3;	// IMP=0x00100000001e46c0
- (id)initWithRegistrationKeyManager:(id)arg1;	// IMP=0x00100000001e45f0

@end
