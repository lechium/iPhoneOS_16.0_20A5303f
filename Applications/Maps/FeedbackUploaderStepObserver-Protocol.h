//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEORPFeedbackRequest, GEORPFeedbackResponse, NSArray, NSError;

@protocol FeedbackUploaderStepObserver <NSObject>
- (void)finishedCorrectionsUploadWithResponse:(GEORPFeedbackResponse *)arg1 request:(GEORPFeedbackRequest *)arg2 error:(NSError *)arg3;
- (void)finishedUploadingImagesWithImageUpdate:(NSArray *)arg1 correctionsRequest:(GEORPFeedbackRequest *)arg2 completion:(void (^)(GEORPFeedbackRequest *))arg3;
@end

