//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/NSObject-Protocol.h>

@class EKEventStore, NSString;

@protocol EKJunkInvitationProtocol_Private <NSObject>
@property(readonly, nonatomic) EKEventStore *eventStore;
@property(readonly, nonatomic) _Bool supportsJunkReporting;
@property(readonly, nonatomic) NSString *sendersPhoneNumber;
@property(readonly, nonatomic) NSString *sendersEmail;
- (_Bool)couldBeJunk;
@end
