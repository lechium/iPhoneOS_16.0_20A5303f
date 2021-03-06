//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class NAFuture;
@protocol HUConfigurationContentViewControllerDelegate;

@protocol HUConfigurationContentViewController <NSObject>

@optional
@property(nonatomic) __weak id <HUConfigurationContentViewControllerDelegate> delegate;
@property(readonly, nonatomic) _Bool canFinishConfiguration;
- (NAFuture *)cancelConfiguration;
- (NAFuture *)finishConfiguration;
@end

