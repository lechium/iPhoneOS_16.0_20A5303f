//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSFileHandle, SDStreamHandler, SDStreamManager, SFCompanionService;

@protocol SDCompanionPublisherProtocol <NSObject>

@optional
- (void)manager:(SDStreamManager *)arg1 connectedToService:(SFCompanionService *)arg2 withFileHandle:(NSFileHandle *)arg3 acceptHandler:(void (^)(_Bool))arg4;
- (void)publisher:(SDStreamManager *)arg1 companionStreamForService:(SFCompanionService *)arg2 streamHandler:(SDStreamHandler *)arg3;
- (void)publisher:(SDStreamManager *)arg1 didConnectToService:(SFCompanionService *)arg2 withStreamHandler:(SDStreamHandler *)arg3;
@end
