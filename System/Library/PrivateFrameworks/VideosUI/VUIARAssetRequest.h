//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSessionDownloadTask;

__attribute__((visibility("hidden")))
@interface VUIARAssetRequest : NSObject
{
    _Bool _isDownloading;	// 8 = 0x8
    NSURL *_remoteURL;	// 16 = 0x10
    NSURL *_shareURL;	// 24 = 0x18
    NSString *_fileName;	// 32 = 0x20
    NSURLSessionDownloadTask *_task;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
    NSString *_cacheKey;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000014f376
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
- (id)_prefixForString:(id)arg1;	// IMP=0x000000000014f1e4
- (void)recordLog:(id)arg1;	// IMP=0x000000000014f05c
- (id)cacheDownloadedFileFromLocation:(id)arg1;	// IMP=0x000000000014ee7b
- (id)cachePath;	// IMP=0x000000000014ee0a
- (void)cancelDownload;	// IMP=0x000000000014edbb
- (void)startDownloadWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014ed13
- (id)initWithRemoteURL:(id)arg1 shareURL:(id)arg2 fileName:(id)arg3;	// IMP=0x000000000014eb94

@end

