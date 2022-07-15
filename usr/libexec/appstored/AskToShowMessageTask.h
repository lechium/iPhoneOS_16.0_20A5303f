//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, StoreKitClient, StoreKitMessageInfo, StoreKitMessagesManager;
@protocol ASDStoreKitClientProtocol;

@interface AskToShowMessageTask
{
    StoreKitClient *_client;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    StoreKitMessagesManager *_manager;	// 24 = 0x18
    id <ASDStoreKitClientProtocol> _remoteObject;	// 32 = 0x20
    StoreKitMessageInfo *_message;	// 40 = 0x28
    NSURL *_pendingURL;	// 48 = 0x30
    NSURL *_urlToDisplay;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000021c3be
@property(readonly, nonatomic) NSURL *urlToDisplay; // @synthesize urlToDisplay=_urlToDisplay;
@property(retain, nonatomic) NSURL *pendingURL; // @synthesize pendingURL=_pendingURL;
- (void)_finishPromiseWithURLOrError:(id)arg1 error:(id)arg2 promise:(id)arg3;	// IMP=0x001000000021c2bb
- (id)_hasMessageListenerWithRemoteObject:(id)arg1;	// IMP=0x001000000021c1c2
- (_Bool)_hasSK2MessageListenerWithRemoteObject:(id)arg1;	// IMP=0x001000000021c147
- (id)_askToShowMessagePromiseWithRemoteObject:(id)arg1;	// IMP=0x001000000021c02f
- (void)_sendMessageToSK2ListenerWithType:(long long)arg1 remoteObject:(id)arg2;	// IMP=0x001000000021be69
- (id)_dialogsDisabledError;	// IMP=0x001000000021be49
- (id)_askToShowMessage;	// IMP=0x001000000021b544
- (id)_askToShowMessageOctane;	// IMP=0x001000000021b01b
- (void)main;	// IMP=0x001000000021aca7
- (id)initWithClient:(id)arg1 messageInfo:(id)arg2 remoteObject:(id)arg3;	// IMP=0x001000000021ab71

@end
