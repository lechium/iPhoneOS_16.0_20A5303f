//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, NSArray, NSDate;

@interface TrafficIncidentLayout : NSObject
{
    NSArray *_layoutItems;	// 8 = 0x8
    _Bool _incidentReportingEnabled;	// 16 = 0x10
    GEOLocation *_layoutRequestLocation;	// 24 = 0x18
    NSDate *_layoutRequestTime;	// 32 = 0x20
    long long _layoutTimeToLive;	// 40 = 0x28
    long long _layoutFreshnessRadius;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000095af26
- (void).cxx_destruct;	// IMP=0x002000000095b834
@property(readonly, nonatomic) NSArray *layoutItems; // @synthesize layoutItems=_layoutItems;
- (_Bool)shouldInvalidateLayoutForLocation:(id)arg1;	// IMP=0x001000000095b5f9
- (_Bool)shouldInvalidateLayout;	// IMP=0x001000000095b57e
- (_Bool)isIncidentTypeSupported:(int)arg1;	// IMP=0x001000000095b41d
- (_Bool)isIncidentTypeDisplayedOnMap:(int)arg1;	// IMP=0x001000000095b2a6
@property(readonly, nonatomic, getter=isIncidentReportingEnabled) _Bool incidentReportingEnabled;
- (void)_populateLayoutFields:(id)arg1;	// IMP=0x001000000095af70
- (id)description;	// IMP=0x001000000095af2e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000095ae5a
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000095ad00
- (id)initWithLayoutFormConfig:(id)arg1 location:(id)arg2;	// IMP=0x001000000095ac67

@end
