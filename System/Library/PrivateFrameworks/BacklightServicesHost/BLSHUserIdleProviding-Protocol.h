//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/BSInvalidatable-Protocol.h>

@protocol BLSHUserIdleProvidingDelegate;

@protocol BLSHUserIdleProviding <BSInvalidatable>
@property(nonatomic) _Bool shouldNotifyOfUnidle;
@property(readonly, nonatomic) double idleTimeout;
@property(nonatomic) __weak id <BLSHUserIdleProvidingDelegate> delegate;
- (void)setIdleTimeout:(double)arg1 shouldReset:(_Bool)arg2;
- (void)reset;
- (void)pause;
- (void)resume;
@end
