//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentStore, NSString;

@interface RDPersistentStoreLookupForREMCDObject : NSObject
{
    NSPersistentStore *_persistentStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009473a
@property(nonatomic) __weak NSPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
- (id)storeForAccountIdentifier:(id)arg1;	// IMP=0x0010000000094701
- (id)init:(id)arg1;	// IMP=0x0010000000094646

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
