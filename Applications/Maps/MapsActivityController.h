//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUserActivity;
@protocol MapsActivityControllerDelegate, OS_dispatch_queue;

@interface MapsActivityController : NSObject
{
    NSUserActivity *_mapsUserActivity;	// 8 = 0x8
    _Bool _needToWaitForHandoff;	// 16 = 0x10
    _Bool _needToUpdateHandoff;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_loggingQueue;	// 32 = 0x20
    id <MapsActivityControllerDelegate> _delegate;	// 40 = 0x28
    NSDictionary *__cachedMapsActivityDataDictionary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000089cc88
@property(retain) NSDictionary *_cachedMapsActivityDataDictionary; // @synthesize _cachedMapsActivityDataDictionary=__cachedMapsActivityDataDictionary;
@property(nonatomic) __weak id <MapsActivityControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)writeCurrentState:(id)arg1;	// IMP=0x001000000089c63b
- (id)_cleanArray:(id)arg1;	// IMP=0x001000000089c3c1
- (id)_cleanDictionary:(id)arg1;	// IMP=0x001000000089c08c
- (void)archiveMapsActivity;	// IMP=0x001000000089ba15
- (void)setNeedsUserActivityUpdate;	// IMP=0x001000000089b9e1
- (void)userActivityWillSave:(id)arg1;	// IMP=0x001000000089b600
- (void)_updateUserActivityWithMapsActivityAtFullFidelity:(id)arg1 atCompactFidelity:(id)arg2 title:(id)arg3 expirationDate:(id)arg4;	// IMP=0x001000000089b0d0
- (void)_updateUserActivity;	// IMP=0x001000000089abfc
- (id)_mapsUserActivity;	// IMP=0x001000000089ab63
- (id)mapsUserActivityForStateRestoration;	// IMP=0x001000000089aa0f
- (id)init;	// IMP=0x001000000089a90a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

