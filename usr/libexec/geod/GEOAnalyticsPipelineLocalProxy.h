//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface GEOAnalyticsPipelineLocalProxy : NSObject
{
}

- (void)processMapsDeletionWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000001c02e
- (void)reportRRLogMessage:(id)arg1;	// IMP=0x001000000001bfb8
- (void)runAggregationTasks;	// IMP=0x001000000001bf74
- (void)showEvalDataWithVisitorBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001befe
- (void)flushEvalData;	// IMP=0x001000000001beba
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x001000000001be67
- (void)updateSharedStateType:(int)arg1 state:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x001000000001bd6c
- (void)reportDailySettings:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x001000000001bcd3
- (MISSING_TYPE *)reportCuratedCollectionActionType:collectionId:completion:completionQueue: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001bc37
- (void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(CDUnknownBlockType)arg5 completionQueue:(id)arg6;	// IMP=0x001000000001bb43
- (void)reportLogMsg:(id)arg1 uploadBatchId:(unsigned long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001ba97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
