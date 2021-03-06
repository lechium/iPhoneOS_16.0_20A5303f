//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSArray, NSMeasurement;

@protocol INTemperatureResolutionResultExport <NSObject, JSExport>
+ (id)confirmationRequiredWithTemperatureToConfirm:(NSMeasurement *)arg1;
+ (id)disambiguationWithTemperaturesToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedTemperature:(NSMeasurement *)arg1;
- (id)init;
@end

