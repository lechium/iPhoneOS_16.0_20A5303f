//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSSceneTransitionContext.h>

@interface FBSSceneTransitionContext (PRRenderingScene)
@property(nonatomic, setter=pr_setFinishUnlockParameters:) struct CGSize pr_finishUnlockParameters;
- (_Bool)pr_finishUnlockingWithParameters:(out struct CGSize *)arg1;	// IMP=0x0030000000050d08
@property(nonatomic, setter=pr_setUpdateSnapshot:) _Bool pr_updateSnapshot;
@property(nonatomic, setter=pr_setSignificantEvent:) unsigned long long pr_significantEvent;
@end
