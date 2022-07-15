//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDateInterval, NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface NavdDoomStorage : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
    unsigned long long _numberOfUpdatesToRoutes;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000a5cdfa
- (void).cxx_destruct;	// IMP=0x0020000000a5edde
@property(nonatomic) unsigned long long numberOfUpdatesToRoutes; // @synthesize numberOfUpdatesToRoutes=_numberOfUpdatesToRoutes;
- (id)objectForJSON;	// IMP=0x0010000000a5d4fa
- (id)nameForJSON;	// IMP=0x0010000000a5d4e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000a5d207
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000a5d14c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a5ce02
- (id)newIncidentsForDestination:(id)arg1;	// IMP=0x0010000000a5cb8e
- (void)updateWithIncidents:(id)arg1;	// IMP=0x0010000000a5c75b
@property(readonly, nonatomic) NSString *JSONString;
- (void)clear;	// IMP=0x0010000000a5c4ec
@property(readonly, nonatomic) NSString *statusString;
- (void)completeWindowBecause:(unsigned long long)arg1;	// IMP=0x0010000000a5bf6b
- (void)setReasonForEnd:(unsigned long long)arg1;	// IMP=0x0010000000a5bef9
@property(readonly, nonatomic) unsigned long long reasonForEnd;
@property(nonatomic) unsigned long long numberOfAlertableRoutes;
@property(nonatomic) unsigned long long numberOfDirectionRequests;
- (void)setNumberOfUpdatesToRoutesPerDestination:(unsigned long long)arg1;	// IMP=0x0010000000a5bc8c
- (unsigned long long)numberOfUpdatesToRoutesPerDestination;	// IMP=0x0010000000a5bc2f
@property(nonatomic) unsigned long long numberOfUpdatesToDestinations;
@property(nonatomic) unsigned long long numberOfUpdatesToExitTime;
@property(retain, nonatomic) NSDate *nextWakeup;
@property(retain, nonatomic) NSDate *mostRecentAlert;
@property(retain, nonatomic) NSDate *nextAllowedRequestTime;
@property(retain, nonatomic) NSSet *cachedIncidents;
@property(retain, nonatomic) NSDictionary *mostRecentRoutesPerDestination;
@property(retain, nonatomic) NSArray *mostRecentDestinations;
@property(retain, nonatomic) NSDateInterval *mostRecentDoomWindow;
@property(retain, nonatomic) NSDate *mostRecentExitTime;
@property(retain, nonatomic) CLLocation *mostRecentLocation;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) NSDate *mostRecentModification;
@property(retain, nonatomic) NSDate *mostRecentStart;
@property(readonly, nonatomic) unsigned long long version;
- (void)_writeObject:(id)arg1 toKey:(unsigned long long)arg2 updateModTime:(_Bool)arg3;	// IMP=0x0010000000a5b57c
- (id)_readObjectFromKey:(unsigned long long)arg1;	// IMP=0x0010000000a5b4ed
- (id)init;	// IMP=0x0010000000a5b424

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
