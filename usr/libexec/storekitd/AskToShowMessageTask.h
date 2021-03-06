//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, StoreKitMessageInfo, StoreKitMessagesManager, _TtC9storekitd6Client;
@protocol SKClientProtocol;

@interface AskToShowMessageTask
{
    _TtC9storekitd6Client *_client;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    StoreKitMessagesManager *_manager;	// 24 = 0x18
    id <SKClientProtocol> _remoteObject;	// 32 = 0x20
    StoreKitMessageInfo *_message;	// 40 = 0x28
    NSURL *_pendingURL;	// 48 = 0x30
    NSURL *_urlToDisplay;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000008e378
@property(readonly, nonatomic) NSURL *urlToDisplay; // @synthesize urlToDisplay=_urlToDisplay;
@property(retain, nonatomic) NSURL *pendingURL; // @synthesize pendingURL=_pendingURL;
- (void)_finishPromiseWithURLOrError:(id)arg1 error:(id)arg2 promise:(id)arg3;	// IMP=0x001000000008e275
- (id)_hasMessageListenerWithRemoteObject:(id)arg1;	// IMP=0x001000000008e17c
- (_Bool)_hasSK2MessageListenerWithRemoteObject:(id)arg1;	// IMP=0x001000000008e101
- (id)_askToShowMessagePromiseWithRemoteObject:(id)arg1;	// IMP=0x001000000008dfe9
- (void)_sendMessageToSK2ListenerWithType:(long long)arg1 remoteObject:(id)arg2;	// IMP=0x001000000008ddf9
- (id)_dialogsDisabledError;	// IMP=0x001000000008ddd9
- (id)_askToShowMessage;	// IMP=0x001000000008d5b8
- (id)_askToShowMessageOctane;	// IMP=0x001000000008d033
- (void)main;	// IMP=0x001000000008cc73
- (id)initWithClient:(id)arg1 messageInfo:(id)arg2 remoteObject:(id)arg3 logKey:(id)arg4;	// IMP=0x001000000008cb19

@end

