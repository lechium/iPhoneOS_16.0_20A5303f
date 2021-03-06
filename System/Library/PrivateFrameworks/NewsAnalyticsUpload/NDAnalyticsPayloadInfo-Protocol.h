//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsAnalyticsUpload/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@protocol NDAnalyticsPayloadInfo <NSCopying>
@property(readonly, copy, nonatomic) NSDictionary *droppedEntriesByReason;
@property(readonly, copy, nonatomic) NSArray *entriesToUpload;
@property(readonly, copy, nonatomic) NSDictionary *valuesByHTTPHeaderField;
@property(readonly, copy, nonatomic) NSURL *endpointURL;
@end

