//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface QLThumbnailView : UIView
{
    _Bool _alwaysVisible;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    long long _pageNumber;	// 24 = 0x18
    struct CGRect _unselectedFrame;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007c3ff
@property struct CGRect unselectedFrame; // @synthesize unselectedFrame=_unselectedFrame;
@property _Bool alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000007c2c1
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000007c054
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007bfc3

@end
