//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol APPersistentCachedStoreProtocol;

@interface APCacheableObject
{
    id <APPersistentCachedStoreProtocol> _persistentStore;	// 8 = 0x8
}

+ (id)findCacheableObjectForId:(id)arg1 inPersistentStore:(id)arg2;	// IMP=0x00200000000d74b5
+ (id)kind;	// IMP=0x00100000000d718c
+ (id)fileNameForIdentifier:(id)arg1;	// IMP=0x00100000000d70ad
+ (id)associatedObjectFileNameForIdentifier:(id)arg1;	// IMP=0x00100000000d7091
+ (id)masterObjectFileNameForIdentifier:(id)arg1;	// IMP=0x00100000000d7075
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d706d
- (void).cxx_destruct;	// IMP=0x00200000000d761e
@property(nonatomic) __weak id <APPersistentCachedStoreProtocol> persistentStore; // @synthesize persistentStore=_persistentStore;
- (id)initWithIdentifier:(id)arg1 inPersistentStore:(id)arg2;	// IMP=0x00100000000d7285
- (id)initInPersistentStore:(id)arg1;	// IMP=0x00100000000d7196
- (id)fileName;	// IMP=0x00100000000d7122

@end

