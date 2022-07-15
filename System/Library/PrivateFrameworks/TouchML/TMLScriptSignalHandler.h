//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TMLContext;

@interface TMLScriptSignalHandler : NSObject
{
    TMLContext *_context;	// 8 = 0x8
    id _target;	// 16 = 0x10
    NSString *_functionName;	// 24 = 0x18
    unsigned long long _returnType;	// 32 = 0x20
    int _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000010f1a
- (void)detach;	// IMP=0x0000000000010f14
- (void)attach;	// IMP=0x0000000000010f0e
- (id)callWithArguments:(id)arg1;	// IMP=0x0000000000010d76
- (id)initWithFunctionName:(id)arg1 returnType:(unsigned long long)arg2 target:(id)arg3 context:(id)arg4;	// IMP=0x0000000000010ca1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
