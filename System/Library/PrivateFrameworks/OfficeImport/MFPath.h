//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFPath : NSObject
{
}

- (int)fill:(id)arg1;	// IMP=0x0000000000367ab7
- (int)stroke:(id)arg1;	// IMP=0x0000000000367aac
- (int)widen:(id)arg1;	// IMP=0x0000000000367aa1
- (int)flatten;	// IMP=0x0000000000367a96
- (int)closeFigure;	// IMP=0x0000000000367a8b
- (struct CGPoint)currentPoint;	// IMP=0x0000000000367a7f
- (int)abort;	// IMP=0x0000000000367a74
- (int)end;	// IMP=0x0000000000367a69
- (int)begin;	// IMP=0x0000000000367a5e
- (_Bool)isOpen;	// IMP=0x0000000000367a56
- (int)state;	// IMP=0x0000000000367a4e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000367a46

@end
