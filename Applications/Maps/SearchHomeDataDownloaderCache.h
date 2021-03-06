//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapsSearchHomeResult, SearchHomeDataDownloaderCacheKey;

@interface SearchHomeDataDownloaderCache : NSObject
{
    SearchHomeDataDownloaderCacheKey *_cachedKey;	// 8 = 0x8
    GEOMapsSearchHomeResult *_cachedResults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000114f53
@property(retain, nonatomic) GEOMapsSearchHomeResult *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain, nonatomic) SearchHomeDataDownloaderCacheKey *cachedKey; // @synthesize cachedKey=_cachedKey;
- (_Bool)keyIsValid:(id)arg1;	// IMP=0x0010000000114d56
- (void)replaceCachedObject:(id)arg1 withKey:(id)arg2;	// IMP=0x0010000000114cff
- (id)objectForKey:(id)arg1;	// IMP=0x0010000000114c6e

@end

