//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSSocketPairConnection, IDSSocketPairMessage, NSData;

@protocol IDSSocketPairConnectionDelegate <NSObject>

@optional
- (void)connectionBecameEmpty;
- (void)connectionDidClose;
- (void)didReceiveDataMessage:(IDSSocketPairMessage *)arg1;
- (void)connectionDidReceiveBytes:(IDSSocketPairConnection *)arg1;
- (void)connectionBecameEmpty:(IDSSocketPairConnection *)arg1;
- (void)connectionDidClose:(IDSSocketPairConnection *)arg1;
- (void)connectionDidReachInFlightMessageLowWaterMark:(IDSSocketPairConnection *)arg1;
- (void)connection:(IDSSocketPairConnection *)arg1 didReceiveDataMessage:(IDSSocketPairMessage *)arg2;
- (void)connection:(IDSSocketPairConnection *)arg1 didReceiveData:(NSData *)arg2 withIdentifier:(unsigned int)arg3;
@end
