//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableArray.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00800000000143ee
- (void)dealloc;	// IMP=0x00000000000147ab
- (unsigned long long)retainCount;	// IMP=0x00000000000147a3
- (oneway void)release;	// IMP=0x00000000000147a2
- (id)retain;	// IMP=0x000000000001479e
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x000000000001472b
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x00000000000146de
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000014698
- (id)_initByAdoptingBuffer:(id *)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;	// IMP=0x0000000000014661
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000145b5
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x000000000001453a
- (id)initWithArray:(id)arg1;	// IMP=0x0000000000014438
- (id)init;	// IMP=0x00000000000143f0
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000000001431f
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014260
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000141a1
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000140e2
- (unsigned long long)count;	// IMP=0x0000000000014023

@end
