//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class MISSING_TYPE, MusicUIServiceScreenManager, NSMutableDictionary, NSString, UIWindow;

@interface MusicUIServiceAppDelegate : UIResponder
{
    MusicUIServiceScreenManager *_screenManager;	// 8 = 0x8
    NSMutableDictionary *_environments;	// 16 = 0x10
    MISSING_TYPE *_activeWindow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000ac8d
@property(nonatomic) __weak UIWindow *activeWindow; // @synthesize activeWindow=_activeWindow;
@property(retain, nonatomic) NSMutableDictionary *environments; // @synthesize environments=_environments;
- (id)_keyWindowForScreen:(id)arg1;	// IMP=0x001000000000ac29
- (void)_sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000000a941
- (void)appEnvironmentWillDisconnect:(id)arg1;	// IMP=0x001000000000a8cd
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000000a7e5
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000000a770
- (id)init;	// IMP=0x001000000000a6b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
