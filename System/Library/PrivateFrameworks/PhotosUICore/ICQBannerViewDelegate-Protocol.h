//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class ICQBannerView, NSDictionary, UIViewController;

@protocol ICQBannerViewDelegate <NSObject>

@optional
- (void)updateBannerView;
- (void)bannerView:(ICQBannerView *)arg1 action:(long long)arg2 parameters:(NSDictionary *)arg3 dismiss:(_Bool)arg4;
- (_Bool)bannerView:(ICQBannerView *)arg1 performAction:(long long)arg2 parameters:(NSDictionary *)arg3;
- (UIViewController *)presentingViewControllerForBannerView:(ICQBannerView *)arg1;
@end
