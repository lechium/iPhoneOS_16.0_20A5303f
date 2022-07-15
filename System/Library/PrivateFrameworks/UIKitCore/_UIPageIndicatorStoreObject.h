//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorStoreObject : NSObject
{
    UIImage *_customImage;	// 8 = 0x8
    UIImage *_activeImage;	// 16 = 0x10
    long long _startIndex;	// 24 = 0x18
    long long _endIndex;	// 32 = 0x20
    struct CGSize _indicatorSize;	// 40 = 0x28
    struct CGSize _activeIndicatorSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000c61719
@property(nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) struct CGSize activeIndicatorSize; // @synthesize activeIndicatorSize=_activeIndicatorSize;
@property(retain, nonatomic) UIImage *activeImage; // @synthesize activeImage=_activeImage;
@property(nonatomic) struct CGSize indicatorSize; // @synthesize indicatorSize=_indicatorSize;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
- (id)description;	// IMP=0x0000000000c6162b
- (id)splitAtIndex:(long long)arg1 withImage:(id)arg2 active:(_Bool)arg3;	// IMP=0x0000000000c6141e
- (_Bool)validPageWithinBound:(long long)arg1;	// IMP=0x0000000000c61407
- (void)invalidateLayoutInfo;	// IMP=0x0000000000c613c3
- (void)_copyImagesFromObject:(id)arg1;	// IMP=0x0000000000c612ff
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) struct CGSize resolvedSize;
- (id)initWithStartIndex:(long long)arg1 endIndex:(long long)arg2;	// IMP=0x0000000000c61215

@end
