//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEventStore, EKShareePickerViewController;

@protocol EKShareePickerViewControllerDelegate <NSObject>
- (EKEventStore *)eventStoreForShareePickerViewController:(EKShareePickerViewController *)arg1;
- (void)shareePickerViewController:(EKShareePickerViewController *)arg1 didCompleteWithAction:(int)arg2;
@end

