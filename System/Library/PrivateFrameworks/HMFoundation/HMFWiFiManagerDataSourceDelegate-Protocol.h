//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/NSObject-Protocol.h>

@protocol HMFWiFiManagerDataSource;

@protocol HMFWiFiManagerDataSourceDelegate <NSObject>
- (void)currentNetworkDidChangeForDataSource:(id <HMFWiFiManagerDataSource>)arg1;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeLinkAvailability:(_Bool)arg2;
- (void)dataSource:(id <HMFWiFiManagerDataSource>)arg1 didChangeWoWState:(_Bool)arg2;
@end

