//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, WFDialogAttribution, WFWorkflowRunningContext;

@interface WFQueuedStatusPresentation : NSObject
{
    _Bool _completed;	// 8 = 0x8
    WFWorkflowRunningContext *_context;	// 16 = 0x10
    WFDialogAttribution *_attribution;	// 24 = 0x18
    NSProgress *_progress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000002580
@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) WFDialogAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) WFWorkflowRunningContext *context; // @synthesize context=_context;
- (id)initWithRunningContext:(id)arg1 attribution:(id)arg2 progress:(id)arg3 completed:(_Bool)arg4;	// IMP=0x0010000000002486

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

