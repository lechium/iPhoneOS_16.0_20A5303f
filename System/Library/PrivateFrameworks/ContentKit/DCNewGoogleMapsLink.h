//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DCMapsLink.h"

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DCNewGoogleMapsLink : DCMapsLink
{
    _Bool _showsTransit;	// 8 = 0x8
    _Bool _showsBicycling;	// 9 = 0x9
    _Bool _showsStreetView;	// 10 = 0xa
    _Bool _showsTraffic;	// 11 = 0xb
    _Bool _parsed;	// 12 = 0xc
    int _linkType;	// 16 = 0x10
    unsigned long long _mapType;	// 24 = 0x18
    unsigned long long _directionsMode;	// 32 = 0x20
    long long _zoomLevel;	// 40 = 0x28
    NSURL *_URL;	// 48 = 0x30
    NSArray *_mapsURLComponents;	// 56 = 0x38
    NSString *_location;	// 64 = 0x40
}

+ (id)mapsLinkWithURL:(id)arg1;	// IMP=0x00600000000a8b02
+ (_Bool)isMapsURL:(id)arg1;	// IMP=0x00600000000a88a1
- (void).cxx_destruct;	// IMP=0x00000000000a9bf2
@property(readonly, nonatomic) _Bool parsed; // @synthesize parsed=_parsed;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *mapsURLComponents; // @synthesize mapsURLComponents=_mapsURLComponents;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)parseMapsData;	// IMP=0x00000000000a9640
- (id)dataString;	// IMP=0x00000000000a94c3
- (void)parse;	// IMP=0x00000000000a947d
- (void)parseLatLonZoom;	// IMP=0x00000000000a925b
- (id)latLonZoomString;	// IMP=0x00000000000a920d
- (void)parseLinkType;	// IMP=0x00000000000a9128
@property(readonly, nonatomic) int linkType; // @synthesize linkType=_linkType;
- (id)mapsURLComponentAtIndex:(long long)arg1;	// IMP=0x00000000000a9057
- (id)streetViewLocation;	// IMP=0x00000000000a8f55
- (_Bool)showsBicycling;	// IMP=0x00000000000a8f1a
- (_Bool)showsStreetView;	// IMP=0x00000000000a8edf
- (_Bool)showsTransit;	// IMP=0x00000000000a8ea4
- (_Bool)showsTraffic;	// IMP=0x00000000000a8e69
- (unsigned long long)mapType;	// IMP=0x00000000000a8e2d
- (long long)zoomLevel;	// IMP=0x00000000000a8df1
- (id)centerLocation;	// IMP=0x00000000000a8db1
- (unsigned long long)directionsMode;	// IMP=0x00000000000a8d80
- (id)destinationAddress;	// IMP=0x00000000000a8cf8
- (id)startAddress;	// IMP=0x00000000000a8c70
- (id)searchLocation;	// IMP=0x00000000000a8c2b
- (id)searchNearQuery;	// IMP=0x00000000000a8c23
- (id)searchQuery;	// IMP=0x00000000000a8bd7
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000a8b67

@end

