//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNPersonSegmentationGeneratorLearnedMattingTiled
{
}

+ (_Bool)supportsTiling;	// IMP=0x008000000017a693
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x008000000017a686
- (struct BufferSize)calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize)arg1 networkInputMaskSize:(struct BufferSize)arg2 networkOutputMaskSize:(struct BufferSize)arg3 rotated:(_Bool)arg4;	// IMP=0x000000000017a6ab
- (struct BufferSize)outputMaskSize;	// IMP=0x000000000017a69b

@end
