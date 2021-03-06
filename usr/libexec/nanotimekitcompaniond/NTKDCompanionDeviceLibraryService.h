//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NTKPersistentFaceCollection;
@protocol OS_dispatch_queue;

@interface NTKDCompanionDeviceLibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    NSMutableArray *_completionHandlers;	// 24 = 0x18
    NTKPersistentFaceCollection *_faceCollection;	// 32 = 0x20
}

+ (id)sharedService;	// IMP=0x0020000000025cb3
- (void).cxx_destruct;	// IMP=0x0020000000026d42
- (void)_queue_startFetchingLibrary;	// IMP=0x0010000000026c4a
- (void)_queue_appendCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026be5
- (void)_queue_fetchLibraryAsJSON:(CDUnknownBlockType)arg1;	// IMP=0x0010000000026b8a
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000268f9
- (void)_queue_handleFaceJSON:(id)arg1 error:(id)arg2;	// IMP=0x00100000000265e1
- (id)_jsonFromCollection:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002622d
- (void)faceCollectionDidLoad:(id)arg1;	// IMP=0x001000000002609e
- (void)fetchLibraryAsJSON:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025f96
- (void)start;	// IMP=0x0010000000025e07
- (id)_init;	// IMP=0x0010000000025d48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

