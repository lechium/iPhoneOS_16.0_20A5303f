//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetectorMPS
{
    VCPCNNModel *_model;	// 8 = 0x8
    VCPCNNData *_input;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ac66a
- (int)computeSmileScore:(float *)arg1;	// IMP=0x00000000001ac589
- (float *)getInputBuffer;	// IMP=0x00000000001ac56c
- (id)init;	// IMP=0x00000000001abdd0

@end
