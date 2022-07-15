//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TMLReactiveValue : NSObject
{
    NSArray *_bindings;	// 8 = 0x8
    id _targetWeak;	// 16 = 0x10
    id _targetUnsafe;	// 24 = 0x18
    NSString *_keyPath;	// 32 = 0x20
    unsigned long long _valueType;	// 40 = 0x28
}

+ (void)removeReactiveValuesForTarget:(id)arg1;	// IMP=0x0010000000040d24
+ (id)valueForTarget:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0010000000040caf
- (void).cxx_destruct;	// IMP=0x0000000000040df0
@property(readonly, nonatomic) NSArray *bindings; // @synthesize bindings=_bindings;
- (void)bindingValueChanged:(id)arg1;	// IMP=0x0000000000040d3f
- (void)unassign;	// IMP=0x0000000000040b61
- (void)assignToTarget:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x000000000004096d
- (unsigned long long)valueType;	// IMP=0x0000000000040963
- (id)value;	// IMP=0x000000000004095b
@property(readonly, nonatomic) long long bindingOrder;
- (id)initWithBindings:(id)arg1 valueType:(unsigned long long)arg2;	// IMP=0x00000000000408dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
