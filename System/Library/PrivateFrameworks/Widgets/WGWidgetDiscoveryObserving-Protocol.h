//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Widgets/NSObject-Protocol.h>

@class NSSet, NSString, WGWidgetDiscoveryController;

@protocol WGWidgetDiscoveryObserving <NSObject>

@optional
- (void)widgetDiscoveryControllerSignificantWidgetsChange:(WGWidgetDiscoveryController *)arg1;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 orderDidChangeForWidgetIdentifiers:(NSSet *)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeHiddenInGroup:(NSString *)arg3;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithIdentifier:(NSString *)arg2 shouldBecomeVisibleInGroup:(NSString *)arg3;
@end

