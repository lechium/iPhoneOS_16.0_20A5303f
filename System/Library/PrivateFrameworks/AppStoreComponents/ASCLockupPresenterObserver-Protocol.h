//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class NSError;

@protocol ASCLockupPresenterObserver <NSObject>
- (void)lockupPresenterDidFailRequestWithError:(NSError *)arg1;
- (void)lockupPresenterDidFinishRequest;
- (void)lockupPresenterDidBeginRequest;
@end
