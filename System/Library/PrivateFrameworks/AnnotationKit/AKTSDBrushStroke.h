//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface AKTSDBrushStroke : NSObject
{
    int _join;	// 8 = 0x8
    NSString *_strokeName;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    double _width;	// 32 = 0x20
    double _miterLimit;	// 40 = 0x28
}

+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;	// IMP=0x00600000000811d9
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc *)arg2;	// IMP=0x00600000000805a2
+ (void)loadBrush:(id)arg1;	// IMP=0x006000000007fba1
+ (id)cacheDirectory;	// IMP=0x006000000007faa5
+ (Class)mutableClass;	// IMP=0x006000000007f98f
+ (id)strokeWithType:(long long)arg1 color:(id)arg2 width:(double)arg3;	// IMP=0x006000000007f7b7
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;	// IMP=0x006000000007f706
- (void).cxx_destruct;	// IMP=0x0000000000083ff1
@property(readonly, nonatomic) double miterLimit; // @synthesize miterLimit=_miterLimit;
@property(readonly, nonatomic) int join; // @synthesize join=_join;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
@property(readonly, retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, copy, nonatomic) NSString *strokeName; // @synthesize strokeName=_strokeName;
- (void)brushPath:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000000083661
- (void)brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(id)arg4 sectionIndex:(unsigned long long *)arg5 viewScale:(double)arg6;	// IMP=0x0000000000082a97
- (void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CDStruct_c3b9c2ee)arg4 inElementRange:(struct _NSRange)arg5 into:(id)arg6 viewScale:(double)arg7;	// IMP=0x00000000000828a5
- (id)description;	// IMP=0x00000000000827db
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;	// IMP=0x0000000000082634
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;	// IMP=0x00000000000823ca
- (id)strokeLineEnd:(id)arg1;	// IMP=0x00000000000820aa
- (id)brushBoundsForId:(id)arg1;	// IMP=0x0000000000081ef9
- (id)brushPathsForId:(id)arg1;	// IMP=0x0000000000081ccc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f9ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f9a0
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 join:(int)arg4 miterLimit:(double)arg5;	// IMP=0x000000000007f898

@end

