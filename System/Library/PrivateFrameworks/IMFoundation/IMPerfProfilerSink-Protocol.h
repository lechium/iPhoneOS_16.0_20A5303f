//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMFoundation/NSObject-Protocol.h>

@class IMPerfProfiler;

@protocol IMPerfProfilerSink <NSObject>
- (void)perfProfiler:(IMPerfProfiler *)arg1 measurementDidFinish:(struct IMPerfMeasurement_t *)arg2;
@end

