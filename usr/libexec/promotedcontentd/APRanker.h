//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APRanker : NSObject
{
}

+ (void)rankRepresentations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00400000000e4223
+ (id)_processRerankedRepresentations:(id)arg1 originalContentData:(id)arg2 withError:(id)arg3;	// IMP=0x00100000000e3b56
+ (void)_rerankOnDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e37a3
+ (void)_sortByRank:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e373d
+ (id)findValidObjectsInContentDataItems:(id)arg1;	// IMP=0x00100000000e369a
+ (id)sortByRank:(id)arg1;	// IMP=0x00100000000e356e

@end

