//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CADCalendarToolOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x0010000000058cf4
- (void)CADPostSyntheticRouteHypothesis:(id)arg1 forEventWithExternalURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058de9
- (void)CADPurgeChangeTrackingReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058d04
- (_Bool)accessGranted;	// IMP=0x0000000000058cfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

