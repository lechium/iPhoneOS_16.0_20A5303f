//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOVectorTile;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadBuilder
{
    struct deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> _edges;	// 128 = 0x80
    GEOVectorTile *_retainedTile;	// 176 = 0xb0
}

- (id).cxx_construct;	// IMP=0x0000000001382f25
- (void).cxx_destruct;	// IMP=0x0000000001382da1
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x0000000001382d78
- (id)_lastTile;	// IMP=0x0000000001382c81
- (id)_firstTile;	// IMP=0x0000000001382b95
- (Matrix_8746f91e)_lastPoint;	// IMP=0x0000000001382aae
- (Matrix_8746f91e)_firstPoint;	// IMP=0x00000000013829d2
- (unsigned long long)_connectionTypeForEdge:(id)arg1 points:(struct GeoCodecsVectorTilePoint *)arg2 connectingTilePoint:(Matrix_8746f91e)arg3;	// IMP=0x00000000013828dd
- (_Bool)_shouldFindEdgeBehind;	// IMP=0x0000000001382894
- (_Bool)_shouldFindEdgeAhead;	// IMP=0x0000000001382856
- (_Bool)_findEdgeBehindInTile:(id)arg1;	// IMP=0x0000000001381ee7
- (_Bool)_findEdgeAheadInTile:(id)arg1;	// IMP=0x0000000001380e17
- (void)_buildCompleteEdge;	// IMP=0x0000000001380bce
- (unsigned long long)_maxTileCount;	// IMP=0x0000000001380bc3
- (void)dealloc;	// IMP=0x0000000001380b82
- (id)initWithMap:(id)arg1 roadFeature:(id)arg2 shouldFlip:(_Bool)arg3;	// IMP=0x00000000013806de

@end
