//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFImageCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_backingStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000078c78
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMutableDictionary *backingStore; // @synthesize backingStore=_backingStore;
- (void)removeAllObjects;	// IMP=0x0000000000078c05
- (struct CGImage *)imageForKey:(id)arg1;	// IMP=0x0000000000078a85
- (void)setImage:(struct CGImage *)arg1 forKey:(id)arg2;	// IMP=0x00000000000788ec
- (id)init;	// IMP=0x000000000007887d

@end

