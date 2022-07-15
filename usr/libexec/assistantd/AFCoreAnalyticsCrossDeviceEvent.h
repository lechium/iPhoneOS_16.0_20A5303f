//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSString;

@interface AFCoreAnalyticsCrossDeviceEvent : NSObject
{
    MISSING_TYPE *_nearbyDevicesLoggingID;	// 8 = 0x8
    NSMutableDictionary *_nearbyDevicesPayloads;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000096e95
@property(retain, nonatomic) NSMutableDictionary *nearbyDevicesPayloads; // @synthesize nearbyDevicesPayloads=_nearbyDevicesPayloads;
@property(readonly, copy, nonatomic) NSString *nearbyDevicesLoggingID; // @synthesize nearbyDevicesLoggingID=_nearbyDevicesLoggingID;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000096cb3
- (id)description;	// IMP=0x0010000000096c9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000096c47
- (void)addCoreAnalyticsDeviceTargetedWithContextIdentifier:(id)arg1 commandResultDescription:(id)arg2;	// IMP=0x0010000000096a0b
- (void)_setTargetedDeviceContextIdentifier:(id)arg1 withAction:(id)arg2 payload:(id)arg3;	// IMP=0x001000000009691d
- (void)addNearbyDeviceContexts:(id)arg1 proximityInfo:(id)arg2;	// IMP=0x0010000000096538
- (id)initWithNearbyDevicesLoggingID:(id)arg1;	// IMP=0x00100000000964c5
- (id)init;	// IMP=0x00100000000964b7

@end
