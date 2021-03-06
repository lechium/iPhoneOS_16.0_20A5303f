//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface MTLToolsObjectCache : NSObject
{
    NSMapTable *_map;	// 8 = 0x8
    struct recursive_mutex _lock;	// 16 = 0x10
    struct vector<id, std::allocator<id>> _keyRemoveList;	// 80 = 0x50
    struct os_unfair_lock_s _listLock;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x0000000000084900
- (void).cxx_destruct;	// IMP=0x00000000000848d3
- (void)dealloc;	// IMP=0x0000000000084898
- (id)getCachedObjectForKey:(id)arg1 onMiss:(CDUnknownBlockType)arg2;	// IMP=0x00000000000847e5
- (id)getCachedObjectForKey:(id)arg1;	// IMP=0x0000000000084768
- (void)removeKey:(id)arg1;	// IMP=0x00000000000844ff
- (id)init;	// IMP=0x000000000008448c

@end

