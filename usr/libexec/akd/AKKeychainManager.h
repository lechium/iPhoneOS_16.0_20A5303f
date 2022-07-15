//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AKKeychainManager : NSObject
{
    NSObject<OS_dispatch_queue> *_keychainQueue;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x004000000008d828
- (void).cxx_destruct;	// IMP=0x002000000008e756
- (_Bool)_unsafe_deleteKeychainItemWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008e6f2
- (id)_unsafe_fetchKeychainItemsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008e317
- (id)_unsafe_fetchKeychainItemWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008e141
- (_Bool)_unsafe_updateKeychainItemWithDescriptor:(id)arg1 newItem:(id)arg2 error:(id *)arg3;	// IMP=0x001000000008e058
- (_Bool)_unsafe_addKeychainItem:(id)arg1 shouldAttemptUpdate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000008df7b
- (void)deleteKeychainItemWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008de63
- (void)fetchKeychainItemsWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008dd3c
- (void)fetchKeychainItemWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008dc15
- (void)updateKeychainItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008dac6
- (void)addOrUpdateKeychainItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d9a0
- (void)addKeychainItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d87d
- (id)init;	// IMP=0x001000000008d7d0

@end
