//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADBevel : NSObject
{
    int mType;	// 8 = 0x8
    float mWidth;	// 12 = 0xc
    float mHeight;	// 16 = 0x10
}

- (id)description;	// IMP=0x000000000031f1e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031f0da
- (unsigned long long)hash;	// IMP=0x000000000031f083
- (void)setHeight:(float)arg1;	// IMP=0x00000000001e8766
- (float)height;	// IMP=0x000000000031f078
- (void)setWidth:(float)arg1;	// IMP=0x00000000001e875b
- (float)width;	// IMP=0x000000000031f06d
- (void)setType:(int)arg1;	// IMP=0x000000000021e1a9
- (int)type;	// IMP=0x000000000031f064
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031f006
- (id)init;	// IMP=0x00000000001e018d

@end

