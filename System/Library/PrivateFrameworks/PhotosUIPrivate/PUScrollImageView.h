//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface PUScrollImageView : UIScrollView
{
    UIImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000035c63
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x0000000000035c2a
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;	// IMP=0x0000000000035aab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
