//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactActionsController, CNUIUserActionItem, NSArray;

@protocol CNContactActionsControllerDelegate <NSObject>
- (void)contactActionsController:(CNContactActionsController *)arg1 didSelectAction:(CNUIUserActionItem *)arg2;

@optional
- (void)contactActionsController:(CNContactActionsController *)arg1 didUpdateWithMenu:(NSArray *)arg2;
@end

