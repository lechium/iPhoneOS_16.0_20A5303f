//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountForContainerPredicate : CNPredicate
{
    NSString *_containerIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000061482
- (void).cxx_destruct;	// IMP=0x0000000000061779
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000615db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006155e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006148a
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x00000000000613b9
- (id)initWithPredicate:(id)arg1;	// IMP=0x00000000000613a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

