//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface DirectionsElevationGraphConfiguration : NSObject
{
    NSString *_specType;	// 8 = 0x8
    long long _useType;	// 16 = 0x10
    long long _userInterfaceIdiom;	// 24 = 0x18
    NSSet *_supportedSignals;	// 32 = 0x20
    _Bool _allowUserInteraction;	// 40 = 0x28
    _Bool _showElevationAxisLabels;	// 41 = 0x29
    double _barWidth;	// 48 = 0x30
    double _gapWidth;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000a2116e
@property(readonly, nonatomic) double gapWidth; // @synthesize gapWidth=_gapWidth;
@property(readonly, nonatomic) double barWidth; // @synthesize barWidth=_barWidth;
@property(nonatomic, getter=showsElevationAxisLabels) _Bool showElevationAxisLabels; // @synthesize showElevationAxisLabels=_showElevationAxisLabels;
@property(nonatomic, getter=allowsUserInteraction) _Bool allowUserInteraction; // @synthesize allowUserInteraction=_allowUserInteraction;
- (id)_urlForType:(id)arg1 device:(id)arg2;	// IMP=0x0010000000a20b3e
- (id)_urlForType:(id)arg1;	// IMP=0x0010000000a20a7d
- (id)_JSONForType:(id)arg1;	// IMP=0x0010000000a209b7
- (id)_testDirectoryURL;	// IMP=0x0010000000a20925
@property(readonly, nonatomic) NSString *chartSpec;
- (unsigned long long)targetNumberOfBarsForRouteLength:(double)arg1 availableWidth:(double)arg2;	// IMP=0x0010000000a204f6
- (_Bool)supportsSignal:(id)arg1;	// IMP=0x0010000000a204e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000a20476
- (id)initWithUseType:(long long)arg1 userInterfaceIdiom:(long long)arg2;	// IMP=0x0010000000a20276

@end

