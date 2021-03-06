//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDTableFilter : NSObject
{
    int mScale;	// 8 = 0x8
    int mOperator;	// 12 = 0xc
    double mValue;	// 16 = 0x10
    double mFilterValue;	// 24 = 0x18
}

+ (id)edTableFilter;	// IMP=0x00600000003c4a07
- (id)description;	// IMP=0x00000000003c4a70
- (void)setOperatorType:(int)arg1;	// IMP=0x00000000003c4a67
- (int)operatorType;	// IMP=0x00000000003c4a5e
- (void)setScale:(int)arg1;	// IMP=0x00000000003c4a55
- (int)scale;	// IMP=0x00000000003c4a4c
- (void)setFilterValue:(double)arg1;	// IMP=0x00000000003c4a41
- (double)filterValue;	// IMP=0x00000000003c4a36
- (void)setValue:(double)arg1;	// IMP=0x00000000003c4a2b
- (double)value;	// IMP=0x00000000003c4a20

@end

