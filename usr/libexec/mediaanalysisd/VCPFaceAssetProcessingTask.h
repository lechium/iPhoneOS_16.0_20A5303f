//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VCPFaceAssetProcessingTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_assets;	// 24 = 0x18
}

+ (id)taskWithAssets:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x004000000007f15e
- (void).cxx_destruct;	// IMP=0x002000000007f7c8
- (int)run;	// IMP=0x001000000007f62f
- (int)main;	// IMP=0x001000000007f216
- (id)initWithAssets:(id)arg1 andProgressHandler:(CDUnknownBlockType)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007ef1e

@end

