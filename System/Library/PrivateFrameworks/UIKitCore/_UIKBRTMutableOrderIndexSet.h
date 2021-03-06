//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIKBRTMutableOrderIndexSet : NSObject
{
    _Bool _reversed;	// 8 = 0x8
    NSMutableIndexSet *_indexSet;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c59fe2
@property(nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) NSMutableIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (id)description;	// IMP=0x0000000000c59f38
- (void)removeIndexes:(id)arg1;	// IMP=0x0000000000c59f22
- (void)removeIndex:(unsigned long long)arg1;	// IMP=0x0000000000c59f0c
- (void)addIndex:(unsigned long long)arg1;	// IMP=0x0000000000c59ef6
@property(readonly) unsigned long long endingIndex;
@property(readonly) unsigned long long beginningIndex;
@property(readonly) unsigned long long highestIndex;
@property(readonly) unsigned long long lowestIndex;
@property(readonly) unsigned long long count;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000c59de6
- (id)init;	// IMP=0x0000000000c59d8c

@end

