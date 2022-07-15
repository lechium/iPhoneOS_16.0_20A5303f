//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPObjectPool;

@interface VCPMADVisualSearchLibraryProcessingTask
{
    VCPObjectPool *_servicePool;	// 8 = 0x8
}

+ (id)fetchPropertySets;	// IMP=0x0020000000058d28
+ (unsigned long long)taskID;	// IMP=0x0010000000058d1d
+ (id)name;	// IMP=0x0010000000058d10
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000058c5e
- (void).cxx_destruct;	// IMP=0x0020000000058e51
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058e27
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x0010000000058e12
- (void)dealloc;	// IMP=0x0010000000058da0
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000058bd1

@end
