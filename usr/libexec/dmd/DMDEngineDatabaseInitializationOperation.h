//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol DMDDeviceStateProvider;

@interface DMDEngineDatabaseInitializationOperation
{
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000043abc
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
- (_Bool)destroyPersistentStoresWithError:(id *)arg1;	// IMP=0x0010000000043583
- (_Bool)updateMetadataForManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000432ef
- (void)fixupDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042968
- (void)loadPersistentStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000042468
- (void)destroyLegacyDatabaseIfNeeded;	// IMP=0x0010000000041fa6
- (void)main;	// IMP=0x0010000000041d94
- (void)operationWillStart;	// IMP=0x0010000000041d54
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000041c0f
- (_Bool)isReady;	// IMP=0x0010000000041b9a
- (void)dealloc;	// IMP=0x0010000000041b40

@end
