//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <APFoundation/APMetric.h>

@interface APMetric (Daemon)
- (id)description;	// IMP=0x00200000000c1e3f
- (id)_descriptionWithFormat:(id)arg1;	// IMP=0x00100000000c1a8d
- (id)_metric;	// IMP=0x00100000000c19ea
- (id)_route;	// IMP=0x00100000000c194d
- (void)updateClientBundleID:(id)arg1;	// IMP=0x00100000000c193b
- (void)convertNetworkDatesToDates;	// IMP=0x00100000000c1730
- (void)convertDatesToNetworkDates;	// IMP=0x00100000000c1368
- (_Bool)validateMetricAndSetupIdentifiers:(id)arg1;	// IMP=0x00100000000c121f
- (id)metricRoute;	// IMP=0x00100000000c11ed
- (void)initDeviceInfoDaemon;	// IMP=0x00100000000c0ff9
@end

