//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPObjectPool;

@interface MADPhotosVisualSearchTaskProvider
{
    VCPObjectPool *_servicePool;	// 8 = 0x8
}

+ (unsigned long long)taskID;	// IMP=0x0040000000002fd0
+ (id)name;	// IMP=0x0010000000002fc3
- (void).cxx_destruct;	// IMP=0x0020000000003092
- (id)assetTaskWithAnalysisDatabase:(id)arg1;	// IMP=0x0010000000003068
- (id)initWithPhotoLibrary:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002fdb

@end
