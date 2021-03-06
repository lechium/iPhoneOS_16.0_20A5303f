//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, SDStreamHandler;

@protocol SDStreamHandlerDelegate <NSObject>
- (void)streamHandler:(SDStreamHandler *)arg1 didReceiveMessage:(NSData *)arg2;

@optional
- (void)streamHandler:(SDStreamHandler *)arg1 didReceiveStreamData:(NSData *)arg2;
- (void)streamHandler:(SDStreamHandler *)arg1 bufferSpaceChanged:(_Bool)arg2;
- (void)streamHandlerDidClose:(SDStreamHandler *)arg1 withError:(NSError *)arg2;
- (void)streamHandlerDidClose:(SDStreamHandler *)arg1;
@end

