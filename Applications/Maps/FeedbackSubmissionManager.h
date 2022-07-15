//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BackgroundFeedbackUploader, FeedbackSubmissionPostActionManager, GEOObserverHashTable, InteractiveFeedbackUploader, NSProgress, NSString;

@interface FeedbackSubmissionManager : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    InteractiveFeedbackUploader *_interactiveFeedbackUploader;	// 16 = 0x10
    BackgroundFeedbackUploader *_backgroundFeedbackUploader;	// 24 = 0x18
    FeedbackSubmissionPostActionManager *_feedbackSubmissionPostActionManager;	// 32 = 0x20
    NSProgress *_currentProgress;	// 40 = 0x28
}

+ (_Bool)canHandleSessionIdentifier:(id)arg1;	// IMP=0x0020000000625302
+ (_Bool)isStatusCodeSuccess:(long long)arg1;	// IMP=0x00100000006252ee
+ (id)badFeedbackResponseErrorWithCode:(long long)arg1;	// IMP=0x00100000006252c8
+ (id)failedToEnqueueSubmissionError;	// IMP=0x001000000062529e
- (void).cxx_destruct;	// IMP=0x0020000000625c63
@property(readonly, nonatomic) NSProgress *currentProgress; // @synthesize currentProgress=_currentProgress;
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000625be7
- (void)addObserver:(id)arg1;	// IMP=0x0010000000625b75
- (id)observers;	// IMP=0x0010000000625b04
- (void)_recordRAPSubmissionID:(id)arg1;	// IMP=0x001000000062583b
- (void)finishedCorrectionsUploadWithResponse:(id)arg1 request:(id)arg2 error:(id)arg3;	// IMP=0x0010000000625448
- (void)finishedUploadingImagesWithImageUpdate:(id)arg1 correctionsRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000062531e
- (id)_feedbackUploaderForUploadPolicy:(long long)arg1;	// IMP=0x0010000000625270
- (void)submitOrEnqueueFeedback:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 debugSettings:(id)arg4 uploadPolicy:(long long)arg5 feedbackObjectToUpdate:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000624ff6
- (void)submitOrEnqueueFeedback:(id)arg1 attachedImages:(id)arg2 userInfo:(id)arg3 traits:(id)arg4 debugSettings:(id)arg5 uploadPolicy:(long long)arg6 feedbackObjectToUpdate:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00100000006243b6
- (id)init;	// IMP=0x00100000006242a3
- (void)updateEventsForBackgroundURLSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000062428d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
