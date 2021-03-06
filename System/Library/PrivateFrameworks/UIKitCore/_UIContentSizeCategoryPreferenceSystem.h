//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIContentSizeCategoryPreference.h"

__attribute__((visibility("hidden")))
@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference
{
    _Bool _observingNotification;	// 24 = 0x18
    _Bool _didCheckForPreferredContentSizeCategoryOverride;	// 25 = 0x19
    _Bool _applicationOverridesPreferredContentSizeCategory;	// 26 = 0x1a
    UIContentSizeCategoryPreference *_overridePreferences;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000010eca70
@property(retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences; // @synthesize overridePreferences=_overridePreferences;
- (void)_endObservingPreferredContentSizeChangedNotification;	// IMP=0x00000000010ec9ad
- (void)_beginObservingPreferredContentSizeChangedNotification;	// IMP=0x00000000010ec8c8
- (void)setPreferredContentSizeCategory:(id)arg1;	// IMP=0x00000000010ec749
- (void)_postContentSizeCategoryDidChangeNotification;	// IMP=0x00000000010ec56c
- (void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(_Bool)arg3;	// IMP=0x00000000010ec243
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(_Bool)arg1;	// IMP=0x00000000010ec1ad
- (id)description;	// IMP=0x00000000010ebee1
- (void)dealloc;	// IMP=0x00000000010ebea3
- (void)checkForChanges;	// IMP=0x00000000010ebe7c
- (void)_readAndObservePreferences;	// IMP=0x00000000010ebe4c
- (id)initAsSystem;	// IMP=0x00000000010ebe23

@end

