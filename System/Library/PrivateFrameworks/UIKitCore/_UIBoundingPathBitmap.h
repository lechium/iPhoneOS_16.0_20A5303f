//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBoundingPathBitmap : NSObject
{
    struct _UIBoundingPathBitmapData _bitmapData;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008d9823
@property(readonly, nonatomic) struct _UIBoundingPathBitmapData bitmapData; // @synthesize bitmapData=_bitmapData;
- (id)debugQuickLookObject;	// IMP=0x00000000008da0cc
- (id)_imageRepresentation;	// IMP=0x00000000008da096
- (id)description;	// IMP=0x00000000008d9ff8
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect)arg1 cornerRadii:(struct _UIIntegralCornerRadii)arg2;	// IMP=0x00000000008d9ec7
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect)arg1;	// IMP=0x00000000008d9e7e
- (void)dealloc;	// IMP=0x00000000008d9e44
- (id)initWithBitmapData:(struct _UIBoundingPathBitmapData)arg1;	// IMP=0x00000000008d9ded
- (id)initWithSize:(struct _UIIntegralSize)arg1 containsPoint:(CDUnknownBlockType)arg2;	// IMP=0x00000000008d9d3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008d9b7e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008d982b

@end
