//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BNBannerSource, NSNumber;

@interface PresentationViewController : UIViewController
{
    NSNumber *_isSpecialUiAvailable;	// 8 = 0x8
    BNBannerSource *_bannerSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000019e56
@property(readonly, nonatomic) BNBannerSource *bannerSource; // @synthesize bannerSource=_bannerSource;
- (void)shake;	// IMP=0x0010000000019e3f
@property(readonly, nonatomic) _Bool isSpecialUiAvailable;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019db6
- (void)presentOnParentViewController:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019caf

@end
