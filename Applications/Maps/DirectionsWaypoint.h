//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, ExternalURLQuery, MKLocalSearchCompletion, MKMapItem, NSString, SearchResult;

@interface DirectionsWaypoint : NSObject
{
    NSString *_requestSearchString;	// 8 = 0x8
    SearchResult *_requestSearch;	// 16 = 0x10
    AddressBookAddress *_requestAddress;	// 24 = 0x18
    NSString *_suggestionsPrefix;	// 32 = 0x20
    SearchResult *_responseSearch;	// 40 = 0x28
    MKLocalSearchCompletion *_completion;	// 48 = 0x30
    ExternalURLQuery *_externalURLQuery;	// 56 = 0x38
}

+ (id)directionsWaypointWithNanoDirectionWaypoint:(id)arg1;	// IMP=0x00100000002759e3
- (void).cxx_destruct;	// IMP=0x0010000000ac4932
@property(retain, nonatomic) ExternalURLQuery *externalURLQuery; // @synthesize externalURLQuery=_externalURLQuery;
@property(retain, nonatomic) MKLocalSearchCompletion *completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SearchResult *responseSearch; // @synthesize responseSearch=_responseSearch;
@property(retain, nonatomic) NSString *suggestionsPrefix; // @synthesize suggestionsPrefix=_suggestionsPrefix;
@property(retain, nonatomic) AddressBookAddress *requestAddress; // @synthesize requestAddress=_requestAddress;
@property(retain, nonatomic) SearchResult *requestSearch; // @synthesize requestSearch=_requestSearch;
@property(retain, nonatomic) NSString *requestSearchString; // @synthesize requestSearchString=_requestSearchString;
- (id)description;	// IMP=0x0010000000ac44c3
- (unsigned long long)hash;	// IMP=0x0010000000ac4451
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000ac4098
@property(readonly, nonatomic) MKMapItem *mapItemIfLoaded;
@property(readonly, nonatomic) CDStruct_02837cd9 bounds;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) SearchResult *pin;
@property(readonly, nonatomic, getter=isDynamicCurrentLocation) _Bool dynamicCurrentLocation;
@property(readonly, nonatomic) NSString *singleLineAddress;
- (_Bool)containsSearchResult:(id)arg1;	// IMP=0x0010000000ac3e54
@property(readonly, nonatomic) NSString *hawkQueryRepresentation;
@property(readonly, nonatomic) NSString *location;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)updateFromGEOComposedWaypoint:(id)arg1;	// IMP=0x0010000000ac387f
- (id)nanoDirectionWaypoint;	// IMP=0x0010000000275c76

@end

