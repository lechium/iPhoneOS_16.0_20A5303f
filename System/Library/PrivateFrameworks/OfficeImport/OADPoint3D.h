//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADPoint3D : NSObject
{
    float mX;	// 8 = 0x8
    float mY;	// 12 = 0xc
    float mZ;	// 16 = 0x10
}

- (id)description;	// IMP=0x0000000000308d74
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000308c59
- (unsigned long long)hash;	// IMP=0x0000000000308be5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000308b91
- (float)z;	// IMP=0x0000000000308b86
- (float)y;	// IMP=0x0000000000308b7b
- (float)x;	// IMP=0x0000000000308b70
- (id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3;	// IMP=0x0000000000308b0f

@end
