//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABURLContactPredicate : CNPredicate
{
    NSString *_urlString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b9bd0
- (void).cxx_destruct;	// IMP=0x00000000000ba179
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ba08f
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000b9e27
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000b9d41
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000b9d39
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000b9d31
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000b9d29
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b9cac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b9bd8
- (id)initWithURLString:(id)arg1;	// IMP=0x00000000000b9b56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
