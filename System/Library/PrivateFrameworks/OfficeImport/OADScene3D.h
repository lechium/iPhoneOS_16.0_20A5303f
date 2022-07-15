//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADBackdrop, OADCamera, OADLightRig;

__attribute__((visibility("hidden")))
@interface OADScene3D : NSObject
{
    OADCamera *mCamera;	// 8 = 0x8
    OADLightRig *mLightRig;	// 16 = 0x10
    OADBackdrop *mBackdrop;	// 24 = 0x18
}

+ (id)nullScene3D;	// IMP=0x001000000001f454
- (void).cxx_destruct;	// IMP=0x000000000031eca0
- (id)description;	// IMP=0x000000000031ec62
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031eacc
- (unsigned long long)hash;	// IMP=0x000000000031ea72
- (void)setBackdrop:(id)arg1;	// IMP=0x000000000031ea61
- (id)backdrop;	// IMP=0x000000000031ea53
- (void)setLightRig:(id)arg1;	// IMP=0x00000000001e0003
- (id)lightRig;	// IMP=0x000000000031ea45
- (void)setCamera:(id)arg1;	// IMP=0x00000000001dfe3c
- (id)camera;	// IMP=0x000000000031ea37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031e973
- (id)init;	// IMP=0x000000000001f491

@end
