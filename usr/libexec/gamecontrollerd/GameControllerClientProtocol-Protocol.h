//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GCController, NSData;

@protocol GameControllerClientProtocol <NSObject>
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(_Bool)arg5;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(_Bool)arg4;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(NSData *)arg2;
- (void)removeController:(GCController *)arg1;
- (void)addController:(GCController *)arg1;

@optional
- (void)addControllerForAppStoreRemote:(GCController *)arg1;
@end
