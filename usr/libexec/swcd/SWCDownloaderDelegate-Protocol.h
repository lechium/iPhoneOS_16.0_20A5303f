//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSError, SWCDownloader, _SWCDomain;

@protocol SWCDownloaderDelegate <NSObject>

@optional
- (void)downloader:(SWCDownloader *)arg1 failedToDownloadAASAFileFromDomain:(_SWCDomain *)arg2 error:(NSError *)arg3;
- (void)downloader:(SWCDownloader *)arg1 didDownloadAASAFileContainingJSONObject:(id)arg2 fromDomain:(_SWCDomain *)arg3 downloadRoute:(unsigned char)arg4;
- (void)downloader:(SWCDownloader *)arg1 willDownloadAASAFileFromDomain:(_SWCDomain *)arg2;
@end

