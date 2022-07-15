//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDAffineGeometry, GQDBezierPath, NSString;

@interface GQDDrawable : NSObject
{
    GQDAffineGeometry *mGeometry;	// 8 = 0x8
    struct __CFURL *mUrl;	// 16 = 0x10
    char *mUid;	// 24 = 0x18
    GQDBezierPath *mWrapPath;	// 32 = 0x20
    GQDAffineGeometry *mWrapGeometry;	// 40 = 0x28
    void *mInnerWrapPoints;	// 48 = 0x30
    _Bool mHasPagesOrder;	// 56 = 0x38
    long long mPagesOrder;	// 64 = 0x40
}

- (void)setPagesOrder:(int)arg1;	// IMP=0x00000000000096e4
- (int)pagesOrder;	// IMP=0x00000000000096db
- (_Bool)hasPagesOrder;	// IMP=0x00000000000096d2
- (struct CGPath *)createBezierPath;	// IMP=0x000000000000961e
- (void)clearWrapPoints;	// IMP=0x00000000000095f4
- (void *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;	// IMP=0x0000000000009467
- (const void *)wrapPoints;	// IMP=0x0000000000009397
- (void)addWrapPoint:(id)arg1;	// IMP=0x0000000000009338
- (int)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2;	// IMP=0x0000000000009230
- (const char *)uid;	// IMP=0x0000000000009226
- (struct __CFString *)urlString;	// IMP=0x000000000000920f
- (struct __CFURL *)url;	// IMP=0x0000000000009205
- (id)geometry;	// IMP=0x00000000000091fb
- (void)dealloc;	// IMP=0x0000000000009168
- (void)collectWrapPoints:(id)arg1 forPath:(struct CGPath *)arg2 context:(struct FindLinesContext *)arg3;	// IMP=0x00000000000096f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
