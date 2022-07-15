//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CNSharingProfileLogger : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
}

+ (id)log;	// IMP=0x00600000001d6d58
- (void).cxx_destruct;	// IMP=0x00000000001d6d48
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)logSettingsReturningEmptyImage;	// IMP=0x00000000001d6cde
- (void)logSettingsReturningEmptyImageForNoChange;	// IMP=0x00000000001d6c97
- (void)logSettingsReturningDefaultMonogram;	// IMP=0x00000000001d6c50
- (void)logSettingsReturningSharingResultWithDescription:(id)arg1;	// IMP=0x00000000001d6bc2
- (void)logErrorGeneratingAvatarForPhotoPickerWithDescription:(id)arg1;	// IMP=0x00000000001d6b34
- (void)logSettingsSuccessSavingContact;	// IMP=0x00000000001d6aed
- (void)logSettingsErrorSettingMeContactWithDescription:(id)arg1;	// IMP=0x00000000001d6a57
- (void)logSettingsSettingMeContact;	// IMP=0x00000000001d6a10
- (void)logSettingsErrorSavingContactWithDescription:(id)arg1;	// IMP=0x00000000001d697a
- (void)logSettingsSavingContact:(id)arg1;	// IMP=0x00000000001d68ec
- (void)logOnboardingReturningNonAnimojiItem;	// IMP=0x00000000001d689d
- (void)logOnboardingReturningEmptyImage;	// IMP=0x00000000001d684e
- (void)logOnboardingReturningDefaultMonogram;	// IMP=0x00000000001d6807
- (void)logOnboardingReturningSharingResultWithDescription:(id)arg1;	// IMP=0x00000000001d6779
- (void)logOnboardingAvatarCarouselErrorCreatingContactImageWithDescription:(id)arg1;	// IMP=0x00000000001d66e3
- (void)logOnboardingSuccessSavingContact;	// IMP=0x00000000001d669c
- (void)logOnboardingErrorSettingMeContactWithDescription:(id)arg1;	// IMP=0x00000000001d6606
- (void)logOnboardingSettingMeContact;	// IMP=0x00000000001d65bf
- (void)logOnboardingErrorSavingContactWithDescription:(id)arg1;	// IMP=0x00000000001d6529
- (void)logOnboardingUpdatingContactWithIdentifier:(id)arg1;	// IMP=0x00000000001d649b
- (void)logOnboardingAddingContact;	// IMP=0x00000000001d6454
- (void)logOnboardingSavingContact:(id)arg1;	// IMP=0x00000000001d63c6
- (void)logOnboardingErrorSavingMeCardImageToRecentsWithDescription:(id)arg1;	// IMP=0x00000000001d6338
- (void)logOnboardingSuccessSavingMeCardImageToRecents;	// IMP=0x00000000001d62f1
- (void)logOnboardingSavingMeCardImageToRecentsForIdentifier:(id)arg1;	// IMP=0x00000000001d6263
- (id)init;	// IMP=0x00000000001d61f9

@end
