//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@protocol HMDSBSRemoteAlertHandleObserver;

@protocol HMDSBSRemoteAlertHandle <NSObject>
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, getter=isActive) _Bool active;
- (void)invalidate;
- (void)activate;
- (void)unregisterObserver:(id <HMDSBSRemoteAlertHandleObserver>)arg1;
- (void)registerObserver:(id <HMDSBSRemoteAlertHandleObserver>)arg1;
@end
