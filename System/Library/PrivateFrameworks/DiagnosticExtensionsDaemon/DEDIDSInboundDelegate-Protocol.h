//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class DEDBugSession, DEDBugSessionConfiguration, DEDDevice, NSDictionary, NSString;

@protocol DEDIDSInboundDelegate <NSObject>
- (DEDBugSession *)idsInbound_sessionForIdentifier:(NSString *)arg1;
- (void)idsInbound_didAbortSessionWithID:(NSString *)arg1;
- (void)idsInbound_didStartBugSessionWithInfo:(NSDictionary *)arg1;
- (void)idsInbound_startBugSessionWithIdentifier:(NSString *)arg1 configuration:(DEDBugSessionConfiguration *)arg2 caller:(DEDDevice *)arg3 target:(DEDDevice *)arg4;
@end
