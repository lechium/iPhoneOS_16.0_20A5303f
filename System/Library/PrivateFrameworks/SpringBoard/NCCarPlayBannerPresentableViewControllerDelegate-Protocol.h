//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NCCarPlayBannerPresentableViewController, NSString;

@protocol NCCarPlayBannerPresentableViewControllerDelegate <NSObject>
- (void)didCancelBannerOfPresentableViewController:(NCCarPlayBannerPresentableViewController *)arg1 reason:(NSString *)arg2;
- (void)didSelectBannerOfPresentableViewController:(NCCarPlayBannerPresentableViewController *)arg1;
- (_Bool)presentableViewControllerClosesByDefault:(NCCarPlayBannerPresentableViewController *)arg1;
@end

