//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class NSError, NSMutableURLRequest, NSURLRequest, RemoteUIController;

@protocol AAUIGrandSlamRemoteUIPresenterDelegate <NSObject>
- (void)remoteUIRequestComplete:(NSURLRequest *)arg1 error:(NSError *)arg2;

@optional
- (void)remoteUIDidEndFlow:(RemoteUIController *)arg1;
- (void)remoteUIWillLoadRequest:(NSMutableURLRequest *)arg1;
- (void)remoteUIDidDismiss:(RemoteUIController *)arg1;
@end

