//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABHandleStringsContactPredicate
{
}

+ (id)peopleForPredicate:(id)arg1 sortOrder:(unsigned int)arg2 addressBook:(void *)arg3;	// IMP=0x001000000007a307
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007a35b
- (id)handlesPredicateWithMap:(id)arg1;	// IMP=0x000000000007a1a6
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000079f35
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000079d13
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000079d0b
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000079d03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

