//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface VirtualGarageServiceTask : NSObject
{
    _Bool _usesVirtualGarage;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serviceQueue;	// 16 = 0x10
}

+ (long long)creationPreference;	// IMP=0x002000000078e245
- (void).cxx_destruct;	// IMP=0x002000000078e280
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(nonatomic) _Bool usesVirtualGarage; // @synthesize usesVirtualGarage=_usesVirtualGarage;
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000078e256
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000078e250
- (void)valueChangedForMapsFeature:(CDStruct_8ce276cf)arg1 enabled:(_Bool)arg2;	// IMP=0x001000000078e0b2
- (void)_mapsTerminated:(id)arg1;	// IMP=0x001000000078dfab
- (void)_tearDownVirtualGarage;	// IMP=0x001000000078dd44
- (void)_setupVirtualGarageIfNeeded;	// IMP=0x001000000078db06
- (void)dealloc;	// IMP=0x001000000078dad0
- (id)init;	// IMP=0x001000000078da3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

