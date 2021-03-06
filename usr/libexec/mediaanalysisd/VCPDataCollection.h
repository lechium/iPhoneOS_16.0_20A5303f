//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPDataCollection : NSObject
{
}

+ (void)reportMetric:(const struct __CFString *)arg1 withValue:(unsigned long long)arg2;	// IMP=0x004000000002e568
+ (unsigned long long)truncate:(unsigned long long)arg1;	// IMP=0x001000000002e4de
+ (id)sharedDataCollection;	// IMP=0x001000000002e489
- (void)reportBackgroundAnalysisProgressMetrics:(id)arg1;	// IMP=0x004000000002fce2
- (void)reportDailyBackgroundAnalysisMetrics:(id)arg1 withNormalizeRatio:(double)arg2;	// IMP=0x001000000002ee66
- (void)reportDatabaseCorruption;	// IMP=0x001000000002ee41
- (void)reportDatabaseSizeBytes:(unsigned long long)arg1;	// IMP=0x001000000002ee1e
- (void)reportBlacklistedAssetCount:(unsigned long long)arg1;	// IMP=0x001000000002edfb
- (void)reportLivePhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000002e94d
- (void)reportMovieStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000002e932
- (void)reportPhotoStatistics:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x001000000002e917
- (void)reportStatistics:(id)arg1 forMediaType:(long long)arg2 forPhotoLibrary:(id)arg3;	// IMP=0x001000000002e56e

@end

