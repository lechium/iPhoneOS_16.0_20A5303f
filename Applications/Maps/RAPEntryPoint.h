//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORoadAccessPoint, NSString;

@interface RAPEntryPoint : NSObject
{
    GEORoadAccessPoint *_accessPoint;	// 8 = 0x8
}

+ (id)entryPointStyleAttributes;	// IMP=0x00200000009617ed
- (void).cxx_destruct;	// IMP=0x0020000000961857
@property(retain, nonatomic) GEORoadAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
@property(readonly, nonatomic) _Bool isDestinationEntryPoint;
- (void)_setType:(long long)arg1;	// IMP=0x0010000000961276
@property(readonly, nonatomic) long long entryPointType;
- (id)markerText;	// IMP=0x0010000000960f73
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000960def
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *subtitle;
- (id)initWithAccessPoint:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000960d3b
- (id)initWithAccessPoint:(id)arg1;	// IMP=0x0010000000960cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

