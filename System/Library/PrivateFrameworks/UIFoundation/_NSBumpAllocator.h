//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSBumpAllocator : NSObject
{
    struct Slab *_firstSlab;	// 8 = 0x8
    struct Slab *_curSlab;	// 16 = 0x10
    char *_ptr;	// 24 = 0x18
    char *_endPtr;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x0000000000076391
- (void)reset;	// IMP=0x0000000000076374
- (void *)allocate:(unsigned long long)arg1;	// IMP=0x00000000000762b0
- (struct Slab *)_allocateSlabWithSize:(unsigned long long)arg1;	// IMP=0x000000000007628d

@end
