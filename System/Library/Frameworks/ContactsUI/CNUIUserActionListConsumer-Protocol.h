//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@protocol CNUIUserActionListConsumerDelegate, CNUIUserActionListDataSource;

@protocol CNUIUserActionListConsumer <NSObject>

@optional
- (id <CNUIUserActionListConsumerDelegate>)delegate;
- (id <CNUIUserActionListDataSource>)dataSource;
@end
