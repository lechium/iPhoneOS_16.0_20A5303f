//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface OITSUCFSetEnumerator : NSEnumerator
{
    void *mInlineObjects[16];	// 8 = 0x8
    const void **mObjects;	// 136 = 0x88
    long long mCount;	// 144 = 0x90
    long long mIndex;	// 152 = 0x98
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000027043e
- (id)allObjects;	// IMP=0x00000000002703f4
- (id)nextObject;	// IMP=0x00000000002703bc
- (id)initWithCFSet:(struct __CFSet *)arg1;	// IMP=0x0000000000270338
- (void)dealloc;	// IMP=0x00000000002702e3

@end

