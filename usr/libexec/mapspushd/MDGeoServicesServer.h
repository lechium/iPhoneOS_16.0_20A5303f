//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDState, NSString, NotificationFromGEODHandler;

@interface MDGeoServicesServer : NSObject
{
    NotificationFromGEODHandler *_notificationFromGEODHandler;	// 8 = 0x8
    MDState *_state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001c98c
- (void)geodProxyAuthFailedNotification:(long long)arg1;	// IMP=0x001000000001c8b0
- (void)geodInternalErrorNotification:(long long)arg1;	// IMP=0x001000000001c7cb
- (void)dealloc;	// IMP=0x001000000001c787
- (id)initWithState:(id)arg1;	// IMP=0x001000000001c648

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

