//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKDSiriDataSourcesObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_bundleQueue;	// 8 = 0x8
    NSMutableSet *_bundleIdentifiers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000036da
- (void).cxx_destruct;	// IMP=0x0020000000004186
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000003ee8
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000003c4a
- (void)updateDeviceDataSourcesInNanoPreferences;	// IMP=0x0010000000003be9
- (void)queue_updateDeviceDataSourcesInNanoPreferences;	// IMP=0x0010000000003b63
- (void)queue_buildInitialSetOfIdentifiersIfNeeded;	// IMP=0x0010000000003884
- (void)dealloc;	// IMP=0x001000000000380f
- (id)init;	// IMP=0x001000000000375f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

