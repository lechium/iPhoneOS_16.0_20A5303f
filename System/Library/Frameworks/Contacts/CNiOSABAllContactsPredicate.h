//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAllContactsPredicate : CNPredicate
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000bc557
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bc619
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bc600
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000bc5d5
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000bc5cd
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000bc5c5
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000bc5bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bc58e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bc55f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
