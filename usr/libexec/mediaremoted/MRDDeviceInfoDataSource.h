//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDeviceInfo, NSString;
@protocol MRDDeviceInfoDataSourceDelegate;

@interface MRDDeviceInfoDataSource : NSObject
{
    struct MGNotificationTokenStruct *_gestaltNotificationToken;	// 8 = 0x8
    int _airplayPerfsNotifyToken;	// 16 = 0x10
    int _airplayActiveNotifyToken;	// 20 = 0x14
    int _airplayAdvertisingNotifyToken;	// 24 = 0x18
    MRDeviceInfo *_deviceInfo;	// 32 = 0x20
    _Bool _deviceInfoReloadScheduled;	// 40 = 0x28
    id <MRDDeviceInfoDataSourceDelegate> _delegate;	// 48 = 0x30
}

+ (id)_workerQueue;	// IMP=0x0020000000052ac5
- (void).cxx_destruct;	// IMP=0x0020000000052ff8
@property(nonatomic) __weak id <MRDDeviceInfoDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_otherDeviceInfoDidChange:(id)arg1;	// IMP=0x0010000000052e01
- (void)_deviceInfoDidChangeWithDeviceInfo:(id)arg1;	// IMP=0x0010000000052c9b
- (void)_deviceInfoDidChange;	// IMP=0x0010000000052b46
- (void)_outputContextDidChange;	// IMP=0x0010000000052ab3
- (void)clusterController:(id)arg1 clusterStatusDidChange:(unsigned long long)arg2;	// IMP=0x0010000000052aa1
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0010000000052a8f
@property(readonly, nonatomic) MRDeviceInfo *deviceInfo;
- (void)dealloc;	// IMP=0x0010000000052979
- (id)init;	// IMP=0x0010000000052328

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

