//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIBaseCollectionViewCell.h"

@class VUICollectionViewFeaturedView;

__attribute__((visibility("hidden")))
@interface VUICollectionViewFeaturedCell : VUIBaseCollectionViewCell
{
    VUICollectionViewFeaturedView *_featuredView;	// 8 = 0x8
}

+ (double)_iOSLockupWidthWithWindowWidth:(double)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 showsPageControl:(_Bool)arg3;	// IMP=0x006000000029ce1d
- (void).cxx_destruct;	// IMP=0x000000000029cfee
@property(retain, nonatomic) VUICollectionViewFeaturedView *featuredView; // @synthesize featuredView=_featuredView;
- (void)_commonInitWithFrame:(struct CGRect)arg1;	// IMP=0x000000000029ceba
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000029ce49

@end

