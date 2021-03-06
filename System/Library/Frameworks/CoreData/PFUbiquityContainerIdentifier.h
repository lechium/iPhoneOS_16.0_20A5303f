//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerIdentifier : NSObject
{
    NSString *_storeName;	// 8 = 0x8
    NSString *_localPeerID;	// 16 = 0x10
    PFUbiquityLocation *_ubiquityRootLocation;	// 24 = 0x18
    NSString *_uuidString;	// 32 = 0x20
    PFUbiquityLocation *_uuidFileLocation;	// 40 = 0x28
    NSURL *_presentedItemURL;	// 48 = 0x30
    _Bool _usedExistingUUIDFile;	// 56 = 0x38
}

@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(readonly) NSOperationQueue *presentedItemOperationQueue;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000031e5c4
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000031dd8d
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;	// IMP=0x000000000031dd2a
- (id)init;	// IMP=0x000000000031dce3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

