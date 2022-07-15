//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, UICollectionViewUpdateItem, UITableViewUpdateGap;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject
{
    UICollectionViewUpdateItem *_collectionViewUpdateItem;	// 8 = 0x8
    _Bool _headerFooterOnly;	// 16 = 0x10
    int _action;	// 20 = 0x14
    NSIndexPath *_indexPath;	// 24 = 0x18
    long long _animation;	// 32 = 0x20
    UITableViewUpdateGap *_gap;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000010c312b
@property(nonatomic) __weak UITableViewUpdateGap *gap; // @synthesize gap=_gap;
@property(readonly, nonatomic) _Bool isDecomposedFromReload;
- (long long)inverseCompareIndexPaths:(id)arg1;	// IMP=0x00000000010c30d4
- (long long)compareIndexPaths:(id)arg1;	// IMP=0x00000000010c30b1
@property(readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;

@end
