//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@protocol INRideOptionExport <NSObject, JSExport>
@property(retain, nonatomic) NSUserActivity *userActivityForBookingInApplication;
@property(copy, nonatomic) NSArray *fareLineItems;
@property(copy, nonatomic) INImage *specialPricingBadgeImage;
@property(copy, nonatomic) NSString *specialPricing;
@property(copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property(copy, nonatomic) NSArray *availablePartySizeOptions;
@property(copy, nonatomic) NSString *disclaimerMessage;
@property(copy, nonatomic) NSNumber *usesMeteredFare;
@property(copy, nonatomic) INPriceRange *priceRange;
@property(copy, nonatomic) NSDate *estimatedPickupDate;
@property(copy, nonatomic) NSString *name;
- (id)init;
@end
