//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BacklinkIndicatorViewController, NSString, NSUserActivity, PGBackgroundPIPAuthorization, PGPictureInPictureProxy;

@interface BacklinkIndicator : NSObject
{
    PGPictureInPictureProxy *_pipProxy;	// 8 = 0x8
    PGBackgroundPIPAuthorization *_pipAuthorization;	// 16 = 0x10
    BacklinkIndicatorViewController *_backlinkIndicatorViewController;	// 24 = 0x18
    _Bool _isActive;	// 32 = 0x20
    NSString *__pipSessionIdentifier;	// 40 = 0x28
    NSUserActivity *_userActivity;	// 48 = 0x30
}

+ (_Bool)isBacklinkUserActivity:(id)arg1;	// IMP=0x00200000000015e4
+ (_Bool)isBacklinkIndicatorRequestForScene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x0010000000001571
+ (_Bool)isBacklinkIndicatorRequestForScene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000014b2
- (void).cxx_destruct;	// IMP=0x002000000000287f
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)backlinkIndicatorViewControllerWillDismiss:(id)arg1;	// IMP=0x0010000000002771
- (void)backlinkIndicatorViewControllerDidReceiveTap:(id)arg1;	// IMP=0x001000000000243f
- (void)pictureInPictureProxy:(id)arg1 didUpdateStashedOrUnderLockState:(_Bool)arg2;	// IMP=0x0010000000002396
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x00100000000022b6
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x00100000000021c2
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;	// IMP=0x001000000000215a
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;	// IMP=0x001000000000207a
- (id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;	// IMP=0x0010000000001fb4
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;	// IMP=0x0010000000001f55
- (void)_updateUI;	// IMP=0x0010000000001ef7
- (void)hide;	// IMP=0x0010000000001db8
- (void)_createPipProxyIfNeeded;	// IMP=0x0010000000001ce6
- (void)showWithUserActivity:(id)arg1;	// IMP=0x00100000000017d7
- (id)_pipSessionIdentifier;	// IMP=0x001000000000175e
- (void)dealloc;	// IMP=0x0010000000001711
- (id)init;	// IMP=0x0010000000001635

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

