//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

__attribute__((visibility("hidden")))
@interface OITSUPointerSet : NSSet
{
    struct __CFSet *mSet;	// 8 = 0x8
}

+ (Class)privateMutableClass;	// IMP=0x0060000000270488
+ (Class)privateNonMutableClass;	// IMP=0x0060000000270477
- (id)setByAddingObjectsFromArray:(id)arg1;	// IMP=0x0000000000270b87
- (id)setByAddingObjectsFromSet:(id)arg1;	// IMP=0x0000000000270953
- (id)setByAddingObject:(id)arg1;	// IMP=0x0000000000270831
- (id)allObjects;	// IMP=0x00000000002706f4
- (void)getObjects:(id *)arg1;	// IMP=0x00000000002706a4
- (id)objectEnumerator;	// IMP=0x0000000000270666
- (id)member:(id)arg1;	// IMP=0x0000000000270623
- (unsigned long long)count;	// IMP=0x0000000000270605
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002705bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002705b1
- (id)initWithCFSet:(struct __CFSet *)arg1;	// IMP=0x0000000000270554
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002704eb
- (void)dealloc;	// IMP=0x0000000000270499

@end
