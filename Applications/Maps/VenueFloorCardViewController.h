//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsThemeLabel, UILabel, VenuesManager;

@interface VenueFloorCardViewController
{
    _Bool _isUserLocation;	// 8 = 0x8
    VenuesManager *_venuesManager;	// 16 = 0x10
    MapsThemeLabel *_floorNameLabel;	// 24 = 0x18
    UILabel *_venueNameLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000766db9
@property(nonatomic) _Bool isUserLocation; // @synthesize isUserLocation=_isUserLocation;
@property(retain, nonatomic) UILabel *venueNameLabel; // @synthesize venueNameLabel=_venueNameLabel;
@property(retain, nonatomic) MapsThemeLabel *floorNameLabel; // @synthesize floorNameLabel=_floorNameLabel;
@property(readonly, nonatomic) __weak VenuesManager *venuesManager; // @synthesize venuesManager=_venuesManager;
- (void)updateContents;	// IMP=0x0010000000766a96
- (double)heightForLabel:(id)arg1;	// IMP=0x00100000007669ec
- (id)nameForFloorWithOrdinal:(short)arg1 inBuildings:(id)arg2;	// IMP=0x0010000000766868
- (id)nameForFloorWithOrdinal:(short)arg1 inBuilding:(id)arg2;	// IMP=0x00100000007667de
- (long long)floatingControlsOptions;	// IMP=0x00100000007667d3
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000007666d8
- (void)userLocationDidChange;	// IMP=0x00100000007666c6
- (void)didChangeFocusedVenue:(id)arg1 focusedBuilding:(id)arg2 displayedFloorOrdinal:(short)arg3;	// IMP=0x00100000007666b4
- (void)viewDidLoad;	// IMP=0x0010000000765e3e
- (id)keyCommands;	// IMP=0x0010000000765d99
- (void)handleCloseButtonTap;	// IMP=0x0010000000765d2d
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000765d1f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000765d11
- (id)initWithVenuesManager:(id)arg1;	// IMP=0x0010000000765bfa

@end
