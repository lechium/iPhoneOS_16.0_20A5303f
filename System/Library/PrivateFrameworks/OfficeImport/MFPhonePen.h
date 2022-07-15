//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MFPhonePen
{
    float m_PixelSize;	// 32 = 0x20
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4 LPToDPTransform:(struct CGAffineTransform)arg5;	// IMP=0x00600000000f579c
- (void)strokePath:(id)arg1 in_path:(id)arg2;	// IMP=0x000000000036f0de
- (void)applyLineCapStyleToPath:(id)arg1;	// IMP=0x00000000000f7cad
- (void)applyLineJoinStyleToPath:(id)arg1 in_path:(id)arg2;	// IMP=0x000000000036efda
- (void)applyDashedLinesToPath:(id)arg1;	// IMP=0x00000000000f7bb0
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;	// IMP=0x00000000000f589e

@end
