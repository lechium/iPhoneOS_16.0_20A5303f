//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class TKTonePickerViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNTonePickerController : UINavigationController
{
    TKTonePickerViewController *_tonePicker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000202aec
@property(retain, nonatomic) TKTonePickerViewController *tonePicker; // @synthesize tonePicker=_tonePicker;
- (void)cancelButton:(id)arg1;	// IMP=0x0000000000202a65
- (void)doneButton:(id)arg1;	// IMP=0x0000000000202909
- (id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2;	// IMP=0x0000000000202414

// Remaining properties
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @dynamic delegate;

@end
