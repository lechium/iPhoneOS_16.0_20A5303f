//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSActivityPickerViewController, UIView;
@protocol FCActivityDescribing;

@protocol CSActivityPickerViewControllerDelegate <NSObject>
- (id <FCActivityDescribing>)activityPickerViewControllerRepresentedActivityForDismissal:(CSActivityPickerViewController *)arg1;
- (id <FCActivityDescribing>)activityPickerViewControllerRepresentedActivityForPresentation:(CSActivityPickerViewController *)arg1;
- (UIView *)activityPickerViewControllerPresentingView:(CSActivityPickerViewController *)arg1;
@end

