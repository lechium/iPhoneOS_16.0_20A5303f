//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CITile2Filter
{
    NSNumber *inputAcuteAngle;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0060000000148ffc
@property(retain, nonatomic) NSNumber *inputAcuteAngle; // @synthesize inputAcuteAngle;
- (id)outputImage;	// IMP=0x0000000000149810
- (id)_singlePixelImage;	// IMP=0x0000000000149755
- (struct vec2)_roiCenter;	// IMP=0x000000000014961c
- (double)_roiArea;	// IMP=0x00000000001495af
- (struct CGRect)_roiRect;	// IMP=0x0000000000149401

@end
