//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSDate, NSString, UIWindow;

@interface WFAppDelegate : UIResponder
{
    long long _initializationResult;	// 8 = 0x8
    NSDate *_lastForegroundDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000084a59
@property(retain, nonatomic) NSDate *lastForegroundDate; // @synthesize lastForegroundDate=_lastForegroundDate;
@property(nonatomic) long long initializationResult; // @synthesize initializationResult=_initializationResult;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x00100000000849f6
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000849e3
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000084869
- (void)applicationShouldRequestHealthAuthorization:(id)arg1;	// IMP=0x001000000008481e
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0010000000084723
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00100000000846ea
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000008457b
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000084493
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000008426d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
