//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;
@protocol SKUIReviewsFacebookViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIReviewsFacebookViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    id <SKUIReviewsFacebookViewControllerDelegate> _delegate;	// 16 = 0x10
    SKUIFacebookLikeStatus *_facebookLikeStatus;	// 24 = 0x18
    SKUIReviewsFacebookView *_facebookView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f843b
@property(copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus; // @synthesize facebookLikeStatus=_facebookLikeStatus;
@property(nonatomic) __weak id <SKUIReviewsFacebookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadFacebookView;	// IMP=0x00000000001f8343
- (void)_changeStatusToUserLiked:(_Bool)arg1;	// IMP=0x00000000001f82e2
- (void)_toggleLike:(id)arg1;	// IMP=0x00000000001f801c
- (void)loadView;	// IMP=0x00000000001f7f4f
- (void)dealloc;	// IMP=0x00000000001f7e6e

@end

