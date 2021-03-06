//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APContext, APContextWrapper, APIDAccount, NSArray;

@interface APManagedContext
{
    APIDAccount *_idAccount;	// 8 = 0x8
    APContextWrapper *_contextWrapper;	// 16 = 0x10
    NSArray *_contentDataItems;	// 24 = 0x18
}

+ (id)findManagedContextByFingerprint:(id)arg1;	// IMP=0x00400000000de921
+ (id)createManagedContextWithContext:(id)arg1 idAccount:(id)arg2;	// IMP=0x00100000000de0d8
+ (id)kind;	// IMP=0x00100000000ddaab
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000dd569
- (void).cxx_destruct;	// IMP=0x00100000000def03
@property(retain, nonatomic) NSArray *contentDataItems; // @synthesize contentDataItems=_contentDataItems;
@property(retain, nonatomic) APContextWrapper *contextWrapper; // @synthesize contextWrapper=_contextWrapper;
- (id)toJSONObject;	// IMP=0x00100000000deba4
@property(retain, nonatomic) APIDAccount *idAccount;
- (id)managedContentDataEnumerator;	// IMP=0x00100000000dea63
@property(readonly, nonatomic) APContext *context;
- (id)addContentData:(id)arg1;	// IMP=0x00100000000de444
- (long long)garbageCollect;	// IMP=0x00100000000ddedc
- (_Bool)removeManagedContentDataForId:(id)arg1;	// IMP=0x00100000000ddc43
- (void)setContentData:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000000ddb71
- (id)contentDataItemForIdentifier:(id)arg1;	// IMP=0x00100000000ddad1
- (id)managedContentDataForId:(id)arg1;	// IMP=0x00100000000ddabf
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000dda4e
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000dd66d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000dd571
- (id)addContentDataOnly:(id)arg1;	// IMP=0x00100000000e6b24

@end

