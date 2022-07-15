//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MCGeoServicesDataProviding, MCParkedCarReportDelegate, MCRoutineLocationDataProviding;

@interface MCParkedCarReporter : NSObject
{
    id <MCGeoServicesDataProviding> _geoServicesProvider;	// 8 = 0x8
    id <MCRoutineLocationDataProviding> _routineProvider;	// 16 = 0x10
    id <MCParkedCarReportDelegate> _reportDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000f828
@property(retain, nonatomic) id <MCParkedCarReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(retain, nonatomic) id <MCGeoServicesDataProviding> geoServicesProvider; // @synthesize geoServicesProvider=_geoServicesProvider;
@property(retain, nonatomic) id <MCRoutineLocationDataProviding> routineProvider; // @synthesize routineProvider=_routineProvider;
- (void)_reportQualifyingVehicleEvents:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f071
- (void)processVehicleEvents:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ef0f
- (id)init;	// IMP=0x001000000000ee83

@end
