//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, MISSING_TYPE, NSString;

@interface MapsSuggestionsBreadcrumb : NSObject
{
    int _likelyTransportMode;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001b4f9
+ (id)breadcrumbWithData:(id)arg1;	// IMP=0x001000000001b0e3
- (void).cxx_destruct;	// IMP=0x002000000001b7d3
@property(readonly, nonatomic) int likelyTransportMode; // @synthesize likelyTransportMode=_likelyTransportMode;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)objectForJSON;	// IMP=0x001000000001b67c
- (id)nameForJSON;	// IMP=0x001000000001b66f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001b63d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001b5d0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001b501
@property(readonly, copy) NSString *description;
- (MISSING_TYPE *)isEqual: /* Error: Ran out of types for this method. */;	// IMP=0x001000000001b350
- (_Bool)isEqualToBreadcrumb:(id)arg1;	// IMP=0x001000000001b2e8
- (id)data;	// IMP=0x001000000001afc8
- (id)initWithLocation:(id)arg1;	// IMP=0x001000000001afb1
- (id)initWithLocation:(id)arg1 transportMode:(int)arg2;	// IMP=0x001000000001aefd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

