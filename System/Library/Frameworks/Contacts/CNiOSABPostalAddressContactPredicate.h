//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNPostalAddress, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPostalAddressContactPredicate : CNPredicate
{
    CNPostalAddress *_postalAddress;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f1ab3
- (void).cxx_destruct;	// IMP=0x00000000000f2128
@property(copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f1f18
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f1f10
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000f1d0a
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000f1c24
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000f1c1c
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000f1c14
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000f1c0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f1b8f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f1abb
- (id)initWithPostalAddress:(id)arg1;	// IMP=0x00000000000f1a22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

