//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexWeb/NSObject-Protocol.h>

@class SWMediaSettings, WKUserContentController, WKWebViewConfiguration;

@protocol SWWebViewConfigurationFactory <NSObject>
- (WKWebViewConfiguration *)createWebViewConfigurationWithUserContentController:(WKUserContentController *)arg1 mediaSettings:(SWMediaSettings *)arg2;
@end

