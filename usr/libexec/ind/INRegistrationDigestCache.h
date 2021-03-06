//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface INRegistrationDigestCache : NSObject
{
    int _unlockNotifyToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_keychainQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000090e9
+ (_Bool)isAvailable;	// IMP=0x00100000000090e1
- (void).cxx_destruct;	// IMP=0x0020000000009ada
- (_Bool)updateRegistrationDigest:(id)arg1 forAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000009722
- (_Bool)removeRegistrationDigestForAccount:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000000950f
- (id)registrationDigestForAccount:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000091f9
- (void)dealloc;	// IMP=0x00100000000091c0
- (id)init;	// IMP=0x001000000000913e

@end

