//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapCamera, RAPInlineMapViewModel, RAPMapViewTableViewCell;

@interface RAPReportComposerMapPickerSection
{
    RAPInlineMapViewModel *_mapViewModel;	// 8 = 0x8
    RAPMapViewTableViewCell *_mapViewCell;	// 16 = 0x10
    MKMapCamera *_camera;	// 24 = 0x18
    long long _kind;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000714517
- (void)registerReuseIdentifiersForCells;	// IMP=0x00100000007144e2
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;	// IMP=0x001000000071448b
- (id)headerTitle;	// IMP=0x00100000007143ab
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000714346
- (long long)rowsCount;	// IMP=0x001000000071433b
- (void)updateCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x001000000071431e
- (id)initWithFeatureKind:(long long)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 delegate:(id)arg3 markerViewAttributes:(id)arg4;	// IMP=0x00100000007141d5
- (id)initWithFeatureKind:(long long)arg1 camera:(id)arg2 delegate:(id)arg3 markerViewAttributes:(id)arg4;	// IMP=0x001000000071411d

@end
