//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IXPromisedAppReferenceSeed, MIAppReference;

@interface IXSPromisedAppReference
{
    MIAppReference *_appReference;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000f0ef
- (void).cxx_destruct;	// IMP=0x002000000000f823
- (_Bool)validateStagedPathWithError:(id *)arg1;	// IMP=0x001000000000f81b
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x001000000000f648
- (void)markAppReferenceAsConsumed;	// IMP=0x001000000000f5f3
@property(retain, nonatomic) MIAppReference *appReference; // @synthesize appReference=_appReference;
- (id)initWithSeed:(id)arg1 ifMatchingPredicate:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000f0f7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000f02d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000ef92

// Remaining properties
@property(readonly, copy, nonatomic) IXPromisedAppReferenceSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXPromisedAppReferenceSeed *seed; // @dynamic seed;

@end

