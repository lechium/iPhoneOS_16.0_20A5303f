//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface ASCDescriber : NSObject
{
    id <NSObject> _object;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

+ (id)nilObject;	// IMP=0x004000000001aa8d
- (void).cxx_destruct;	// IMP=0x000000000001b6de
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <NSObject> object; // @synthesize object=_object;
- (id)description;	// IMP=0x000000000001b5b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b41f
- (unsigned long long)hash;	// IMP=0x000000000001b36d
- (id)finalizeDescription;	// IMP=0x000000000001b2b0
- (id)describeProperties;	// IMP=0x000000000001b01e
- (id)describeObject;	// IMP=0x000000000001af5e
- (void)addObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001ae6f
- (void)addSensitiveObject:(id)arg1 withName:(id)arg2;	// IMP=0x000000000001ae0c
- (void)addDouble:(double)arg1 withName:(id)arg2;	// IMP=0x000000000001ad86
- (void)addUInt64:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000000001ad05
- (void)addInt64:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000001ac84
- (void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x000000000001ac03
- (void)addInteger:(long long)arg1 withName:(id)arg2;	// IMP=0x000000000001ab82
- (void)addBool:(_Bool)arg1 withName:(id)arg2;	// IMP=0x000000000001ab1f
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001aa9a

@end
