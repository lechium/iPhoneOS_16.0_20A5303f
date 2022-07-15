//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNUserOptions, NSUserDefaults;

@interface NavigationSettingsMonitor : NSObject
{
    _Bool _isCarPlay;	// 8 = 0x8
    long long _transportType;	// 16 = 0x10
    MNUserOptions *_userOptions;	// 24 = 0x18
    NSUserDefaults *_userDefaults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000032249
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000320f7
- (void)_localeMetricDidChange:(id)arg1;	// IMP=0x00100000000320e0
- (void)_updateUserOptionsAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000031cff
- (void)_stopObserving;	// IMP=0x0010000000031a15
- (void)_startObserving;	// IMP=0x001000000003169f
@property(readonly) MNUserOptions *userOptions; // @synthesize userOptions=_userOptions;
@property long long transportType; // @synthesize transportType=_transportType;
@property _Bool isCarPlay; // @synthesize isCarPlay=_isCarPlay;
- (void)dealloc;	// IMP=0x00100000000314cc
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x001000000003143b

@end
