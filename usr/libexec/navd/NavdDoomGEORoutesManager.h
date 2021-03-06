//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionsRequestFeedback, GEODirectionsServiceRequest, GEORouteAttributes, NSString;

@interface NavdDoomGEORoutesManager : NSObject
{
    GEODirectionsServiceRequest *_routeRequestTicket;	// 8 = 0x8
    GEODirectionsRequestFeedback *_routeRequestFeedback;	// 16 = 0x10
    GEORouteAttributes *_routeRequestAttributes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000011469
- (id)_routeAttributes;	// IMP=0x0010000000011364
- (_Bool)requestWaypointForMapsSuggestionsEntry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010f88
- (_Bool)requestRouteFrom:(id)arg1 to:(id)arg2 routeCache:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000108de
- (_Bool)requestRouteFrom:(id)arg1 to:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000108c6
- (void)dealloc;	// IMP=0x0010000000010884

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

