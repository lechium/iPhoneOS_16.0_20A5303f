//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SensorKit/NSObject-Protocol.h>

@class SRSensorWriter;

@protocol SRSensorWriterDelegate <NSObject>

@optional
- (void)sensorWriterDidStopMonitoring:(SRSensorWriter *)arg1;
- (void)sensorWriterWillStartMonitoring:(SRSensorWriter *)arg1;
@end

