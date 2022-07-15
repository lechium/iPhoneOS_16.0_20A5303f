//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKLocalPlayer.h>

@class NSString;

@interface GKLocalPlayer (GKFaceTimeSupport)
+ (id)accountName;	// IMP=0x001000000001a9b4
+ (_Bool)hasAuthenticatedAccount;	// IMP=0x001000000004980a
- (id)deleteAvatarAlertControllerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c0c0
- (void)deleteMonogramsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bb77
- (void)setPhotoFromCNContactImage:(id)arg1 pendingContact:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b6e2
- (void)setPhoto:(id)arg1 avatarType:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b07f
- (void)deletePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002afa8
- (void)deletePhoto;	// IMP=0x001000000002af89
- (void)registerGameControllers;	// IMP=0x001000000011447c
- (void)reloadAccessPoint;	// IMP=0x0010000000114438
- (void)hideAccessPoint;	// IMP=0x00100000001143f4
- (void)showAccessPoint;	// IMP=0x00100000001143b0
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x00100000001140bf
- (void)showAlertForTag:(unsigned long long)arg1;	// IMP=0x0010000000113fc2
- (void)showLoginFailedAlert;	// IMP=0x0010000000113d71
- (void)authenticationShowSignInUIForLocalPlayer:(id)arg1 dismiss:(CDUnknownBlockType)arg2;	// IMP=0x0010000000113283
- (void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000112779
- (void)showOnboardingUIFromViewController:(id)arg1;	// IMP=0x0010000000111bb7
- (_Bool)shouldShowOnBoardingUI;	// IMP=0x0010000000111ab8
- (void)showWelcomeBannerWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000111a2f
- (_Bool)presentFriendRequestCreatorFromViewController:(id)arg1 error:(id *)arg2;	// IMP=0x001000000013c996
- (_Bool)isPresentingFriendRequestViewController;	// IMP=0x001000000013c984
- (void)sendFriendInviteTo:(id)arg1 groupId:(id)arg2;	// IMP=0x001000000013c1b7
- (_Bool)canSendFriendRequest;	// IMP=0x001000000013c1af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
