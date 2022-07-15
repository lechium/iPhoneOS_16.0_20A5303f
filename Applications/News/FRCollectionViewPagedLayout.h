//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FRCollectionViewPagedLayout
{
    double _pageOffset;	// 8 = 0x8
    double _pageSpacing;	// 16 = 0x10
    struct CGSize _pageSize;	// 24 = 0x18
}

@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) double pageOffset; // @synthesize pageOffset=_pageOffset;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
- (id)adjustLayoutAttributeForPageOffset:(id)arg1;	// IMP=0x0010000000062093
- (struct CGSize)collectionViewContentSize;	// IMP=0x0010000000061e51
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000061db9
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0010000000061bb2

@end
