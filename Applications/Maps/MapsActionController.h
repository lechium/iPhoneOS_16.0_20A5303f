//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppCoordinator, AppStateManager, CarStateManager, IOSChromeViewController, RichMapsActivity;
@protocol ActionCoordination, NavActionCoordination;

@interface MapsActionController : NSObject
{
    RichMapsActivity *_pendingActivityToApplyAfterNavEnd;	// 8 = 0x8
    _Bool _isRestoringState;	// 16 = 0x10
    AppCoordinator *_appCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000008884f3
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (void)_applyActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;	// IMP=0x001000000088844f
- (void)_performAction:(id)arg1;	// IMP=0x0010000000888433
- (void)applyRichMapsActivity:(id)arg1;	// IMP=0x0010000000887e1f
- (void)getUserLocationIfneededFor:(id)arg1;	// IMP=0x0010000000887a5a
- (void)applyRichMapsActivityOrWaitForLocation:(id)arg1;	// IMP=0x00100000008878c7
- (void)navigationEnded;	// IMP=0x001000000088776b
- (_Bool)pendingAction;	// IMP=0x001000000088775d
- (void);	// IMP=0x0010000000887232
- (void)entryPointsCoordinator:(id)arg1 performErrorAction:(id)arg2;	// IMP=0x001000000088716d
@property(readonly, nonatomic) CarStateManager *carStateManager;
@property(readonly, nonatomic, getter=isCarPlayOnlyContext) _Bool carPlayOnlyContext;
- (_Bool)isNavigationTurnByTurnOrStepping;	// IMP=0x0010000000887126
@property(readonly, nonatomic, getter=isRestoringState) _Bool isRestoringState;
@property(readonly, nonatomic) AppStateManager *appStateManager;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) id <ActionCoordination> coordinator;
@property(readonly, nonatomic) IOSChromeViewController *chrome;
- (id)init;	// IMP=0x0010000000886f11
- (void)checkHandlersForActionClasses;	// IMP=0x0010000000886f0b

@end

