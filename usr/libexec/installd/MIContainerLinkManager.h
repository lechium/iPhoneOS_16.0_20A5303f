//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface MIContainerLinkManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSMutableDictionary *_parentToLinkedChildrenMap;	// 16 = 0x10
    NSSet *_linkedParentBundleIDs;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000000021b1
- (void).cxx_destruct;	// IMP=0x0020000000004617
@property(retain, nonatomic) NSSet *linkedParentBundleIDs; // @synthesize linkedParentBundleIDs=_linkedParentBundleIDs;
@property(retain, nonatomic) NSMutableDictionary *parentToLinkedChildrenMap; // @synthesize parentToLinkedChildrenMap=_parentToLinkedChildrenMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (_Bool)removeParent:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000043de
- (_Bool)_onQueue_removeParent:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000041e2
- (id)childrenForParentBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003fa9
- (id)_onQueue_childrenForParentBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000003ce2
- (_Bool)getLinkedParent:(id *)arg1 forChild:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000003b3a
- (_Bool)unlinkChild:(id)arg1 fromParent:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000003901
- (_Bool)linkChild:(id)arg1 toParent:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000036cb
- (_Bool)preflightLinkingChild:(id)arg1 toParent:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000003416
- (_Bool)_onQueue_updateLinkForParent:(id)arg1 toChild:(id)arg2 operationType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0010000000002c8c
- (_Bool)_onQueue_isValidLinkForParent:(id)arg1 toChild:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000002ac7
- (_Bool)_onQueue_setLinkedParentBundleIDList:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000284d
- (id)_onQueue_linkedParentBundleIDs:(id *)arg1;	// IMP=0x001000000000223e
- (id)init;	// IMP=0x0010000000001fb7
- (void)_onQueue_migratePlaygroundsBundleMetadata;	// IMP=0x00100000000017bc

@end

