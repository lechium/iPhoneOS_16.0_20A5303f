//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ASDExtensionRequestCleanupXPCInterface-Protocol.h"
#import "ASDTestFlightServiceExtensionXPCInterface-Protocol.h"

@class ASDBundle, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol ASDTestFlightServiceExtensionRemoteXPCInterface <ASDTestFlightServiceExtensionXPCInterface, ASDExtensionRequestCleanupXPCInterface>
- (void)invokeCommand:(NSString *)arg1 withArguments:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)reloadAppsFromServerWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)didReachTerminalPhaseWithBetaBundle:(ASDBundle *)arg1 terminalPhase:(long long)arg2 error:(NSError *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)didReceivePushMessages:(NSArray *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)didReceivePushToken:(NSData *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end
