//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSTimeZone;
@protocol GEOTransitDepartureSequence, GEOTransitLine, TransitSchedulesDepartureInfoProviderDelegate;

@interface TransitSchedulesDepartureInfoProvider : NSObject
{
    NSString *_frequencyString;	// 8 = 0x8
    NSString *_operatingHours;	// 16 = 0x10
    id <TransitSchedulesDepartureInfoProviderDelegate> _delegate;	// 24 = 0x18
    id <GEOTransitLine> _transitLine;	// 32 = 0x20
    id <GEOTransitDepartureSequence> _departureSequence;	// 40 = 0x28
    NSDate *_date;	// 48 = 0x30
    NSTimeZone *_timeZone;	// 56 = 0x38
}

+ (Class)cellClass;	// IMP=0x0020000000892c40
- (void).cxx_destruct;	// IMP=0x0020000000893580
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) id <GEOTransitDepartureSequence> departureSequence; // @synthesize departureSequence=_departureSequence;
@property(retain, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
@property(nonatomic) __weak id <TransitSchedulesDepartureInfoProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_operatingHoursDescriptionFromDepartureSequence;	// IMP=0x00100000008934b5
- (id)_operatingHoursDescriptionFromTransitLine;	// IMP=0x0010000000893422
- (id)_operatingHoursStringForTimeRanges:(id)arg1;	// IMP=0x00100000008931f1
@property(readonly, nonatomic) NSString *operatingHours; // @synthesize operatingHours=_operatingHours;
- (void)_invalidateOperatingHours;	// IMP=0x00100000008930cc
@property(readonly, nonatomic) NSString *frequencyString; // @synthesize frequencyString=_frequencyString;
- (void)_invalidateFrequencyString;	// IMP=0x0010000000892fee
- (void)selectedCellAtIndexPath:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0010000000892e94
- (_Bool)allowsCellSelection;	// IMP=0x0010000000892e8c
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2 withIdentifier:(id)arg3;	// IMP=0x0010000000892c51
@property(readonly, nonatomic) NSArray *identifiers;
- (id)initWithTransitLine:(id)arg1 timeZone:(id)arg2 referenceDate:(id)arg3;	// IMP=0x0010000000892aa5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

