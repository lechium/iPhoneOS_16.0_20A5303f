//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>

@class CLLocationManager, NSString;

@interface NavdDoomLocationManager : MapsSuggestionsBaseLocationUpdater
{
    CLLocationManager *_clLocationManager;	// 8 = 0x8
}

+ (id)sharedLocationManager;	// IMP=0x00200000000355ae
- (void).cxx_destruct;	// IMP=0x00200000000360d8
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0010000000035ff6
- (_Bool)hasMapsLocationAccess;	// IMP=0x0010000000035faa
- (_Bool)_hasMapsCoarseLocationEnabled;	// IMP=0x0010000000035f86
- (void)locationLeecher:(id)arg1 errorLeechingLocation:(id)arg2;	// IMP=0x0010000000035e4e
- (void)locationLeecher:(id)arg1 receivedLocation:(id)arg2;	// IMP=0x0010000000035c44
- (void)_updateLocationIfAllowed:(id)arg1;	// IMP=0x0010000000035bd0
- (void)onStopImplementation;	// IMP=0x00100000000359f5
- (void)onStartImplementation;	// IMP=0x00100000000357b4
// Error: Property attributes should begin with the type ('T') attribute, property name: uniqueName
// Property attributes: (null)

- (id)initWithName:(id)arg1 queue:(id)arg2;	// IMP=0x001000000003566a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

