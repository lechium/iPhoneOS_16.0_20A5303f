//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABConstantsMapping : NSObject
{
    NSDictionary *_mapping;	// 8 = 0x8
    id _defaultConstant;	// 16 = 0x10
}

+ (id)CNToABPersonShortNameFormatConstantsMapping;	// IMP=0x00600000001167a0
+ (id)ABToCNContactShortNameFormatConstantsMapping;	// IMP=0x0060000000116671
+ (id)CNToABSourceTypeConstantsMapping;	// IMP=0x006000000011656d
+ (id)ABToCNContainerTypeConstantsMapping;	// IMP=0x00600000001163f7
+ (id)CNToABLabelConstantsMapping;	// IMP=0x0060000000116334
+ (id)ABToCNLabelConstantsMapping;	// IMP=0x0060000000115e93
+ (id)CNToABPersonSocialProfileConstantsMapping;	// IMP=0x0060000000115dd0
+ (id)ABToCNPersonSocialProfileConstantsMapping;	// IMP=0x0060000000115bbc
+ (id)CNToABPersonInstantMessageConstantsMapping;	// IMP=0x0060000000115af9
+ (id)ABToCNPersonInstantMessageConstantsMapping;	// IMP=0x00600000001158c9
+ (id)CNToABPersonAddressConstantsMapping;	// IMP=0x0060000000115806
+ (id)ABToCNPersonAddressConstantsMapping;	// IMP=0x0060000000115646
+ (id)CNToABPersonSortOrderingConstantsMapping;	// IMP=0x0060000000115562
+ (id)ABToCNContactSortOrderConstantsMapping;	// IMP=0x0060000000115431
+ (id)CNToABCompositeNameFormatConstantsMapping;	// IMP=0x006000000011534d
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;	// IMP=0x0060000000115232
+ (id)CNToABPersonKindConstantsMapping;	// IMP=0x006000000011514b
+ (id)ABToCNPersonKindConstantsMapping;	// IMP=0x006000000011502a
- (void).cxx_destruct;	// IMP=0x0000000000116c67
@property(retain, nonatomic) id defaultConstant; // @synthesize defaultConstant=_defaultConstant;
@property(retain, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (id)mappedConstant:(id)arg1;	// IMP=0x0000000000116b52
- (id)invertedMapping;	// IMP=0x0000000000116917
- (id)initWithMapping:(id)arg1;	// IMP=0x00000000001168a4

@end

