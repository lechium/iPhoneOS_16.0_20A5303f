//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, _UISelectorSet;

__attribute__((visibility("hidden")))
@interface _UISelectorDictionary : NSObject
{
    NSMapTable *_map;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006a2d7f
- (id)description;	// IMP=0x00000000006a2d69
- (unsigned long long)hash;	// IMP=0x00000000006a2d53
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a2cfc
- (void)enumerateSelectorsAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a2c5d
- (void)removeObjectsForSelectors:(id)arg1;	// IMP=0x00000000006a2bf2
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000006a2b87
- (void)removeObjectForSelector:(SEL)arg1;	// IMP=0x00000000006a2b76
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;	// IMP=0x00000000006a2b65
- (id)objectForSelector:(SEL)arg1;	// IMP=0x00000000006a2b54
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) _UISelectorSet *allSelectors;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a2a2c
- (id)initWithMapping:(CDUnknownBlockType)arg1 objects:(id)arg2;	// IMP=0x00000000006a28b1
- (id)init;	// IMP=0x00000000006a2786
- (id)initWithMap:(id)arg1;	// IMP=0x00000000006a271b

@end
