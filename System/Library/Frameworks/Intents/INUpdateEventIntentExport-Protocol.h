//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSArray, NSNumber, NSString;

@protocol INUpdateEventIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *removeLocation;
@property(copy, nonatomic) NSNumber *updateAllOccurrences;
@property(copy, nonatomic) NSArray *removeParticipants;
@property(copy, nonatomic) NSArray *addParticipants;
@property(copy, nonatomic) CLPlacemark *setLocation;
@property(copy, nonatomic) INDateComponentsRange *setDateTimeRange;
@property(copy, nonatomic) NSString *setTitle;
@property(copy, nonatomic) NSString *targetEventIdentifier;
- (id)init;
@end
