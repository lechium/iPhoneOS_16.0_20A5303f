//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEONavdClientInfo, GEORouteHypothesis, NSData, NSString;

@protocol GEONavdProxyObserver
- (void)navdProxyReceivedHypothesis:(GEORouteHypothesis *)arg1 forClient:(GEONavdClientInfo *)arg2;
- (void)navdProxyReceivedData:(NSData *)arg1 ofType:(NSString *)arg2;
@end

