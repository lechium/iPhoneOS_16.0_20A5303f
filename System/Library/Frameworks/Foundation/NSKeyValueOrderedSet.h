//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedSet.h>

@class NSKeyValueNonmutatingOrderedSetMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueOrderedSet : NSOrderedSet
{
    NSObject *_container;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSKeyValueNonmutatingOrderedSetMethodSet *_methods;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00100000006498a0
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000649c0d
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000649b59
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000649b2b
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000649a99
- (unsigned long long)count;	// IMP=0x0000000000649a6b
- (void)dealloc;	// IMP=0x0000000000649a0e
- (void)_proxyNonGCFinalize;	// IMP=0x00000000006499af
- (CDStruct_a70f6672)_proxyLocator;	// IMP=0x0000000000649993
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000006498c7

@end
