//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBMessage;

@protocol _INPBSendMessageIntentResponse <NSObject>
+ (Class)sentMessagesType;
@property(readonly, nonatomic) unsigned long long sentMessagesCount;
@property(copy, nonatomic) NSArray *sentMessages;
@property(readonly, nonatomic) _Bool hasSentMessage;
@property(retain, nonatomic) _INPBMessage *sentMessage;
- (_INPBMessage *)sentMessagesAtIndex:(unsigned long long)arg1;
- (void)addSentMessages:(_INPBMessage *)arg1;
- (void)clearSentMessages;
@end
