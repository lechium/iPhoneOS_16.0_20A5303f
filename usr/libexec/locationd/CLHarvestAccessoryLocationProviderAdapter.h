//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLHarvestAccessoryLocationProviderAdapter : NSObject
{
    void *_monitorGpsExternal;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x001000000014db6a
- (void)accessoryDidDisconnect:(id)arg1;	// IMP=0x001000000014db56
- (void)accessoryDidConnect:(id)arg1;	// IMP=0x001000000014db41
- (id)initWithMonitorGpsExternal:(void *)arg1;	// IMP=0x001000000014db00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

