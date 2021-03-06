//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSExtensionURLResult : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sema;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000004b137e
- (_Bool)wait:(double)arg1;	// IMP=0x00000000004b1348
- (void)signal;	// IMP=0x00000000004b133a
@property(copy, setter=setURL:) NSURL *url;
- (id)copiedURL;	// IMP=0x00000000004b12e6
- (id)init;	// IMP=0x00000000004b121a

@end

