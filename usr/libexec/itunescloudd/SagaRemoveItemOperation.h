//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SagaRemoveItemOperation
{
    NSArray *_itemSagaIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000001035a2
- (void).cxx_destruct;	// IMP=0x0020000000103258
- (void)main;	// IMP=0x0010000000102e17
- (_Bool)isPersistent;	// IMP=0x0010000000102e0f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000102d75
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000102c09
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 itemSagaIDs:(id)arg3;	// IMP=0x0010000000102b7b
- (id)initWithClientIdentity:(id)arg1 ItemSagaIDs:(id)arg2;	// IMP=0x0010000000102af7

@end
