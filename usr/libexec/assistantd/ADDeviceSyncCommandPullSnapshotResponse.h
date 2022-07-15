//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncSnapshot;

@interface ADDeviceSyncCommandPullSnapshotResponse : NSObject
{
    ADDeviceSyncSnapshot *_snapshot;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001f8624
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f83b5
- (void).cxx_destruct;	// IMP=0x00100000001f86e6
@property(readonly, copy, nonatomic) ADDeviceSyncSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001f86b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001f862c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001f8619
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001f8576
- (unsigned long long)hash;	// IMP=0x00100000001f8560
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001f84da
- (id)description;	// IMP=0x00100000001f84c6
- (id)initWithSnapshot:(id)arg1;	// IMP=0x00100000001f8416
- (id)init;	// IMP=0x00100000001f8402
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f82c1
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f87ec

@end
