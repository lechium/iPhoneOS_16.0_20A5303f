//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRKShareTargetBrowser, NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface SDClassroomBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    NSMutableDictionary *_personIDToShareTarget;	// 16 = 0x10
    CRKShareTargetBrowser *_browser;	// 24 = 0x18
    NSOperationQueue *_operationsQueue;	// 32 = 0x20
    NSArray *_nodes;	// 40 = 0x28
    NSString *_clientBundleID;	// 48 = 0x30
}

+ (id)sharedBrowser;	// IMP=0x0020000000022907
- (void).cxx_destruct;	// IMP=0x002000000002520d
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)shareTargetBrowser:(id)arg1 didRemoveTargets:(id)arg2;	// IMP=0x0010000000024c4e
- (void)shareTargetBrowser:(id)arg1 didFindTargets:(id)arg2;	// IMP=0x0010000000024830
- (void)shareTargetBrowser:(id)arg1 didInterruptWithError:(id)arg2;	// IMP=0x00100000000247b4
- (struct __SFNode *)convertShareTargetToNode:(id)arg1;	// IMP=0x0010000000024500
- (void)operationEnded:(id)arg1;	// IMP=0x0010000000024044
- (void)operationMadeProgress:(id)arg1;	// IMP=0x0010000000023d0a
- (void)operationStarted:(id)arg1;	// IMP=0x0010000000023b36
- (id)operationNameForPersonID:(id)arg1 sessionID:(id)arg2 clientBundleID:(id)arg3;	// IMP=0x0010000000023a48
- (id)convertAdvancedDescriptionToSimple:(id)arg1;	// IMP=0x0010000000023967
- (void)cancelSendingItemsToPersonWithID:(id)arg1 sessionID:(id)arg2 clientBundleID:(id)arg3;	// IMP=0x0010000000023763
- (void)startSendingItems:(id)arg1 withProperties:(id)arg2 toPersonWithID:(id)arg3 clientBundleID:(id)arg4 airDropClientDelegate:(id)arg5;	// IMP=0x0010000000022bce
- (void)browserInvalidated;	// IMP=0x0010000000022b72
- (void)potentiallyInvalidate;	// IMP=0x0010000000022adc
- (void)transferConcluded;	// IMP=0x0010000000022aa0
- (void)stop;	// IMP=0x0010000000022a7e
- (void)start;	// IMP=0x00100000000229fd
- (id)init;	// IMP=0x001000000002295c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

