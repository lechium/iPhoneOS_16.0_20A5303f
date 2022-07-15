//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData, NSNumber;

@protocol VCControlChannelTransactionDelegate <NSObject>
@property(readonly) _Bool isEncryptionEnabled;
@property(readonly, nonatomic) unsigned long long nextTransactionID;
- (void)reportSignificantHandshakeDelaySymptomForParticipantID:(NSNumber *)arg1;
- (int)protocolVersionforParticipantID:(NSNumber *)arg1;
- (NSData *)lastUsedMKIBytes;
- (void)scheduleAfter:(unsigned int)arg1 block:(void (^)(void))arg2;
- (_Bool)isParticipantActive:(unsigned long long)arg1;
- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
@end
