//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _UIDataSourceSnapshotter;
@protocol _UICollectionViewUpdateTranslating;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject
{
    NSArray *_updateItems;	// 8 = 0x8
    id <_UICollectionViewUpdateTranslating> _updateTranslator;	// 16 = 0x10
    _UIDataSourceSnapshotter *_finalDataSourceSnapshot;	// 24 = 0x18
    struct CGRect _visibleBounds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002a2787

@end
