//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHAsset;

@interface VCPFaceProcessingChangeEntry : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    NSDictionary *_analysis;	// 16 = 0x10
}

+ (id)entryWithAsset:(id)arg1 andAnalysis:(id)arg2;	// IMP=0x004000000006bf9b
- (void).cxx_destruct;	// IMP=0x002000000006d238
- (void)publish:(id *)arg1 scheduleTorsoOnlyPHFace:(_Bool)arg2;	// IMP=0x001000000006d226
- (void);	// IMP=0x001000000006c02f
- (id)initWithAsset:(id)arg1 andAnalysis:(id)arg2;	// IMP=0x001000000006bee4
- (id)init;	// IMP=0x001000000006bed6

@end

