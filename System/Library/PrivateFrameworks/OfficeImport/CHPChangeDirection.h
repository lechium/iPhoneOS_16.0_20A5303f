//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHPChangeDirection
{
}

- (void)changeChartDirection:(id)arg1 sheet:(id)arg2;	// IMP=0x00000000001ef377
- (void)changeBarColumnDirection:(id)arg1;	// IMP=0x0000000000395843
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;	// IMP=0x00000000001ef364
- (_Bool)isObjectSupported:(id)arg1;	// IMP=0x000000000017f706
- (void)cleanUpOldSeriesCollection:(id)arg1;	// IMP=0x00000000001f218b
- (void)addDataValue:(id)arg1 to:(id)arg2 withIndex:(unsigned long long)arg3;	// IMP=0x00000000001f14a3
- (id)getGraphicPropertiesForSeriesWithIndex:(unsigned long long)arg1 fromCollection:(id)arg2 isVaryColors:(_Bool)arg3 forChart:(id)arg4;	// IMP=0x00000000001f0386
- (void)mapSeriesValues:(id)arg1 to:(id)arg2 forIndex:(unsigned long long)arg3 byRow:(_Bool)arg4 forChart:(id)arg5;	// IMP=0x00000000001f15b9
- (void)mapSeriesCollection:(id)arg1 from:(id)arg2 forChart:(id)arg3;	// IMP=0x00000000001f0851
- (id)getSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;	// IMP=0x00000000001ef819
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;	// IMP=0x00000000001ef901

@end

