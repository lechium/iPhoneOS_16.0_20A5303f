//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKEvent, EKEventAttachmentEditViewController;

@protocol EKEventAttachmentEditViewControllerDelegate <NSObject>

@optional
- (void)attachmentEditViewController:(EKEventAttachmentEditViewController *)arg1 attachmentDidChange:(long long)arg2;
- (EKEvent *)owningEventForAttachmentEditViewController:(EKEventAttachmentEditViewController *)arg1;
@end

