//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNMultiValueDiff, CNMultiValuePropertyDescription;

__attribute__((visibility("hidden")))
@interface CNContactMultiValueDiffUpdate
{
    CNMultiValuePropertyDescription *_property;	// 8 = 0x8
    CNMultiValueDiff *_diff;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010c152
@property(readonly) CNMultiValueDiff *diff; // @synthesize diff=_diff;
@property(readonly) CNMultiValuePropertyDescription *property; // @synthesize property=_property;
- (id)description;	// IMP=0x000000000010c0dd
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;	// IMP=0x000000000010bfbb
- (id)initWithProperty:(id)arg1 diff:(id)arg2;	// IMP=0x000000000010bf0a
- (_Bool)applyToABPerson:(void *)arg1 withPropertiesContext:(id)arg2 logger:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000035623

@end

