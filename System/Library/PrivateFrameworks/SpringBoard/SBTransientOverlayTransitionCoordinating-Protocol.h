//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBTransientOverlayTransitionContextProviding;

@protocol SBTransientOverlayTransitionCoordinating <NSObject>
- (void)finalizeTransitionWithContextProvider:(id <SBTransientOverlayTransitionContextProviding>)arg1;
- (void)startTransitionWithContextProvider:(id <SBTransientOverlayTransitionContextProviding>)arg1;
@end
