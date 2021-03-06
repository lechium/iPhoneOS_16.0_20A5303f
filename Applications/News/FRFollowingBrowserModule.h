//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FRFavoritesPickerLauncher;
@protocol FCCoreConfiguration;

@interface FRFollowingBrowserModule : NSObject
{
    FRFavoritesPickerLauncher *_favoriteLaunchPicker;	// 8 = 0x8
    id <FCCoreConfiguration> _appConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008ce05
@property(readonly, copy, nonatomic) id <FCCoreConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain, nonatomic) FRFavoritesPickerLauncher *favoriteLaunchPicker; // @synthesize favoriteLaunchPicker=_favoriteLaunchPicker;
- (id)createViewControllerUsingViewController:(id)arg1 pickerIdentifier:(id)arg2 eventDelegate:(id)arg3 dismissWhenDone:(_Bool)arg4;	// IMP=0x001000000008cc5a
- (id)createViewControllerUsingViewController:(id)arg1 sceneType:(long long)arg2 customButtonTitle:(id)arg3 eventDelegate:(id)arg4 dismissWhenDone:(_Bool)arg5;	// IMP=0x001000000008cb89
- (id)initWithFavoritePickerLauncher:(id)arg1 appConfiguration:(id)arg2;	// IMP=0x001000000008caf0

@end

