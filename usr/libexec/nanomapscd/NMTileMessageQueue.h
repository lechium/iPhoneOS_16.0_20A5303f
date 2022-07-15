//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSMutableDictionary;

@interface NMTileMessageQueue
{
    NSMutableDictionary *_requestIdentifierToMessages;	// 8 = 0x8
    NSMutableDictionary *_requestIdentifierToReply;	// 16 = 0x10
    NSLock *_requestIdentifierMapLock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000013116
- (_Bool)removeAllForRequestIdentifier:(id)arg1;	// IMP=0x0010000000012e6a
- (_Bool)removeReplyForRequestIdentifier:(id)arg1;	// IMP=0x0010000000012d26
- (_Bool)removeMessageForRequestIdentifier:(id)arg1;	// IMP=0x0010000000012ade
- (void)dequeueMessageIfPossible:(CDUnknownBlockType)arg1 orReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000001274c
- (void)enqueueReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3;	// IMP=0x0010000000012651
- (void)enqueueMessage:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012458
- (id)init;	// IMP=0x00100000000123a5

@end
