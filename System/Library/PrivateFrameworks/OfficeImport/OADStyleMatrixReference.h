//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject
{
    unsigned long long mMatrixIndex;	// 8 = 0x8
    OADColor *mColor;	// 16 = 0x10
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x001000000032372a
- (void).cxx_destruct;	// IMP=0x000000000032388d
- (id)description;	// IMP=0x0000000000323797
- (void)setColor:(id)arg1;	// IMP=0x000000000019502e
- (id)color;	// IMP=0x0000000000195b61
- (void)setMatrixIndex:(unsigned long long)arg1;	// IMP=0x0000000000195024
- (unsigned long long)matrixIndex;	// IMP=0x0000000000195825
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eb78a
- (id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;	// IMP=0x000000000020c1fe

@end

