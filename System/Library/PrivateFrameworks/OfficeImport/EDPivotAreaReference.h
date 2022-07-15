//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject
{
    _Bool mByPosition;	// 8 = 0x8
    _Bool mRelative;	// 9 = 0x9
    _Bool mSelected;	// 10 = 0xa
    unsigned long long mFieldId;	// 16 = 0x10
    unsigned long long mCount;	// 24 = 0x18
}

+ (id)pivotAreaReference;	// IMP=0x00600000003aae02
- (id)description;	// IMP=0x00000000003aae7a
- (void)setCount:(unsigned long long)arg1;	// IMP=0x00000000003aae70
- (unsigned long long)count;	// IMP=0x00000000003aae66
- (void)setFieldId:(unsigned long long)arg1;	// IMP=0x00000000003aae5c
- (unsigned long long)fieldId;	// IMP=0x00000000003aae52
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000003aae49
- (_Bool)selected;	// IMP=0x00000000003aae40
- (void)setRelative:(_Bool)arg1;	// IMP=0x00000000003aae37
- (_Bool)relative;	// IMP=0x00000000003aae2e
- (void)setByPosition:(_Bool)arg1;	// IMP=0x00000000003aae25
- (_Bool)byPosition;	// IMP=0x00000000003aae1c
- (id)init;	// IMP=0x00000000003aadbd

@end
