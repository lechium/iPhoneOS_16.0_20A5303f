//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface MetricsHandler : NSObject
{
    NSString *_os;	// 8 = 0x8
    NSString *_platform;	// 16 = 0x10
    NSNumber *_activeDSID;	// 24 = 0x18
    NSString *_baseLogKey;	// 32 = 0x20
    NSDictionary *_currentApps;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001ab4ed
@property(readonly, nonatomic) NSString *topic;
@property(readonly, nonatomic) _Bool shouldCollectMetrics;
- (void)resetMetrics;	// IMP=0x00100000001ab4d7
- (void)recordSupplementalAppMetricsEvents;	// IMP=0x00100000001ab4d1
- (void)recordLaunches:(id)arg1;	// IMP=0x00100000001ab4cb
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x00100000001ab4c5
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x00100000001ab4bf
- (void)postMetrics;	// IMP=0x00100000001ab4b9
- (id)getAppEventsWithError:(id *)arg1;	// IMP=0x00100000001ab4b1
@property(readonly, nonatomic) NSString *logKey;
@property(readonly, nonatomic) NSString *deviceID;
- (id)createAppEventFromAppMetadata:(id)arg1;	// IMP=0x00100000001ab499

@end

