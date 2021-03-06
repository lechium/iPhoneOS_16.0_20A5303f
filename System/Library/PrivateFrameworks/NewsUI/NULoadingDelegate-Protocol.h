//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSError;

@protocol NULoadingDelegate <NSObject>

@optional
- (void)loadingDidFinishWithError:(NSError *)arg1;
- (void)loadingWillFinishWithError:(NSError *)arg1;
- (void)loadingDidUpdateProgress:(double)arg1;
- (void)loadingDidStart;
- (void)loadingWillStart;
@end

