//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADPoint3D, OADVector3D;

__attribute__((visibility("hidden")))
@interface OADBackdrop : NSObject
{
    OADPoint3D *mAnchor;	// 8 = 0x8
    OADVector3D *mNormal;	// 16 = 0x10
    OADVector3D *mUp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000031e940
- (id)description;	// IMP=0x000000000031e902
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031e76c
- (unsigned long long)hash;	// IMP=0x000000000031e712
- (void)setUp:(id)arg1;	// IMP=0x000000000031e701
- (id)up;	// IMP=0x000000000031e6f3
- (void)setNormal:(id)arg1;	// IMP=0x000000000031e6e2
- (id)normal;	// IMP=0x000000000031e6d4
- (void)setAnchor:(id)arg1;	// IMP=0x000000000031e6c3
- (id)anchor;	// IMP=0x000000000031e6b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031e5f1
- (id)init;	// IMP=0x000000000031e582

@end

