//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject
{
    NSMutableArray *mTransforms;	// 8 = 0x8
}

+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;	// IMP=0x001000000030d5e3
+ (id)tsuColorWithRgbColor:(id)arg1;	// IMP=0x001000000030d4fb
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x001000000030d4ce
+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x00100000000a4c2d
+ (float)alphaWithColor:(id)arg1;	// IMP=0x00100000000a581b
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x00100000000a4d58
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x001000000010afa0
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x00100000000a4e48
- (void).cxx_destruct;	// IMP=0x000000000030d7d4
- (id)description;	// IMP=0x000000000030d5a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032f96
- (unsigned long long)hash;	// IMP=0x0000000000032f80
- (id)colorForStyleColor:(id)arg1;	// IMP=0x000000000019664b
- (void)addTransformOfType:(int)arg1 value:(float)arg2;	// IMP=0x000000000020c316
- (void)addTransformOfType:(int)arg1;	// IMP=0x000000000030d463
- (void)setTransforms:(id)arg1;	// IMP=0x0000000000026d38
- (id)transforms;	// IMP=0x00000000000330de
- (void)addTransform:(id)arg1;	// IMP=0x000000000010c02c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030d458

@end
