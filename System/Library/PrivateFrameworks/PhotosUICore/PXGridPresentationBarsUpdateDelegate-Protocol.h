//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class UIViewController;

@protocol PXGridPresentationBarsUpdateDelegate <NSObject>

@optional
- (void)viewControllerDidUpdateNavigationItemAppearance:(UIViewController *)arg1;
- (void)viewController:(UIViewController *)arg1 didUpdateBarsAnimated:(_Bool)arg2 isSelecting:(_Bool)arg3;
@end
