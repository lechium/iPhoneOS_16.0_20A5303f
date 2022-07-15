//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SDStatusMonitor, SFUserAlert;
@protocol OS_os_transaction, SDAirDropControllerDelegate;

@interface SDAirDropController : NSObject
{
    _Bool _started;	// 8 = 0x8
    SDStatusMonitor *_monitor;	// 16 = 0x10
    NSMutableDictionary *_properties;	// 24 = 0x18
    SFUserAlert *_phUserNotification;	// 32 = 0x20
    SFUserAlert *_radiosUserNotification;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
    id <SDAirDropControllerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000221342
@property __weak id <SDAirDropControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stop;	// IMP=0x00100000002212dc
- (void)start;	// IMP=0x0010000000221282
- (void)removeObservers;	// IMP=0x001000000022122f
- (void)addObservers;	// IMP=0x0010000000221182
- (void)somethingChanged:(id)arg1;	// IMP=0x0010000000221170
- (void)setStatusAndNotify;	// IMP=0x001000000022102f
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x0010000000220f41
- (void)presentDisablePersonalHotspotAlert;	// IMP=0x0010000000220f3b
- (void)presentEnableRadiosAlertForBluetooth:(_Bool)arg1 andWLAN:(_Bool)arg2;	// IMP=0x0010000000220a2f
- (void)configureSettingsForAirDrop;	// IMP=0x0010000000220955
- (void)dealloc;	// IMP=0x0010000000220917
- (id)init;	// IMP=0x001000000022088e

@end
