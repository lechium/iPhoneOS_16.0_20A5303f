//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@protocol CNContactListActionDelegate;

@protocol CNContactListAction <NSObject>
@property(nonatomic) __weak id <CNContactListActionDelegate> delegate;
- (_Bool)shouldReloadListOnCompletion;
- (_Bool)shouldClearSelectionOnCompletion;
- (_Bool)editRequiresAuthorization;
- (void)performAction;
@end
