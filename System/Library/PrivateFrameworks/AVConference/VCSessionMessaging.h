//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject
{
    NSMutableDictionary *topics;	// 8 = 0x8
    id controlChannelWeak;	// 16 = 0x10
    NSMutableDictionary *participants;	// 24 = 0x18
}

- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;	// IMP=0x000000000036b316
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(_Bool)arg3 toParticipant:(id)arg4;	// IMP=0x000000000036b25b
- (void)controlChannel:(id)arg1 topic:(id)arg2 payload:(id)arg3 transactionID:(unsigned int)arg4 fromParticipant:(id)arg5;	// IMP=0x000000000036b1a6
- (id)allocMessageFromPayload:(id)arg1 forTopic:(id)arg2 participantID:(id)arg3;	// IMP=0x000000000036b06c
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;	// IMP=0x000000000036b058
- (void)searchMatchingTopic:(id)arg1 payload:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;	// IMP=0x000000000036ad1b
- (id)newDictionaryFromUnpackedMessage:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;	// IMP=0x000000000036acb7
- (id)newPackedMessageFromDictionary:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;	// IMP=0x000000000036ac2a
- (id)newDictionaryFromUnpackedMessageV2:(id)arg1;	// IMP=0x000000000036a9e4
- (id)newPackedMessageFromDictionaryV2:(id)arg1;	// IMP=0x000000000036a7f9
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;	// IMP=0x000000000036a5f9
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;	// IMP=0x000000000036a43a
- (id)newDictionaryFromUnpackedMessage:(id)arg1;	// IMP=0x000000000036a1a4
- (id)newPackedMessageFromDictionary:(id)arg1;	// IMP=0x0000000000369fce
- (_Bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000369dff
- (void)sendMessageDictionary:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x0000000000369be7
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x0000000000369a77
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x0000000000369931
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 sendCompletionHandler:(CDUnknownBlockType)arg4 receiveHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000369864
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 requireReliable:(_Bool)arg4 sendMessageDictionaryCompletionHandler:(CDUnknownBlockType)arg5 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000369673
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 sendMessageDictionaryCompletionHandler:(CDUnknownBlockType)arg4 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000036964f
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 receiveHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000036962d
- (void)dealloc;	// IMP=0x000000000036952d
- (void)stopMessaging;	// IMP=0x000000000036946a
- (void)startMessaging;	// IMP=0x0000000000369332
- (void)addParticipant:(id)arg1 controlChannelProtocolVersion:(int)arg2;	// IMP=0x00000000003692e8
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;	// IMP=0x0000000000369229

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
