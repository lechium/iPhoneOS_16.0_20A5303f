//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

__attribute__((visibility("hidden")))
@interface NSAutoLocale : NSLocale
{
    NSLocale *loc;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _lock;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000050b970
- (Class)classForCoder;	// IMP=0x000000000050ba3c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000050b9c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000050b978
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000050b94e
- (id)description;	// IMP=0x000000000050b88f
- (void)_setDoesNotRequireSpecialCaseHandling;	// IMP=0x000000000050b83b
- (unsigned char)_doesNotRequireSpecialCaseHandling;	// IMP=0x000000000050b7e7
- (id)_prefForKey:(id)arg1;	// IMP=0x000000000050b784
- (id)displayNameForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000050b71c
- (id)objectForKey:(id)arg1;	// IMP=0x000000000050b6b9
- (void)finalize;	// IMP=0x000000000050b656
- (void)dealloc;	// IMP=0x000000000050b5b6
- (id)initWithLocaleIdentifier:(id)arg1;	// IMP=0x000000000050b5a4
- (id)_init;	// IMP=0x000000000050b523
- (void)_update:(id)arg1;	// IMP=0x000000000050b4c0

@end
