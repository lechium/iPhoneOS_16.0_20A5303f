//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactKeyVector, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAggregateKeyDescriptor : NSObject
{
    NSArray *_keyDescriptors;	// 8 = 0x8
    NSString *_privateDescription;	// 16 = 0x10
    CNContactKeyVector *_unauthorizedKeys;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000e8956
+ (id)keyDescriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;	// IMP=0x00100000000e883d
- (void).cxx_destruct;	// IMP=0x00000000000e98cf
@property(retain, nonatomic) CNContactKeyVector *unauthorizedKeys; // @synthesize unauthorizedKeys=_unauthorizedKeys;
@property(copy, nonatomic) NSString *privateDescription; // @synthesize privateDescription=_privateDescription;
@property(copy, nonatomic) NSArray *keyDescriptors; // @synthesize keyDescriptors=_keyDescriptors;
- (void)_cn_setUnauthorizedKeys:(id)arg1;	// IMP=0x00000000000e9870
- (id)_cn_unauthorizedKeys;	// IMP=0x00000000000e985e
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e970d
- (id)_cn_ignorableKeys;	// IMP=0x00000000000e96f4
- (id)_cn_optionalKeys;	// IMP=0x00000000000e9531
- (id)_cn_requiredKeys;	// IMP=0x00000000000e936e
- (id)_cn_recursiveDescriptionWithPrefix:(id)arg1;	// IMP=0x00000000000e9064
- (id)_recursiveDescription;	// IMP=0x00000000000e904b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e9040
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e8b07
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e8a99
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e895e
- (id)initWithKeyDescriptors:(id)arg1 description:(id)arg2;	// IMP=0x00000000000e88a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
