//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNContactsWithIdentifiersPredicate : CNPredicate
{
    NSMutableDictionary *_internalIdentifiers;	// 24 = 0x18
    NSArray *_identifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f896b
- (void).cxx_destruct;	// IMP=0x00000000000f9193
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f8f94
@property(readonly, copy) NSString *description;
- (id)internalIdentifiersForStoreWithIdentifier:(id)arg1;	// IMP=0x00000000000f8af2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f8a75
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f8973
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x00000000000f88a2
- (id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002a7e0
- (_Bool)cn_supportsNativeSorting;	// IMP=0x000000000002a7d8
- (id)contactsFromDonationStore:(id)arg1;	// IMP=0x00000000000610a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

