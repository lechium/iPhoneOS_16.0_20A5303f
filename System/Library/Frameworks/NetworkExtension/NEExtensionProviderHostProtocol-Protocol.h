//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NSError, NSString;

@protocol NEExtensionProviderHostProtocol <NSObject>
- (void)displayMessage:(NSString *)arg1 message:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)startedWithError:(NSError *)arg1;
@end

