//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, GEOMapItemClientAttributes, MKMapItem, NSString;

@interface AddressBookAddressWaypointRequest : NSObject
{
    CNContact *_contact;	// 8 = 0x8
    GEOMapItemClientAttributes *_clientAttributes;	// 16 = 0x10
    NSString *_addressString;	// 24 = 0x18
    MKMapItem *_mapItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000007d522f
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly, nonatomic) GEOMapItemClientAttributes *clientAttributes; // @synthesize clientAttributes=_clientAttributes;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)_clientAttributesForAddress:(id)arg1;	// IMP=0x00100000007d4ff5
- (void)recordRAPInformation:(id)arg1;	// IMP=0x00100000007d4f9d
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000007d4e8d
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x00100000007d4cf8
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000007d4c47
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007d48d8
- (id)initWithAddressString:(id)arg1 clientAttributes:(id)arg2 contact:(id)arg3 mapItem:(id)arg4;	// IMP=0x00100000007d47da
- (id)initWithAddress:(id)arg1 mapItem:(id)arg2;	// IMP=0x00100000007d45a5
- (id)initWithAddress:(id)arg1;	// IMP=0x00100000007d4591

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

