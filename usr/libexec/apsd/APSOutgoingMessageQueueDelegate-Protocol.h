//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class APSOutgoingMessage, APSOutgoingMessageQueue;

@protocol APSOutgoingMessageQueueDelegate <NSObject>
- (_Bool)shouldForceShortTimeouts;
- (void)outgoingMessageQueueShortMessageTimeoutExceeded:(APSOutgoingMessageQueue *)arg1;
- (void)outgoingMessageQueue:(APSOutgoingMessageQueue *)arg1 requestCriticalMessageFlushWithPaddingLength:(unsigned long long)arg2;
- (void)outgoingMessageQueue:(APSOutgoingMessageQueue *)arg1 lateAcknowledgmentForCriticalOutgoingMessage:(APSOutgoingMessage *)arg2;
@end
