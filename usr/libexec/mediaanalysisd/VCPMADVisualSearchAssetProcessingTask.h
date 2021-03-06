//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPObjectPool;

@interface VCPMADVisualSearchAssetProcessingTask
{
    VCPObjectPool *_servicePool;	// 8 = 0x8
}

+ (id)fetchPropertySets;	// IMP=0x0020000000007b9c
+ (unsigned long long)taskID;	// IMP=0x0010000000007b91
+ (id)name;	// IMP=0x0010000000007b84
- (void).cxx_destruct;	// IMP=0x0020000000007d4c
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007d22
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x0010000000007d0d
- (void)dealloc;	// IMP=0x0010000000007c9b
- (id)initWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000007c06

@end

