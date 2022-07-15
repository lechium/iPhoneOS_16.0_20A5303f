//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/NSObject-Protocol.h>

@class INIntent, WFWidgetConfigurationViewController;

@protocol WFWidgetConfigurationViewControllerDelegate <NSObject>
- (void)widgetConfigurationViewController:(WFWidgetConfigurationViewController *)arg1 didFinishWithIntent:(INIntent *)arg2;

@optional
- (void)widgetConfigurationViewController:(WFWidgetConfigurationViewController *)arg1 preferredContentSizeDidChange:(struct CGSize)arg2;
@end
