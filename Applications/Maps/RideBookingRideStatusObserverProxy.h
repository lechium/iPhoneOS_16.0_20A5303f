//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol RideBookingRideStatusObserverProxyDelegate;

@interface RideBookingRideStatusObserverProxy : NSObject
{
    id <RideBookingRideStatusObserverProxyDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000004313da
@property(nonatomic) __weak id <RideBookingRideStatusObserverProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAnalyticsWithRideStatus:(id)arg1 feedbackError:(id)arg2;	// IMP=0x0010000000431209
- (void)_updateAnalyticsWithRideStatus:(id)arg1 cancelError:(id)arg2 handling:(_Bool)arg3;	// IMP=0x0010000000431033
- (void)_updateAnalyticsWithRideStatus:(id)arg1;	// IMP=0x0010000000430da6
- (void)rideStatusMapDidChange:(id)arg1;	// IMP=0x0010000000430aad
- (void)cancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004306a6
- (void)checkIfCanCancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000430252
- (void)sendFeedbackForRideStatus:(id)arg1 feedbackRating:(id)arg2 feedbackTip:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000042fe0b
- (void)updateRideStatusMap;	// IMP=0x001000000042fd9d
- (id)initWithDelegate:(id)arg1;	// IMP=0x001000000042fcf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

