//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TMLRuntime : NSObject
{
}

+ (id)ensureClass:(id)arg1;	// IMP=0x008000000004a5ce
+ (id)ensurePropertyWithKeyPath:(id)arg1 forObject:(id)arg2 writable:(_Bool)arg3;	// IMP=0x008000000004a38a
+ (id)propertyWithKeyPath:(id)arg1 forObject:(id)arg2;	// IMP=0x0080000000049fec
+ (id)propertyWithKeyPath:(id)arg1 inClass:(id)arg2;	// IMP=0x0080000000049b8d
+ (id)property:(id)arg1 forClass:(id)arg2;	// IMP=0x0080000000049a73
+ (id)protocolForName:(id)arg1;	// IMP=0x0080000000049a5a
+ (id)classForName:(id)arg1;	// IMP=0x0080000000049a41
+ (id)childClassForName:(id)arg1 inClass:(id)arg2;	// IMP=0x0080000000049813
+ (id)classForObject:(id)arg1;	// IMP=0x0080000000049722
+ (id)signal:(id)arg1 forObject:(id)arg2;	// IMP=0x0080000000049318
+ (void)verifyMethod:(id)arg1 withClass:(Class)arg2;	// IMP=0x0080000000048ae7
+ (void)verifyMethod:(id)arg1 forProtocol:(id)arg2;	// IMP=0x008000000004821b
+ (void)registerSignal:(id)arg1 forObject:(id)arg2;	// IMP=0x0080000000047f26
+ (void)registerMethod:(id)arg1 forObject:(id)arg2;	// IMP=0x0080000000047b97
+ (id)property:(id)arg1 forObject:(id)arg2;	// IMP=0x0080000000047a98
+ (void)registerProperty:(id)arg1 forObject:(id)arg2;	// IMP=0x00800000000477a4
+ (void)addProperty:(id)arg1 toClass:(Class)arg2;	// IMP=0x0080000000047418
+ (void)verifyProperty:(id)arg1 withClass:(Class)arg2;	// IMP=0x0080000000046a0e
+ (Class)createClass:(id)arg1;	// IMP=0x0080000000045afb
+ (void)registerProtocol:(id)arg1;	// IMP=0x00800000000458d5
+ (void)registerClass:(id)arg1 className:(id)arg2;	// IMP=0x008000000004497d
+ (void)registerClass:(id)arg1;	// IMP=0x0080000000044911
+ (void)makeObject:(id)arg1 implementProtocols:(id)arg2;	// IMP=0x008000000004411f
+ (id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(CDUnknownBlockType)arg3 parentObject:(id)arg4;	// IMP=0x0080000000043fd0
+ (id)createObjectWithIdentifier:(id)arg1 ofClass:(id)arg2 initializer:(CDUnknownBlockType)arg3;	// IMP=0x0080000000043e47
+ (id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(CDUnknownBlockType)arg3;	// IMP=0x0080000000043d18
+ (id)requireModule:(id)arg1;	// IMP=0x0080000000043b32
+ (id)rootClassDescriptor;	// IMP=0x0080000000043891
+ (void)bootstrap;	// IMP=0x0080000000043795
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000004378d

@end
