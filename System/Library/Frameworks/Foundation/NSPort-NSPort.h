//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPort.h>

@interface NSPort (NSPort)
+ (id)portWithMachPort:(unsigned int)arg1;	// IMP=0x0050000000542537
+ (id)port;	// IMP=0x0050000000542515
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00500000005424e8
- (void)removeConnection:(id)arg1 fromRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x00100000005427d6
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;	// IMP=0x001000000054277a
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0010000000542774
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x001000000054276e
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;	// IMP=0x001000000054274f
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;	// IMP=0x0010000000542721
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000054271b
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000005426c7
- (Class)classForCoder;	// IMP=0x0010000000542659
- (Class)classForPortCoder;	// IMP=0x0010000000542648
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x0010000000542640
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000542635
- (unsigned long long)reservedSpaceLength;	// IMP=0x001000000054262d
- (id)delegate;	// IMP=0x00100000005425ff
- (void)setDelegate:(id)arg1;	// IMP=0x00100000005425d4
- (unsigned int)machPort;	// IMP=0x00100000005425cc
- (_Bool)isValid;	// IMP=0x001000000054259e
- (void)invalidate;	// IMP=0x0010000000542573
- (id)initWithMachPort:(unsigned int)arg1;	// IMP=0x001000000054256b
@end

