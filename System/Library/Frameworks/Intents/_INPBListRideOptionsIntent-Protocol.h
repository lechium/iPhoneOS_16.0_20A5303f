//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBIntentMetadata, _INPBLocation;

@protocol _INPBListRideOptionsIntent <NSObject>
@property(readonly, nonatomic) _Bool hasPickupLocation;
@property(retain, nonatomic) _INPBLocation *pickupLocation;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasDropOffLocation;
@property(retain, nonatomic) _INPBLocation *dropOffLocation;
@end
