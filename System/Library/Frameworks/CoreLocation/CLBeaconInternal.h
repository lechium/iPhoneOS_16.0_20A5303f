//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSUUID;

@interface CLBeaconInternal : NSObject
{
    NSUUID *proximityUUID;	// 8 = 0x8
    NSNumber *major;	// 16 = 0x10
    NSNumber *minor;	// 24 = 0x18
    long long proximity;	// 32 = 0x20
    double accuracy;	// 40 = 0x28
    long long rssi;	// 48 = 0x30
    double timestamp;	// 56 = 0x38
}

@end
