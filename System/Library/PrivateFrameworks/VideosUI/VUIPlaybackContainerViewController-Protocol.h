//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class AVPlayerViewController, NSObject;
@protocol TVPMediaItem, VUIPlaybackContainerViewControllerDelegate;

@protocol VUIPlaybackContainerViewController <NSObject>
@property(nonatomic) __weak id <VUIPlaybackContainerViewControllerDelegate> delegate;
- (void)hidePictureInPictureWithCompletion:(void (^)(void))arg1;
- (void)exitPictureInPictureWithCompletion:(void (^)(void))arg1;
- (void)enterPictureInPicture;
- (void)presentPlayerViewController:(AVPlayerViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)loadPostPlayForMediaItem:(NSObject<TVPMediaItem> *)arg1;
@end
