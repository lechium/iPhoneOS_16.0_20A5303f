//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, CLVisit, NSArray, NSString, NSURL;

@protocol CLSimulationLocationProtocol
- (void)simulateBeaconWithProximityUUID:(NSString *)arg1 major:(long long)arg2 minor:(long long)arg3 eventType:(unsigned char)arg4;
- (void)simulateFenceWithBundleID:(NSString *)arg1 andFenceID:(NSString *)arg2 eventType:(unsigned char)arg3 atLocation:(CLLocation *)arg4;
- (void)getFencesForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *))arg2;
- (void)simulateSignificantLocationChange:(CLLocation *)arg1;
- (void)simulateVisit:(CLVisit *)arg1;
- (void)setLocationTravellingSpeed:(double)arg1;
- (void)setLocationInterval:(double)arg1;
- (void)setIntermediateLocationDistance:(double)arg1;
- (void)setLocationRepeatBehavior:(unsigned char)arg1;
- (void)setLocationDeliveryBehavior:(unsigned char)arg1;
- (void)clearSimulatedLocations;
- (void)appendSimulatedLocations:(NSArray *)arg1;
- (void)setSimulationScenario:(NSURL *)arg1;
- (void)stopLocationSimulation;
- (void)startLocationSimulation;
@end
