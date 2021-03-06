//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RTCActivitySchedulerOptions, RTCSelfReporter;
@protocol OS_dispatch_queue, RTCDiskCacheDelegate;

@interface RTCDiskCache : NSObject
{
    RTCActivitySchedulerOptions *_options;	// 8 = 0x8
    RTCSelfReporter *_selfReporter;	// 16 = 0x10
    NSString *_rootPath;	// 24 = 0x18
    NSString *_oldestCacheFile;	// 32 = 0x20
    NSString *_newestCacheFile;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_stateQueue;	// 48 = 0x30
    id <RTCDiskCacheDelegate> _delegate;	// 56 = 0x38
}

@property(readonly) RTCActivitySchedulerOptions *options; // @synthesize options=_options;
@property(readonly) NSString *newestCacheFile; // @synthesize newestCacheFile=_newestCacheFile;
@property(readonly) NSString *oldestCacheFile; // @synthesize oldestCacheFile=_oldestCacheFile;
- (void)removeFromCacheDispatched:(id)arg1;	// IMP=0x0010000000003eab
- (id)copyFirstEvent;	// IMP=0x0010000000003d82
- (void)addEvent:(id)arg1;	// IMP=0x0010000000003983
- (id)getOldestEventDispatched;	// IMP=0x0010000000003225
- (_Bool)searchForCacheFileWithOrder:(int)arg1;	// IMP=0x0010000000003102
- (_Bool)searchForCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x0010000000002dc4
- (void)setDiskCacheRootPath:(id)arg1;	// IMP=0x0010000000002d7a
- (_Bool)isSizeORTimeLimitationExceededForFile:(id)arg1;	// IMP=0x0010000000002cb8
- (_Bool)isSizeORTimeLimitationExceededForFileDispatched:(id)arg1;	// IMP=0x0010000000002bb0
- (id)pruneFileIfExpired:(id)arg1;	// IMP=0x0010000000002a2c
- (id)pruneFileIfExpiredDispatched:(id)arg1;	// IMP=0x0010000000002909
- (void)deleteAllCacheFiles;	// IMP=0x0010000000002863
- (void)deleteCurrentNewestCacheFile;	// IMP=0x00100000000027fd
- (void)deleteCurrentOldestCacheFile;	// IMP=0x0010000000002770
- (void)deleteCurrentCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x0010000000002709
@property(readonly, nonatomic) NSString *cacheFileExtention;
@property(readonly, nonatomic) NSString *diskCacheRootPath;
- (void)writeInitialHeaderToFile:(id)arg1;	// IMP=0x0010000000002696
- (_Bool)secureWriteDataForHandle:(id)arg1 data:(id)arg2;	// IMP=0x001000000000265a
- (void)syncUp;	// IMP=0x001000000000263f
- (void)setSelfReporter:(id)arg1;	// IMP=0x0010000000002622
- (id)delegate;	// IMP=0x0010000000002614
- (void)dealloc;	// IMP=0x001000000000256c
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000000023d5

@end

