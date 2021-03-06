//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (TSUAdditions)
+ (id)tsu_indexSetWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0020000000286faf
- (id)tsu_localizedDescription;	// IMP=0x0010000000287c02
- (struct _NSRange)tsu_trailingRangeInRange:(struct _NSRange)arg1;	// IMP=0x0010000000287ad5
- (struct _NSRange)tsu_leadingRangeInRange:(struct _NSRange)arg1;	// IMP=0x00100000002879af
- (unsigned long long)tsu_positionOfIndex:(unsigned long long)arg1;	// IMP=0x00100000002878b0
- (unsigned long long)tsu_indexAtPosition:(unsigned long long)arg1;	// IMP=0x0010000000287768
- (id)tsu_indexSetByExcludingIndexes:(id)arg1;	// IMP=0x0010000000287610
- (id)tsu_indexSetByIntersectingWithIndexes:(id)arg1;	// IMP=0x00100000002874b8
- (id)tsu_indexSetByIntersectingWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000287350
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00100000002872a6
- (_Bool)tsu_intersectsIndexesInIndexSet:(id)arg1;	// IMP=0x001000000028718b
@property(readonly, nonatomic) _Bool tsu_isSingleContiguousRange;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;	// IMP=0x00100000002870c2
- (id)tsu_indexSetByAddingIndex:(unsigned long long)arg1;	// IMP=0x0010000000287062
- (id)tsu_initWithIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000286fea
@end

