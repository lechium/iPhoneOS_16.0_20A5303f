//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSTimeZone;

__attribute__((visibility("hidden")))
@interface MKTransitDepartureServiceGapFormatter : NSObject
{
    NSDate *_departureCutoffDate;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012ef94
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) NSDate *departureCutoffDate; // @synthesize departureCutoffDate=_departureCutoffDate;
- (id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(_Bool)arg2 outDateFormat:(out unsigned long long *)arg3;	// IMP=0x000000000012ecb9
- (id)lastDepartureAtStringFromDate:(id)arg1;	// IMP=0x000000000012ec0c
- (id)lastDepartureUntilStringFromDate:(id)arg1;	// IMP=0x000000000012eb54
- (id)lastDepartureString;	// IMP=0x000000000012eaf7
- (id)initWithTimeZone:(id)arg1 departureCutoffDate:(id)arg2;	// IMP=0x000000000012ea5e

@end

