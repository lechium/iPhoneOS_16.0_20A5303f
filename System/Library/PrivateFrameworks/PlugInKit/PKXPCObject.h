//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface PKXPCObject : NSObject
{
    NSObject<OS_xpc_object> *_object;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000215d8
+ (id)object:(id)arg1;	// IMP=0x0010000000021355
- (void).cxx_destruct;	// IMP=0x0000000000021603
@property(retain) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021529
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002140a
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000213a2

@end
