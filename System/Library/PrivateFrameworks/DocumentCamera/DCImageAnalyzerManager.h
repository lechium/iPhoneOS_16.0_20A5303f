//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, VKCImageAnalyzer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DCImageAnalyzerManager : NSObject
{
    VKCImageAnalyzer *_imageAnalyzer;	// 8 = 0x8
    NSCache *_cachedAnalyses;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_operationQueue;	// 24 = 0x18
}

+ (_Bool)isImageAnalysisEnabled;	// IMP=0x006000000001e4f9
+ (id)sharedInstance;	// IMP=0x006000000001e4a4
- (void).cxx_destruct;	// IMP=0x000000000001ed14
- (void)analysisForImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e646
- (void)cleanup;	// IMP=0x000000000001e511
- (id)init;	// IMP=0x000000000001e342

@end

