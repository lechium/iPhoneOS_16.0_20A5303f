//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNLinkedContactsPredicate : CNPredicate
{
    CNContact *_contact;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e6450
- (void).cxx_destruct;	// IMP=0x00000000000e671f
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e658d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6458
- (id)initWithContactIdentifier:(id)arg1;	// IMP=0x00000000000e63d6
- (id)initWithContact:(id)arg1;	// IMP=0x00000000000e635c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

