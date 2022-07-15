//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol MKQuickRouteManagerDelegate <NSObject>
- (_Bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (_Bool)quickRouteShouldOnlyUseAutomobile;

@optional
- (unsigned long long)preferredDirectionsTypeForQuickRoute;
@end
