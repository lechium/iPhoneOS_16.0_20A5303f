//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBDeviceApplicationSceneHandle, SBPIPSceneContentContainerAdapter, UIGestureRecognizer;

@protocol SBPIPSceneContentContainerAdapterDelegate <NSObject>
- (void)contentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1 handleDestructionRequestForSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (void)contentContainerAdapterPanGestureDidEnd:(SBPIPSceneContentContainerAdapter *)arg1;
- (void)contentContainerAdapterDidEndInteraction:(SBPIPSceneContentContainerAdapter *)arg1;
- (void)contentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1 willBeginInteractionWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (_Bool)contentContainerAdapterShouldUpdateUIForStashing:(SBPIPSceneContentContainerAdapter *)arg1;
- (void)contentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1 willUpdateStashState:(_Bool)arg2;
- (_Bool)initialStashStateForContentContainerAdapter:(SBPIPSceneContentContainerAdapter *)arg1;
@end

