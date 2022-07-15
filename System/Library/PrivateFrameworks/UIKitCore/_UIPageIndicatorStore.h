//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage, _UIPageIndicatorStoreObject;
@protocol _UIPageIndicatorStoreDelegate;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorStore : NSObject
{
    struct {
        unsigned int dirty:1;
        double fittingLength;
        struct CGSize maximumSize;
    } _fittingSizeCache;	// 8 = 0x8
    struct {
        unsigned int dirty:1;
        double fittingLength;
        long long startIndex;
        long long numberOfIndicators;
    } _indicatorCountCache;	// 40 = 0x28
    struct {
        unsigned int dirty:1;
        double numberOfPages;
        struct CGSize contentSize;
    } _contentSizeCache;	// 72 = 0x48
    struct {
        unsigned int dirty:1;
        struct _NSRange range;
        struct CGSize contentSize;
    } _contentSizeInRangeCache;	// 104 = 0x68
    UIImage *_defaultImage;	// 144 = 0x90
    _UIPageIndicatorStoreObject *_defaultObject;	// 152 = 0x98
    id <_UIPageIndicatorStoreDelegate> _delegate;	// 160 = 0xa0
    UIImage *_preferredImage;	// 168 = 0xa8
    UIImage *_preferredActiveImage;	// 176 = 0xb0
    double _indicatorSpacing;	// 184 = 0xb8
    long long _direction;	// 192 = 0xc0
    NSMutableArray *_store;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000c64111
@property(retain, nonatomic) NSMutableArray *store; // @synthesize store=_store;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(retain, nonatomic) UIImage *preferredActiveImage; // @synthesize preferredActiveImage=_preferredActiveImage;
@property(retain, nonatomic) UIImage *preferredImage; // @synthesize preferredImage=_preferredImage;
@property(nonatomic) __weak id <_UIPageIndicatorStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)validateDataStore;	// IMP=0x0000000000c64060
- (long long)_objectIndexForPage:(long long)arg1 lower:(long long)arg2 upper:(long long)arg3;	// IMP=0x0000000000c63e74
- (long long)objectIndexForPage:(long long)arg1;	// IMP=0x0000000000c63d6c
- (void)_resetStore;	// IMP=0x0000000000c63c54
- (void)_removeImageForPage:(long long)arg1 active:(_Bool)arg2;	// IMP=0x0000000000c638eb
- (void)_insertImage:(id)arg1 forPage:(long long)arg2 active:(_Bool)arg3;	// IMP=0x0000000000c637d9
- (double)indicatorPositionForContinuousPage:(double)arg1;	// IMP=0x0000000000c6353b
- (struct CGSize)_contentSizeForIndicatorsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000c630e5
- (struct CGSize)minimumContentSizeForIndicatorsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000c63071
- (struct CGSize)contentSizeForNumberOfPages:(long long)arg1;	// IMP=0x0000000000c63006
- (struct CGSize)defaultIndicatorSize;	// IMP=0x0000000000c62d4b
- (void)_updateImage:(id)arg1 forPage:(long long)arg2 active:(_Bool)arg3;	// IMP=0x0000000000c62ce6
- (void)updateActiveImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x0000000000c62cce
- (void)updateImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x0000000000c62cb9
- (void)updateStoreForNumberOfPages:(long long)arg1;	// IMP=0x0000000000c62984
- (struct CGSize)_sizeForMaximumContentSizeFittingLength:(double)arg1;	// IMP=0x0000000000c62433
- (struct CGSize)sizeForMaximumContentSizeFittingLength:(double)arg1;	// IMP=0x0000000000c623d7
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)arg1 fittingLength:(double)arg2;	// IMP=0x0000000000c62041
- (struct CGSize)_indicatorSizeForObject:(id)arg1;	// IMP=0x0000000000c61db0
- (struct CGSize)indicatorSizeForPage:(long long)arg1;	// IMP=0x0000000000c61d0f
- (void)invalidateLayoutCache;	// IMP=0x0000000000c61bcd
- (struct CGSize)resolvedIndicatorLayoutSizeForPage:(long long)arg1;	// IMP=0x0000000000c61ad9
- (id)activeIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c61a51
- (id)customActiveIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c619c1
- (id)indicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c61978
- (id)customIndicatorImageForPage:(long long)arg1;	// IMP=0x0000000000c618e8
- (id)_defaultIndicatorImage;	// IMP=0x0000000000c6188a
@property(readonly, nonatomic) UIImage *indicatorImage;
@property(readonly, nonatomic) long long numberOfPages;
- (id)init;	// IMP=0x0000000000c61741

@end
