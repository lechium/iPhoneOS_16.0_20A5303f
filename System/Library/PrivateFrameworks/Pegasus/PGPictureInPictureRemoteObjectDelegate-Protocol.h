//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Pegasus/NSObject-Protocol.h>

@class NSString, PGPictureInPictureRemoteObject, PGPictureInPictureViewController;

@protocol PGPictureInPictureRemoteObjectDelegate <NSObject>
- (_Bool)pictureInPictureRemoteObjectHasBackgroundPIPAuthorization:(PGPictureInPictureRemoteObject *)arg1;
- (void)pictureInPictureRemoteObjectNeedsActivationAndInterruptionPolicyUpdate:(PGPictureInPictureRemoteObject *)arg1;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didRequestPictureInPictureStopForViewController:(PGPictureInPictureViewController *)arg2 sourceSceneSessionIdentifier:(NSString *)arg3 animated:(_Bool)arg4;
- (_Bool)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(PGPictureInPictureRemoteObject *)arg1;
- (_Bool)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(PGPictureInPictureRemoteObject *)arg1;
- (_Bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(PGPictureInPictureRemoteObject *)arg1;
@end
