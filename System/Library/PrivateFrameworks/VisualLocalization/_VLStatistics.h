//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _VLStatistics : NSObject
{
    CDStruct_8259f036 _stats;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000001c40
@property(readonly, nonatomic) CDStruct_8259f036 *stats;
- (void)dealloc;	// IMP=0x0000000000003660
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000031a0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001d10
- (id)initWithStats:(const CDStruct_8259f036 *)arg1;	// IMP=0x0000000000001c50

@end

