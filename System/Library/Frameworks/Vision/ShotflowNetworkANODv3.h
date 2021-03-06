//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv3
{
}

+ (_Bool)inputBGR;	// IMP=0x0080000000273362
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x008000000027334d
+ (float)inputScale;	// IMP=0x008000000027333f
+ (_Bool)hasPose;	// IMP=0x0080000000273337
+ (const void *)importantClasses;	// IMP=0x008000000027330b
+ (unsigned long long)mumberPosClasses;	// IMP=0x0080000000273300
+ (id)inputLayerName;	// IMP=0x00800000002732f3
+ (id)modelName;	// IMP=0x00800000002732e6
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x0000000000272de8
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000272c04
- (void)initializeBuffers;	// IMP=0x000000000027200d
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;	// IMP=0x0000000000271f41

@end

