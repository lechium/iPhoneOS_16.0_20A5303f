//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, NSArray;

@interface WaypointSet : NSObject
{
    _Bool _areAllValidWaypoints;	// 8 = 0x8
    NSArray *_waypointsOrNull;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000cf5c2
@property(readonly, copy, nonatomic) NSArray *waypointsOrNull; // @synthesize waypointsOrNull=_waypointsOrNull;
@property(readonly, nonatomic) _Bool areAllValidWaypoints; // @synthesize areAllValidWaypoints=_areAllValidWaypoints;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00100000000cf599
- (unsigned long long)hash;	// IMP=0x00100000000cf583
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000cf47a
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00100000000cf3f5
@property(readonly, copy, nonatomic) GEOComposedWaypoint *destination;
@property(readonly, copy, nonatomic) GEOComposedWaypoint *origin;
- (id)waypointAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000cf29e
- (id)initWithWaypoints:(id)arg1;	// IMP=0x00100000000cf0d6

@end

