//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPReportComposerMapPickerSection;

@interface RAPReportComposerMapFeaturePickerPart
{
    RAPReportComposerMapPickerSection *_mapCoordinatePickerSection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000005de938
- (void)updateCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00100000005de91b
- (id)initWithMapPickerSection:(id)arg1;	// IMP=0x00100000005de834
- (id)initWithFeatureKind:(long long)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 delegate:(id)arg3 markerViewAttributes:(id)arg4;	// IMP=0x00100000005de780
- (id)initWithFeatureKind:(long long)arg1 camera:(id)arg2 delegate:(id)arg3 markerViewAttributes:(id)arg4;	// IMP=0x00100000005de6c3

@end
