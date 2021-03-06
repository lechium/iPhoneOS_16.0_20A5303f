//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;
@protocol HDHealthDaemon;

__attribute__((visibility("hidden")))
@interface HDHeartDaemonExtension : NSObject
{
    id <HDHealthDaemon> _healthDaemon;	// 8 = 0x8
    NSUserDefaults *_heartNotificationsUserDefaults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000017e73
- (void)performPostInstallUpdateTaskForManager:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017e23
- (void)daemonReady:(id)arg1;	// IMP=0x0000000000017dd2
- (id)initWithHealthDaemon:(id)arg1 heartNotificationsUserDefaults:(id)arg2;	// IMP=0x0000000000017d2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

