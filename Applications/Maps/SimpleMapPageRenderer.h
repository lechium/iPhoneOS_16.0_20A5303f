//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SimpleMapPageRenderer
{
    CDStruct_34734122 topLeftCorner;	// 104 = 0x68
    double _widthInMeters;	// 120 = 0x78
}

- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;	// IMP=0x002000000029e158
- (void)drawTopContentInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;	// IMP=0x001000000029e10a
- (void)_setTitlesWithMapItem:(id)arg1;	// IMP=0x001000000029de25
- (void)prepareForDrawingPages:(struct _NSRange)arg1;	// IMP=0x001000000029dd91
- (struct CGRect)overviewRect;	// IMP=0x001000000029dc9f
- (id)initWithMapView:(id)arg1;	// IMP=0x001000000029dc37

@end

