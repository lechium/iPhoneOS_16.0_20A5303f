//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MapsAction : NSObject
{
    _Bool _needsUserLocation;	// 8 = 0x8
    double _userLocationDesiredAccuracy;	// 16 = 0x10
}

@property(readonly, nonatomic) double userLocationDesiredAccuracy; // @synthesize userLocationDesiredAccuracy=_userLocationDesiredAccuracy;
@property(readonly, nonatomic) _Bool needsUserLocation; // @synthesize needsUserLocation=_needsUserLocation;
@property(readonly, nonatomic) _Bool shouldResetUI;
@property(readonly, nonatomic) _Bool forceEndNavigation;
@property(readonly, nonatomic) _Bool isCompatibleWithRestorationTask;
@property(readonly, nonatomic) _Bool isCompatibleWithNavigation;
- (void)setUserLocationAccuracy:(double)arg1;	// IMP=0x0010000000173e9e

@end
