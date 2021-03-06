//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABLabeledValueContactPredicate : CNPredicate
{
    NSString *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f75f6
- (void).cxx_destruct;	// IMP=0x00000000000f7abb
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f79d1
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000f7767
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000f775f
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000f7757
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000f774f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f76d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f75fe
- (id)initWithLabeledValueIdentifier:(id)arg1;	// IMP=0x00000000000f7572

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

