//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSError;
@protocol SiriCoreConnectionProvider;

@protocol SiriCoreConnectionProviderDelegate <NSObject>
- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedError:(NSError *)arg2;

@optional
- (void)connectionProviderReceivedBetterRouteNotification:(id <SiriCoreConnectionProvider>)arg1;
- (void)connectionProvider:(id <SiriCoreConnectionProvider>)arg1 receivedViabilityChangeNotification:(_Bool)arg2;
@end
