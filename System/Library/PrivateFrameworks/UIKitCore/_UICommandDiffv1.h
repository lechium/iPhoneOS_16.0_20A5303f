//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UICommandDiffv1 : NSObject
{
    NSOrderedSet *_changes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000011905c7
+ (id)diffWithChanges:(id)arg1;	// IMP=0x001000000119057e
- (void).cxx_destruct;	// IMP=0x0000000001190762
@property(readonly, nonatomic) NSOrderedSet *changes; // @synthesize changes=_changes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001190735
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000119072a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001190642
- (id)initWithChanges:(id)arg1;	// IMP=0x00000000011905cf

@end
