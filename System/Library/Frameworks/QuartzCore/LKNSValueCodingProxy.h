//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LKNSValueCodingProxy
{
    int _kind;	// 8 = 0x8
    union {
        struct CGPoint point;
        struct CGSize size;
        struct CGRect rect;
        struct CATransform3D transform;
        struct CAPoint3D point3d;
        struct CACornerRadii corner_radii;
        struct CAColorMatrix color_matrix;
        struct CGAffineTransform affine_transform;
    } _u;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000022214
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002186c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000210fc
- (id)decodedObject;	// IMP=0x0000000000020f2e
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000020a1d

@end

