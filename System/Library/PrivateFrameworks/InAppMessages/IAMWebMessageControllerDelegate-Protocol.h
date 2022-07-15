//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InAppMessages/NSObject-Protocol.h>

@class IAMWebMessageController, NSDictionary, NSURL;

@protocol IAMWebMessageControllerDelegate <NSObject>

@optional
- (void)webMessageControllerWebViewDidRequestAction:(IAMWebMessageController *)arg1 actionConfiguration:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)webMessageControllerWebViewDidReportEvent:(IAMWebMessageController *)arg1 event:(NSDictionary *)arg2;
- (void)webMessageControllerWebViewDidRequestOpenURL:(IAMWebMessageController *)arg1 url:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (void)webMessageControllerWebViewDidRequestClose:(IAMWebMessageController *)arg1;
@end
