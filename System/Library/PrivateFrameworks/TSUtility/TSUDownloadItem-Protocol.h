//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSUtility/NSObject-Protocol.h>

@class NSError, NSString, NSURL, NSURLSessionTask, TSUDownloadManager;

@protocol TSUDownloadItem <NSObject>
+ (void)downloadManager:(TSUDownloadManager *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
+ (void)downloadManager:(TSUDownloadManager *)arg1 task:(NSURLSessionTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;
+ (_Bool)canHandleDownloadTask:(NSURLSessionTask *)arg1;
@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;
@property(readonly, nonatomic) NSURL *downloadURL;
@property(readonly, nonatomic) NSString *downloadTaskDescription;

@optional
@property(readonly, nonatomic) _Bool needsDownload;
@end

