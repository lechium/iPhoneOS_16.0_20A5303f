//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordsUI/NSObject-Protocol.h>

@protocol HKGraphSeriesBlockCoordinateInfo;

@protocol HKGraphSeriesBlockCoordinate <NSObject>
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
@property(nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property(nonatomic, readonly) double endXValue;
@property(nonatomic, readonly) double startXValue;
@end

