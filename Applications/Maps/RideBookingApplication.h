//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INCExtensionConnection, NSString, _MXExtension;
@protocol OS_dispatch_queue, RideBookingApplicationRideStatusDelegate;

@interface RideBookingApplication : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    INCExtensionConnection *_getRideStatusConnection;	// 16 = 0x10
    id <RideBookingApplicationRideStatusDelegate> delegate;	// 24 = 0x18
    _MXExtension *_extension;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSString *_version;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x001000000024eebe
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _MXExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <RideBookingApplicationRideStatusDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)_statusWithListRideOptionsResponse:(id)arg1;	// IMP=0x001000000024e3e4
- (id)_statusWithRideOption:(id)arg1 requestRideIntent:(id)arg2 requestRideEtaResponse:(id)arg3;	// IMP=0x001000000024dd50
- (id)_statusWithRequestRideStatusIntentResponse:(id)arg1;	// IMP=0x001000000024da3f
- (id)_statusWithGetRideStatusIntentResponse:(id)arg1;	// IMP=0x001000000024d72e
- (id)_passengersChoiceFromAvailablePartySizeOptions:(id)arg1 optionPriceRange:(id)arg2;	// IMP=0x001000000024d5e9
- (void)openWithActivity:(id)arg1;	// IMP=0x001000000024d1ba
- (void)cancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024bf21
- (void)checkIfCanCancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024aad7
- (void)sendFeedbackForRideStatus:(id)arg1 feedbackRating:(id)arg2 feedbackTip:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000249898
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;	// IMP=0x00100000002494e8
- (void)stopUpdates;	// IMP=0x0010000000248f48
- (void)startUpdates;	// IMP=0x0010000000248977
- (void)getRideStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002476f6
- (void)getRideStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOption:(id)arg3 partySize:(unsigned long long)arg4 paymentMethod:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000002462f2
- (void)getRequestRideStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOption:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000244c72
- (void)getRideOptionStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000243a3b
- (id)_connectionWithIntent:(id)arg1;	// IMP=0x0010000000243995
@property(readonly, copy, nonatomic) NSString *name;
- (_Bool)enabled;	// IMP=0x0010000000243812
- (void)enableForUse;	// IMP=0x00100000002437ce
@property(readonly, copy) NSString *description;
- (id)initWithExtension:(id)arg1;	// IMP=0x0010000000243600
- (id)iconWithFormat:(int)arg1;	// IMP=0x0010000000b4072e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

