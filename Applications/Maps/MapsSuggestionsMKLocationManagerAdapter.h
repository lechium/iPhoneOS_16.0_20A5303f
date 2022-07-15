//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>

@class MKLocationManager, NSString;

@interface MapsSuggestionsMKLocationManagerAdapter : MapsSuggestionsBaseLocationUpdater
{
    MKLocationManager *_mkLocationManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000004f67a4
- (void)locationManagerApprovalDidChange:(id)arg1;	// IMP=0x00100000004f6766
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00100000004f6760
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00100000004f675a
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00100000004f6754
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00100000004f674e
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00100000004f6748
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00100000004f668c
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00100000004f6677
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00100000004f65e6
- (void)onStopImplementation;	// IMP=0x00100000004f6413
- (void)onStartImplementation;	// IMP=0x00100000004f6215
- (id)init;	// IMP=0x00100000004f6000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
