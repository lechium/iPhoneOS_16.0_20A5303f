//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNPhotoPickerProviderItem, CNSharingProfileOnboardingPosePickerController;

@protocol CNSharingProfileOnboardingPosePickerControllerDelegate <NSObject>
- (void)posePickerController:(CNSharingProfileOnboardingPosePickerController *)arg1 didFinishWithProviderItem:(CNPhotoPickerProviderItem *)arg2;
- (void)posePickerControllerDidSelectBack:(CNSharingProfileOnboardingPosePickerController *)arg1;
- (void)posePickerControllerDidSelectSetupLater:(CNSharingProfileOnboardingPosePickerController *)arg1;
@end

