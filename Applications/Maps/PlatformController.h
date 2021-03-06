//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AuxiliaryTasksManager, EntryPointsCoordinator, GCDTimer, GEOObserverHashTable, NGChromeViewController, NSArray, NSMutableArray, NSMutableSet;
@protocol MapsSession, OS_dispatch_queue;

@interface PlatformController : NSObject
{
    NSObject<OS_dispatch_queue> *_stackLock;	// 8 = 0x8
    EntryPointsCoordinator *_entryPointsCoordinator;	// 16 = 0x10
    AuxiliaryTasksManager *_auxiliaryTasksManager;	// 24 = 0x18
    _Bool _isPrimary;	// 32 = 0x20
    _Bool _didReplaySessions;	// 33 = 0x21
    NGChromeViewController *_chromeViewController;	// 40 = 0x28
    id <MapsSession> _previousSession;	// 48 = 0x30
    NSMutableArray *_stack;	// 56 = 0x38
    GEOObserverHashTable *_observers;	// 64 = 0x40
    NSMutableSet *_auxiliaryTaskCreationPreferencesSatisfied;	// 72 = 0x48
    GCDTimer *_mapViewRenderTimeoutTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00100000008761e2
@property(nonatomic) _Bool didReplaySessions; // @synthesize didReplaySessions=_didReplaySessions;
@property(retain, nonatomic) GCDTimer *mapViewRenderTimeoutTimer; // @synthesize mapViewRenderTimeoutTimer=_mapViewRenderTimeoutTimer;
@property(retain, nonatomic) NSMutableSet *auxiliaryTaskCreationPreferencesSatisfied; // @synthesize auxiliaryTaskCreationPreferencesSatisfied=_auxiliaryTaskCreationPreferencesSatisfied;
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) id <MapsSession> previousSession; // @synthesize previousSession=_previousSession;
@property(nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) AuxiliaryTasksManager *auxiliaryTasksManager; // @synthesize auxiliaryTasksManager=_auxiliaryTasksManager;
- (void)mapViewDidBecomeFullyDrawnNotification:(id)arg1;	// IMP=0x0010000000876008
- (void)replaySessions;	// IMP=0x00100000008759fc
- (void)prepareToReplaySessions;	// IMP=0x00100000008757a1
- (id)description;	// IMP=0x0010000000875719
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000875623
- (void)addObserver:(id)arg1;	// IMP=0x001000000087552d
- (void)clearIfCurrentSessionIsKindOfClass:(Class)arg1;	// IMP=0x0010000000875408
- (void)clearIfCurrentSession:(id)arg1;	// IMP=0x00100000008752e0
- (void)clearSessions;	// IMP=0x001000000087521b
- (void)removeSession:(id)arg1;	// IMP=0x001000000087509d
- (void)popUntil:(CDUnknownBlockType)arg1;	// IMP=0x0010000000874bee
- (void)replaceCurrentSessionWithSession:(id)arg1;	// IMP=0x0010000000874a1b
- (void)popIfCurrentSession:(id)arg1;	// IMP=0x00100000008748f3
- (void)popSession;	// IMP=0x00100000008747a4
- (void)pushSession:(id)arg1;	// IMP=0x00100000008744a4
@property(readonly, nonatomic) NSArray *sessionStack;
@property(readonly, nonatomic) id <MapsSession> currentSession;
- (void)_handleInitialRouteLoaded:(id)arg1;	// IMP=0x001000000087413f
- (void)_createAuxiliaryTasksIfNecessaryForPreference:(long long)arg1;	// IMP=0x001000000087304b
- (void)_createAllAuxiliaryTasks;	// IMP=0x0010000000873000
- (_Bool)_shouldCreateAuxiliaryTask:(Class)arg1 forCreationPreference:(long long)arg2;	// IMP=0x0010000000872f5c
@property(readonly, nonatomic) EntryPointsCoordinator *entryPointsCoordinator;
- (void)dealloc;	// IMP=0x0010000000872dd9
- (id)init;	// IMP=0x00100000008729b7
- (id)directionsDataSource;	// IMP=0x001000000035ad4f

@end

