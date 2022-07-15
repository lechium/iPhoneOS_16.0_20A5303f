//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitLineMarker : NSObject
{
    id <GEOTransitLine> _line;	// 8 = 0x8
    struct CLLocationCoordinate2D _locationHint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014bce8
- (id)artwork;	// IMP=0x000000000014bcd2
- (id)labelText;	// IMP=0x000000000014bc54
- (id)mapItemIdentifier;	// IMP=0x000000000014bb55
- (id)initWithGEOTransitLine:(id)arg1 locationHint:(struct CLLocationCoordinate2D)arg2;	// IMP=0x000000000014bacc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
