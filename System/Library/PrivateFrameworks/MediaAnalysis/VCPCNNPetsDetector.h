//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNPetsDetector : NSObject
{
}

+ (id)detector:(int)arg1;	// IMP=0x00800000000504f0
- (int)petsDetection:(struct __CVBuffer *)arg1 petsRegions:(id)arg2 petsFaceRegions:(id)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x00000000000514d9
- (int)postProcBoxes:(id)arg1 maxNumRegions:(int)arg2;	// IMP=0x000000000005125c
- (int)generatePetsRegions:(float *)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 faceBoxes:(id)arg5 maxNumRegions:(int)arg6;	// IMP=0x0000000000050cac
- (void)nonMaxSuppression:(id)arg1;	// IMP=0x0000000000050a5f
- (int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050a54
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;	// IMP=0x0000000000050a4c
- (int)createModel:(int)arg1 srcWidth:(int)arg2;	// IMP=0x0000000000050a41
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;	// IMP=0x0000000000050969
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;	// IMP=0x000000000005055c

@end
