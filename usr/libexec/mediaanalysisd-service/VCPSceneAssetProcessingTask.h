//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VCPSceneAssetProcessingTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
}

+ (id)taskWithAssets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00400000000bd12f
- (void).cxx_destruct;	// IMP=0x00200000000bd809
- (int)run;	// IMP=0x00100000000bd670
- (int)main;	// IMP=0x00100000000bd26b
- (void)dealloc;	// IMP=0x00100000000bd1e7
- (id)initWithAssets:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bcf60

@end
