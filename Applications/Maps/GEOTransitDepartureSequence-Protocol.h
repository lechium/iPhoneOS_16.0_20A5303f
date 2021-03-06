//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSSet, NSString, NSTimeZone;
@protocol GEOTransitDeparture, GEOTransitDepartureFrequency, GEOTransitLine;

@protocol GEOTransitDepartureSequence <NSObject>
@property(nonatomic, readonly) NSTimeZone *timeZone;
@property(nonatomic, readonly) unsigned long long walkingETA;
@property(nonatomic, readonly) _Bool hasWalkingETA;
@property(nonatomic, readonly) NSSet *nextStopIDs;
- (NSArray *)operatingHoursForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;
- (NSDate *)serviceResumesAfterDate:(NSDate *)arg1;
- (_Bool)isDepartureDateInactive:(NSDate *)arg1 withReferenceDate:(NSDate *)arg2;
- (id <GEOTransitDepartureFrequency>)frequencyToDescribeAtDate:(NSDate *)arg1;
- (double)frequencyForSortingAtDate:(NSDate *)arg1;
- (_Bool)hasFrequencyAtDate:(NSDate *)arg1;
- (NSArray *)departuresValidForDate:(NSDate *)arg1;
- (id <GEOTransitDeparture>)firstDepartureValidForDate:(NSDate *)arg1;
- (_Bool)isValidForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;
- (NSDate *)firstOpenOperatingDateOnOrAfterDate:(NSDate *)arg1;
- (id <GEOTransitDepartureFrequency>)firstDepartureFrequencyOnOrAfterDate:(NSDate *)arg1;
- (unsigned long long)numberOfDeparturesAfterDate:(NSDate *)arg1;
- (unsigned long long)stopId;
- (NSArray *)departures;
- (id <GEOTransitDeparture>)firstDepartureAfterDate:(NSDate *)arg1;
- (id <GEOTransitDeparture>)firstDepartureOnOrAfterDate:(NSDate *)arg1;
@property(nonatomic, readonly) NSArray *operatingHours;
@property(nonatomic, readonly) NSArray *containerLabelItems;
@property(nonatomic, readonly) NSString *containerDisplayName;
@property(nonatomic, readonly) NSString *originName;
@property(nonatomic, readonly) NSString *displayName;
@property(nonatomic, readonly) NSString *headsign;
@property(nonatomic, readonly) NSString *direction;
@property(nonatomic, readonly) long long displayStyle;
@property(nonatomic, readonly) _Bool isLowFrequency;
@property(nonatomic, readonly) id <GEOTransitLine> line;
@property(nonatomic, readonly) unsigned long long transitId;
@end

