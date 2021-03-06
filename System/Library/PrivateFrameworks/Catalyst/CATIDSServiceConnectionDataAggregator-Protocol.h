//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CATActiveIDSServiceConnectionContentSendData;
@protocol CATIDSServiceConnectionDataAggregatorDelegate;

@protocol CATIDSServiceConnectionDataAggregator
@property(readonly, nonatomic) unsigned long long receivedSequenceNumber;
@property(nonatomic) __weak id <CATIDSServiceConnectionDataAggregatorDelegate> delegate;
- (void)receiveExpectedSequenceNumber:(unsigned long long)arg1;
- (void)receiveDataContent:(CATActiveIDSServiceConnectionContentSendData *)arg1;
@end

