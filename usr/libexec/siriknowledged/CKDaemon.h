//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_concurrentQueue;	// 16 = 0x10
    NSMutableDictionary *_cachedHandlers;	// 24 = 0x18
}

+ (id)sharedDaemon;	// IMP=0x0020000000009ade
- (void).cxx_destruct;	// IMP=0x0020000000006e12
@property(retain, nonatomic) NSMutableDictionary *cachedHandlers; // @synthesize cachedHandlers=_cachedHandlers;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006d81
- (void)dropLinksBetweenSubject:(id)arg1 andObject:(id)arg2 inStoreWithIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006c6a
- (void)dropLinksWithLabel:(id)arg1 fromSubject:(id)arg2 inStoreWithIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006b53
- (void)dropLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 inStoreWithIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000006a09
- (void)decreaseWeightForLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 inStoreWithIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000068bf
- (void)increaseWeightForLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 inStoreWithIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000006775
- (void)setWeightForLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 toValue:(long long)arg4 inStoreWithIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000661e
- (void)removeAllValuesFromSynchedStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000660c
- (void)removeAllValuesFromStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006555
- (void)removeValuesMatchingCondition:(id)arg1 fromSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006543
- (void)removeValuesMatchingCondition:(id)arg1 fromStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000645c
- (void)removeValuesForKeys:(id)arg1 fromSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000644a
- (void)removeValuesForKeys:(id)arg1 fromStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006363
- (void)removeValueForKey:(id)arg1 fromSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006351
- (void)removeValueForKey:(id)arg1 fromStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000626a
- (void)recordEventWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 toStoreWithIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000005f67
- (void)saveKeysAndValues:(id)arg1 toSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005f55
- (void)saveKeysAndValues:(id)arg1 toStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005e71
- (void)triplesComponentsMatching:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005d8a
- (void)keysAndValuesForKeysMatchingCondition:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005ca3
- (void)keysAndValuesInStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005bec
- (void)valuesForKeysMatchingCondition:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005b05
- (void)valuesForKeys:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005980
- (void)valuesInStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000058c9
- (void)valueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000057e2
- (void)keysMatchingCondition:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000056fb
- (void)keysInStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005644
- (id)init;	// IMP=0x0010000000005535

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
