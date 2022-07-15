//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIUserEngagementSheetLauncher : NSObject
{
    _Bool _hasAppLostConnectivity;	// 8 = 0x8
    NSString *_lastTabIdentifier;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x001000000001db2f
- (void).cxx_destruct;	// IMP=0x000000000001efe3
@property(retain, nonatomic) NSString *lastTabIdentifier; // @synthesize lastTabIdentifier=_lastTabIdentifier;
@property(nonatomic) _Bool hasAppLostConnectivity; // @synthesize hasAppLostConnectivity=_hasAppLostConnectivity;
- (void)handleEngagementRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ee1c
- (_Bool)isAnotherSheetShowingToUser;	// IMP=0x000000000001ecb2
- (void)_handleUserNotificationAction:(long long)arg1;	// IMP=0x000000000001ebfe
- (void)_deleteKeysUsedForSheetPresentation;	// IMP=0x000000000001eb3a
- (void)_showNotificationAuthorizationSheet;	// IMP=0x000000000001e72e
- (void)_handleTabBarChange:(id)arg1;	// IMP=0x000000000001e6b2
- (void)handleAMSEngagementPresentationSheet:(_Bool)arg1;	// IMP=0x000000000001df18
- (void)handleAppEnteredBackgroundForUserEngagementSheet;	// IMP=0x000000000001ddb8
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x000000000001ddae
- (void)dealloc;	// IMP=0x000000000001dd39
- (id)_init;	// IMP=0x000000000001dc03
- (id)init;	// IMP=0x000000000001db94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
