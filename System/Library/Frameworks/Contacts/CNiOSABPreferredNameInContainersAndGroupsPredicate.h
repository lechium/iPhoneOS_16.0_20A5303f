//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate
{
    NSArray *_containerIdentifiers;	// 24 = 0x18
    NSArray *_groupIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f42dc
- (void).cxx_destruct;	// IMP=0x00000000000f48aa
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f4772
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000f4560
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000f4558
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000f4550
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000f4548
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f44a9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f42e4
- (id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2;	// IMP=0x00000000000f4215

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

