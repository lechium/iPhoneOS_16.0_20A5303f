//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SnapshotTimer : NSObject
{
    _Bool taskIsComplete;	// 8 = 0x8
}

+ (void)takeSnapshotForTask:(id)arg1;	// IMP=0x00600000002e1100
@property(nonatomic) _Bool taskIsComplete; // @synthesize taskIsComplete;
- (void)checkout;	// IMP=0x00000000002e12cc
- (void)checkinWithTimeout:(double)arg1 forTask:(id)arg2;	// IMP=0x00000000002e1152
- (id)init;	// IMP=0x00000000002e10a5

@end
