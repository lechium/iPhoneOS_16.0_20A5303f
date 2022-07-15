//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VideoUtil : NSObject
{
}

+ (void)attachMetadata:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x008000000017be58
+ (struct CGSize)computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize)arg1 remoteExpectedAspectRatio:(struct CGSize)arg2 encodeWidth:(int)arg3 encodeHeight:(int)arg4;	// IMP=0x008000000017be4a
+ (unsigned int)videoCodecForPayload:(int)arg1;	// IMP=0x008000000017bdcc
+ (struct __CFString *)typeIdentifierForImageType:(int)arg1;	// IMP=0x008000000017bd50
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize)arg1 toSizeB:(struct CGSize)arg2;	// IMP=0x008000000017bd0a
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)arg1 width:(double)arg2 height:(double)arg3;	// IMP=0x008000000017bd02
+ (struct CGRect)adjustFaceBounds:(struct CGRect)arg1 fromOriginalBufferSize:(struct CGSize)arg2 toCroppedBufferSize:(struct CGSize)arg3;	// IMP=0x008000000017b9b0
+ (void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer *)arg1 originalWidth:(unsigned long long)arg2 originalHeight:(unsigned long long)arg3;	// IMP=0x008000000017b9aa
+ (long long)videoResolutionForWidth:(int)arg1 height:(int)arg2;	// IMP=0x008000000017b768
+ (struct CGSize)getBestCaptureSizeForEncodingSize:(struct CGSize)arg1;	// IMP=0x008000000017b762
+ (struct CGSize)sizeForVideoResolution:(long long)arg1;	// IMP=0x008000000017b6bb
+ (id)convertPixelBuffer:(struct __CVBuffer *)arg1 toImageType:(int)arg2 withAssetIdentifier:(id)arg3 cameraStatusBits:(unsigned char)arg4 allowTimeMetaData:(_Bool)arg5;	// IMP=0x008000000017b210

@end
