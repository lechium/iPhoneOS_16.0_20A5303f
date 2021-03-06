//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPZoneBorder;

__attribute__((visibility("hidden")))
@interface CPZoneBorderIntersection : NSObject
{
    struct CGRect intersectionRect;	// 8 = 0x8
    CPZoneBorder *intersectingBorder;	// 40 = 0x28
    _Bool forwardVector;	// 48 = 0x30
    _Bool backwardVector;	// 49 = 0x31
}

- (long long)comparePositionLengthwise:(id)arg1;	// IMP=0x0000000000060d7e
- (_Bool)backwardVector;	// IMP=0x0000000000060d75
- (void)setBackwardVector:(_Bool)arg1;	// IMP=0x0000000000060d6c
- (_Bool)forwardVector;	// IMP=0x0000000000060d63
- (void)setForwardVector:(_Bool)arg1;	// IMP=0x0000000000060d5a
- (id)intersectingBorder;	// IMP=0x0000000000060d50
- (void)setIntersectingBorder:(id)arg1;	// IMP=0x0000000000060d46
- (struct CGRect)intersectionRect;	// IMP=0x0000000000060d2e
- (void)setIntersectionRect:(struct CGRect)arg1;	// IMP=0x0000000000060d18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060d0c
- (id)initSuper;	// IMP=0x0000000000060cdd

@end

