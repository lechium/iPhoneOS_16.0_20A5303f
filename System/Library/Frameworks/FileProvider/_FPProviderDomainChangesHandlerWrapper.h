//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _FPProviderDomainChangesHandlerWrapper : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
}

+ (id)wrapperWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0060000000001e9c
- (void).cxx_destruct;	// IMP=0x000000000000205d
@property(getter=isUnregistered) _Bool unregistered;
- (void)callHandlerWithProvidersByID:(id)arg1 error:(id)arg2;	// IMP=0x0000000000001ef4

@end

