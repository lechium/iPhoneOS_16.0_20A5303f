//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class NSError;

@protocol ASDClipSessionChannel <NSObject>
- (void)channelStateDidClose;
- (void)channelStateDidOpen;
- (void)channelNotifyDidProgress:(double)arg1;
- (void)channelNotifyDidInstallPlaceholder;
- (void)channelNotifyDidFailWithError:(NSError *)arg1;
- (void)channelNotifyDidComplete;
@end
