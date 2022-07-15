//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileLayoutInfo.h"

__attribute__((visibility("hidden")))
@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo
{
    struct UIEdgeInsets _cropInsets;	// 8 = 0x8
}

@property(nonatomic, setter=_setCropInsets:) struct UIEdgeInsets cropInsets; // @synthesize cropInsets=_cropInsets;
- (id)description;	// IMP=0x0000000000137060
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3;	// IMP=0x0000000000136f2f
- (id)clone;	// IMP=0x0000000000136d25
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;	// IMP=0x0000000000136c1c
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 cropInsets:(struct UIEdgeInsets)arg4 alpha:(double)arg5 cornerRadius:(double)arg6 cornerCurve:(id)arg7 cornerMask:(unsigned long long)arg8 transform:(struct CGAffineTransform)arg9 zPosition:(double)arg10 contentsRect:(struct CGRect)arg11 coordinateSystem:(id)arg12;	// IMP=0x0000000000136b9b
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(struct CGRect)arg7 coordinateSystem:(id)arg8;	// IMP=0x0000000000136b29

@end
