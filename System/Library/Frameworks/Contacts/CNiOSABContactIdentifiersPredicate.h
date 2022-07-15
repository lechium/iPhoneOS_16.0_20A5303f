//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactIdentifiersPredicate
{
    _Bool _ignoreUnifiedIdentifiers;	// 24 = 0x18
}

@property(readonly) _Bool ignoreUnifiedIdentifiers; // @synthesize ignoreUnifiedIdentifiers=_ignoreUnifiedIdentifiers;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010b838
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x000000000010b71b
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x000000000010b713
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x000000000010b701
- (_Bool)cn_supportsNativeSorting;	// IMP=0x000000000010b6f9
- (id)initWithIdentifiers:(id)arg1 ignoreUnifiedIdentifiers:(_Bool)arg2;	// IMP=0x000000000010b699

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
