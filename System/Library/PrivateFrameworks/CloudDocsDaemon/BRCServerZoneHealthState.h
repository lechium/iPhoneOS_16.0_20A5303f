//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRFieldCKInfo;

__attribute__((visibility("hidden")))
@interface BRCServerZoneHealthState : NSObject
{
    int _state;	// 8 = 0x8
    BRFieldCKInfo *_ckInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001dd77e
- (void).cxx_destruct;	// IMP=0x00000000001dd94b
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (id)description;	// IMP=0x00000000001dd8a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001dd836
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001dd786
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001dd74f
- (id)initWithServerZoneHealthState:(id)arg1;	// IMP=0x00000000001dd6e3
- (id)initWithCKInfo:(id)arg1 state:(int)arg2;	// IMP=0x00000000001dd66d

@end

