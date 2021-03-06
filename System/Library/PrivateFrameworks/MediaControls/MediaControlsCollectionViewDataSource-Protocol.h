//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsCollectionViewController, UIViewController;
@protocol MediaControlsCollectionItemViewController;

@protocol MediaControlsCollectionViewDataSource <NSObject>
- (long long)defaultSelectedItemIndexForCollectionViewController:(MediaControlsCollectionViewController *)arg1;
- (UIViewController<MediaControlsCollectionItemViewController> *)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 viewControllerForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCollectionViewController:(MediaControlsCollectionViewController *)arg1;
@end

