//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PHPhotoLibrary, VCPFaceClusterer;

@interface MADPhotosFaceCropProcessingTask
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    VCPFaceClusterer *_faceClusterer;	// 16 = 0x10
    NSMutableArray *_faceCropEntries;	// 24 = 0x18
}

+ (id)taskWithPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2;	// IMP=0x004000000008a1cc
- (void).cxx_destruct;	// IMP=0x002000000008addf
- (void)process;	// IMP=0x001000000008ab91
- (void)_processEntries;	// IMP=0x001000000008a575
- (void)addFaceCrop:(id)arg1;	// IMP=0x001000000008a255
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2;	// IMP=0x001000000008a0f9

@end
