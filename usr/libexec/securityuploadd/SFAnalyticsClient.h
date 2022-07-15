//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SFAnalyticsSQLiteStore;
@protocol OS_dispatch_queue;

@interface SFAnalyticsClient : NSObject
{
    NSString *_name;	// 8 = 0x8
    _Bool _requireDeviceAnalytics;	// 16 = 0x10
    _Bool _requireiCloudAnalytics;	// 17 = 0x11
    _Bool _isStoreOpen;	// 18 = 0x12
    SFAnalyticsSQLiteStore *_store;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)getSharedClientNamed:(id)arg1 orCreateWithStorePath:(id)arg2 requireDeviceAnalytics:(_Bool)arg3 requireiCloudAnalytics:(_Bool)arg4;	// IMP=0x0040000000001a3a
- (void).cxx_destruct;	// IMP=0x00200000000017d9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) SFAnalyticsSQLiteStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool isStoreOpen; // @synthesize isStoreOpen=_isStoreOpen;
@property(readonly, nonatomic) _Bool requireiCloudAnalytics; // @synthesize requireiCloudAnalytics=_requireiCloudAnalytics;
@property(readonly, nonatomic) _Bool requireDeviceAnalytics; // @synthesize requireDeviceAnalytics=_requireDeviceAnalytics;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)withStore:(CDUnknownBlockType)arg1;	// IMP=0x00100000000016e5
- (id)initWithStore:(id)arg1 queue:(id)arg2 name:(id)arg3 requireDeviceAnalytics:(_Bool)arg4 requireiCloudAnalytics:(_Bool)arg5;	// IMP=0x0010000000001617
- (id)initFromExistingClient:(id)arg1 name:(id)arg2 requireDeviceAnalytics:(_Bool)arg3 requireiCloudAnalytics:(_Bool)arg4;	// IMP=0x00100000000014bc
- (id)initWithStorePath:(id)arg1 name:(id)arg2 requireDeviceAnalytics:(_Bool)arg3 requireiCloudAnalytics:(_Bool)arg4;	// IMP=0x0010000000001374
@property(readonly, nonatomic) NSString *storePath;

@end
