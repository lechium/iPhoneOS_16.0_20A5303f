//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAppleMediaServicesResult, INRestaurantReservationUserBooking, MKMapItem, NSNumberFormatter, NSString, NSUserActivity, RestaurantReservationAnalyticsBookingSession, RestaurantReservationRequester, UIViewController, _MXExtension, _MXExtensionManager;
@protocol PlaceCardActionButtonControllingDelegate;

@interface RestaurantReservationActionButtonProvider : NSObject
{
    _Bool _shouldUpdateSecondaryButton;	// 8 = 0x8
    _Bool _extensionDiscoveryCompleted;	// 9 = 0x9
    _Bool _activeEventDiscoveryCompleted;	// 10 = 0xa
    _Bool _appDiscoveryCompleted;	// 11 = 0xb
    id <PlaceCardActionButtonControllingDelegate>;	// 16 = 0x10
    unsigned long long _extensionType;	// 24 = 0x18
    unsigned long long _extensionMode;	// 32 = 0x20
    _MXExtension *_extension;	// 40 = 0x28
    _MXExtensionManager *_extensionManager;	// 48 = 0x30
    RestaurantReservationRequester *_restaurantReservationRequester;	// 56 = 0x38
    INRestaurantReservationUserBooking *_activeRestaurantUserBooking;	// 64 = 0x40
    NSUserActivity *_activeRestaurantUserBookingActivity;	// 72 = 0x48
    GEOAppleMediaServicesResult *_appItem;	// 80 = 0x50
    MKMapItem *_mapItem;	// 88 = 0x58
    NSNumberFormatter *_numberFormatter;	// 96 = 0x60
    RestaurantReservationAnalyticsBookingSession *_activeBookingSession;	// 104 = 0x68
}

+ (void)requestProviderMatchingMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x002000000032144a
- (void).cxx_destruct;	// IMP=0x0020000000324627
@property(retain, nonatomic) RestaurantReservationAnalyticsBookingSession *activeBookingSession; // @synthesize activeBookingSession=_activeBookingSession;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) __weak MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) GEOAppleMediaServicesResult *appItem; // @synthesize appItem=_appItem;
@property(nonatomic) _Bool appDiscoveryCompleted; // @synthesize appDiscoveryCompleted=_appDiscoveryCompleted;
@property(retain, nonatomic) NSUserActivity *activeRestaurantUserBookingActivity; // @synthesize activeRestaurantUserBookingActivity=_activeRestaurantUserBookingActivity;
@property(retain, nonatomic) INRestaurantReservationUserBooking *activeRestaurantUserBooking; // @synthesize activeRestaurantUserBooking=_activeRestaurantUserBooking;
@property(nonatomic) _Bool activeEventDiscoveryCompleted; // @synthesize activeEventDiscoveryCompleted=_activeEventDiscoveryCompleted;
@property(retain, nonatomic) RestaurantReservationRequester *restaurantReservationRequester; // @synthesize restaurantReservationRequester=_restaurantReservationRequester;
@property(retain, nonatomic) _MXExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
@property(retain, nonatomic) _MXExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) unsigned long long extensionMode; // @synthesize extensionMode=_extensionMode;
@property(nonatomic) unsigned long long extensionType; // @synthesize extensionType=_extensionType;
@property(nonatomic) _Bool extensionDiscoveryCompleted; // @synthesize extensionDiscoveryCompleted=_extensionDiscoveryCompleted;
@property(nonatomic) _Bool shouldUpdateSecondaryButton; // @synthesize shouldUpdateSecondaryButton=_shouldUpdateSecondaryButton;
@property(nonatomic) __weak id <PlaceCardActionButtonControllingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)debugAppDiscoveryIdentifierForIdentifier:(id)arg1;	// IMP=0x0010000000324426
- (void)discoverApp;	// IMP=0x00100000003240ec
- (void)requester:(id)arg1 userCurrentBookingRequestDidFailWithError:(id)arg2;	// IMP=0x001000000032402d
- (void)requesterUserCurrentBookingRequestDidComplete:(id)arg1;	// IMP=0x0010000000323e77
- (void)discoverActiveReservationEvents;	// IMP=0x0010000000323dca
- (void)discoverGuest;	// IMP=0x0010000000323d8d
- (void)discoverAvailableBookings;	// IMP=0x0010000000323b68
- (void)requesterReservationDefaultsRequestDidComplete:(id)arg1;	// IMP=0x0010000000323aa8
- (void)discoverDefaults;	// IMP=0x0010000000323a6b
- (void)discoverActiveEvent;	// IMP=0x0010000000323a32
- (_Bool)hasActiveEvent;	// IMP=0x00100000003239ff
- (id)lookupPolicy;	// IMP=0x0010000000323955
- (void)discoverExtension;	// IMP=0x00100000003234f5
- (void)updateType;	// IMP=0x0010000000323400
- (void)updateSecondaryButtonForActiveRestaurantReservation:(id)arg1;	// IMP=0x001000000032316b
- (void)updateSecondaryButtonForType:(unsigned long long)arg1;	// IMP=0x0010000000322fa1
- (void)updateSecondaryButton;	// IMP=0x0010000000322dce
- (id)reservationExtensionFlowViewController;	// IMP=0x0010000000322866
- (void)_updateActiveBookingSession;	// IMP=0x00100000003227aa
- (id)_createBookingSession;	// IMP=0x00100000003226c3
- (void)addInstallNeededAppIdIfNeeded:(id)arg1;	// IMP=0x0010000000322572
- (id)alertControllerForAppInstall;	// IMP=0x0010000000321f58
- (void)updateSessionAsInstallCompletedIfNeeded:(id)arg1;	// IMP=0x0010000000321e98
- (id)alertControllerForExtensionPermission;	// IMP=0x0010000000321978
- (id)reservationControllerToPresent;	// IMP=0x00100000003218fa
@property(readonly, nonatomic) _Bool shouldPresentAppSheet;
@property(readonly, nonatomic) _Bool shouldPresentReservationFlow;
@property(readonly, nonatomic) _Bool shouldPresentExtensionPermission;
- (void)extensionContentDidChange;	// IMP=0x00100000003217d0
@property(readonly, nonatomic) int analyticActionForPresentingSecondaryAction;
- (_Bool)hasActiveRestaurantUserBooking;	// IMP=0x0010000000321765
- (void)updateButton;	// IMP=0x00100000003216da
@property(readonly, nonatomic) UIViewController *controllerForSecondaryAction;
- (id)initWithMapItem:(id)arg1;	// IMP=0x00100000003215a4

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType analyticsBlockForPresentingSecondaryAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

