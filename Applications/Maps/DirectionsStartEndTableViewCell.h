//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DirectionsStartEndContentView, MISSING_TYPE, NSString;

@interface DirectionsStartEndTableViewCell
{
    DirectionsStartEndContentView *_startEndView;	// 8 = 0x8
    _Bool _alignSeparatorWithLeadingText;	// 16 = 0x10
}

+ (Class)startEndViewClass;	// IMP=0x00200000001c5f86
+ (id)reuseIdentifier;	// IMP=0x00100000001c5f74
+ (CDStruct_afa449f9)cellMetricsForIdiom:(long long)arg1;	// IMP=0x00100000001c5f16
- (void).cxx_destruct;	// IMP=0x00200000001c64fe
@property(nonatomic) _Bool alignSeparatorWithLeadingText; // @synthesize alignSeparatorWithLeadingText=_alignSeparatorWithLeadingText;
- (MISSING_TYPE *)setIsDimmedStep: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001c64d1
- (double)heightForWaypoint:(id)arg1 route:(id)arg2 selectedVehicle:(id)arg3 displayedInRoutePlanning:(_Bool)arg4 width:(double)arg5;	// IMP=0x00100000001c64b1
- (void)configureForWaypoint:(id)arg1 route:(id)arg2 selectedVehicle:(id)arg3 displayedInRoutePlanning:(_Bool)arg4;	// IMP=0x00100000001c6494
- (struct CGRect)_separatorFrame;	// IMP=0x00100000001c625c
- (void)prepareForReuse;	// IMP=0x00100000001c6179
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000001c5f97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

