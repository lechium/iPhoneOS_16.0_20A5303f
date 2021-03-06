//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNMultiValuePropertyDescription.h>

@interface CNMultiValuePropertyDescription (ABSExtentions)
- (_Bool)isABSLabeledValueValue:(id)arg1 equalToValue:(id)arg2;	// IMP=0x006000000000da18
- (CDUnknownBlockType)passThroughMultivalueTransformWithLabelMapping:(id)arg1;	// IMP=0x006000000000da04
- (CDUnknownBlockType)dictionaryBasedMultiValueTransformWithLabelMapping:(id)arg1 inputKeys:(id)arg2 destinationClass:(Class)arg3 valueMapping:(id)arg4;	// IMP=0x006000000000d6e3
- (CDUnknownBlockType)multiValueTransformWithLabelMapping:(id)arg1 valueTransform:(CDUnknownBlockType)arg2;	// IMP=0x006000000000d4d3
- (CDUnknownBlockType)ABSMultiValueLabeledValueFromCNLabeledValueTransform;	// IMP=0x006000000000d46d
- (CDUnknownBlockType)CNLabeledValueFromABSMultiValueTranform;	// IMP=0x006000000000d407
- (id)CNValueFromABSValue:(void *)arg1;	// IMP=0x006000000000d384
- (const void *)ABSValueFromCNValue:(id)arg1;	// IMP=0x006000000000d237
@end

