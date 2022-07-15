//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDelegateAccountStoreOptions, ICValueHistory;
@protocol ICUserIdentityStoreBackend;

__attribute__((visibility("hidden")))
@interface ICUserIdentityStoreCoding : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _identityStoreStyle;	// 16 = 0x10
    long long _uniqueIdentifier;	// 24 = 0x18
    ICValueHistory *_activeAccountHistory;	// 32 = 0x20
    ICValueHistory *_activeLockerAccountHistory;	// 40 = 0x28
    id <ICUserIdentityStoreBackend> _backend;	// 48 = 0x30
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000cb42f
- (void).cxx_destruct;	// IMP=0x00000000000cb3f1
@property(copy, nonatomic) ICDelegateAccountStoreOptions *delegateAccountStoreOptions; // @synthesize delegateAccountStoreOptions=_delegateAccountStoreOptions;
@property(copy, nonatomic) id <ICUserIdentityStoreBackend> backend; // @synthesize backend=_backend;
@property(copy, nonatomic) ICValueHistory *activeLockerAccountHistory; // @synthesize activeLockerAccountHistory=_activeLockerAccountHistory;
@property(copy, nonatomic) ICValueHistory *activeAccountHistory; // @synthesize activeAccountHistory=_activeAccountHistory;
@property(readonly, nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) long long identityStoreStyle; // @synthesize identityStoreStyle=_identityStoreStyle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cb2b4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cb105
- (void)lock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb09b
- (id)initWithIdentityStoreStyle:(long long)arg1;	// IMP=0x00000000000cb04a
- (id)_initCommon;	// IMP=0x00000000000cb00f

@end
