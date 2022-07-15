//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MapsSessionObserver-Protocol.h"

@class NavigationSession, RouteCollection;

@protocol NavigationSessionObserver <MapsSessionObserver>
- (void)navigationSession:(NavigationSession *)arg1 didChangeCurrentTransportType:(long long)arg2;
- (void)navigationSession:(NavigationSession *)arg1 didUpdateRouteCollection:(RouteCollection *)arg2;
@end
