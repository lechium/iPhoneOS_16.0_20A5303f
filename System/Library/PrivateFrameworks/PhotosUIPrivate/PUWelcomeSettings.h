//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUWelcomeSettings : PXSettings
{
    _Bool _alwaysShowWhatsNewWelcome;	// 8 = 0x8
    _Bool _alwaysShowCloudPhotoWelcome;	// 9 = 0x9
}

+ (id)settingsControllerModule;	// IMP=0x00100000004ee92e
+ (id)sharedInstance;	// IMP=0x00100000004ee8fe
@property(nonatomic) _Bool alwaysShowCloudPhotoWelcome; // @synthesize alwaysShowCloudPhotoWelcome=_alwaysShowCloudPhotoWelcome;
@property(nonatomic) _Bool alwaysShowWhatsNewWelcome; // @synthesize alwaysShowWhatsNewWelcome=_alwaysShowWhatsNewWelcome;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x00000000004ee8a9
- (void)setDefaultValues;	// IMP=0x00000000004ee84f
- (id)parentSettings;	// IMP=0x00000000004ee836

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
