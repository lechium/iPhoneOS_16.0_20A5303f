//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEvent, EKEventAttachmentCellController, UIViewController;

@protocol EKEventAttachmentCellControllerDelegate <NSObject>
- (EKEvent *)owningEventForAttachmentCellController:(EKEventAttachmentCellController *)arg1;
- (UIViewController *)parentViewControllerForAttachmentCellController:(EKEventAttachmentCellController *)arg1;
@end

