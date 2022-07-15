//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DirectionsPlan, NSString, NavigationSession, PlatformController;

@interface NavigationStateUpdater : NSObject
{
    NavigationSession *_navigationSession;	// 8 = 0x8
    DirectionsPlan *_directionPlan;	// 16 = 0x10
    PlatformController *_platformController;	// 24 = 0x18
}

+ (long long)creationPreference;	// IMP=0x00200000007570a0
- (void).cxx_destruct;	// IMP=0x0020000000757b09
@property(nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
@property(retain, nonatomic) DirectionsPlan *directionPlan; // @synthesize directionPlan=_directionPlan;
@property(retain, nonatomic) NavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000757a17
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x0010000000757a11
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x0010000000757a0b
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0010000000757949
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000757881
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000075787b
- (void)_saveDirectionPlan;	// IMP=0x001000000075754a
- (void)updateMapsActivityWithStack:(id)arg1;	// IMP=0x00100000007570ab
- (void)dealloc;	// IMP=0x001000000075702b
- (id)initWithPlatformController:(id)arg1;	// IMP=0x0010000000756f83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
