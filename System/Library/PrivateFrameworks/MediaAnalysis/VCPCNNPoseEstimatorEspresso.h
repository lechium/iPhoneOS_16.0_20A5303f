//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimatorEspresso
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
}

+ (id)sharedModel:(id)arg1;	// IMP=0x006000000005ce3b
- (void).cxx_destruct;	// IMP=0x000000000005d251
- (void)dealloc;	// IMP=0x000000000005d20b
- (int)computePoseScore:(float *)arg1;	// IMP=0x000000000005cf72
- (float *)getInputBuffer;	// IMP=0x000000000005ce2a
- (id)init;	// IMP=0x000000000005cc7f

@end

