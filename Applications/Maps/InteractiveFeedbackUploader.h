//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeedbackSubmissionTicket, NSString, NSURLSession;
@protocol FeedbackUploaderStepObserver;

@interface InteractiveFeedbackUploader : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
    FeedbackSubmissionTicket *_correctionsTicket;	// 16 = 0x10
    id <FeedbackUploaderStepObserver> _uploadStepObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000920b2b
@property(nonatomic) __weak id <FeedbackUploaderStepObserver> uploadStepObserver; // @synthesize uploadStepObserver=_uploadStepObserver;
- (void)_submitCorrectionsRequest:(id)arg1 traits:(id)arg2 parentProgress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000092064c
- (void)submitPhotosWithMetadata:(id)arg1 withImageUploadResult:(id)arg2 withCorrectionsRequest:(id)arg3 traits:(id)arg4 parentProgress:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000091f58f
- (void)submitCorrectionsRequest:(id)arg1 traits:(id)arg2 parentProgress:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000091f57d
- (id)initWithUploadStepObserver:(id)arg1;	// IMP=0x001000000091f4b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

