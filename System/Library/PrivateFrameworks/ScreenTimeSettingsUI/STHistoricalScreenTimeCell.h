//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STHistoricalUsageViewController, STHorizontallySegmentedView;

__attribute__((visibility("hidden")))
@interface STHistoricalScreenTimeCell
{
    STHistoricalUsageViewController *_historicalUsageViewController;	// 120 = 0x78
    STHorizontallySegmentedView *_topItemsView;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000005e474
@property(readonly) STHorizontallySegmentedView *topItemsView; // @synthesize topItemsView=_topItemsView;
@property(readonly) STHistoricalUsageViewController *historicalUsageViewController; // @synthesize historicalUsageViewController=_historicalUsageViewController;
- (void)setValue:(id)arg1;	// IMP=0x000000000005de0f
- (id)value;	// IMP=0x000000000005ddd1
- (void)_handleEffectiveChangeForViewMode:(long long)arg1 hasMultilineLayout:(_Bool)arg2 numberOfLines:(unsigned long long)arg3;	// IMP=0x000000000005dc9c
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000000005dbef
- (void)_hasMulitlineLayoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x000000000005daff
- (void)_currentViewModeDidChangeFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x000000000005d9fb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005d59c
- (void)dealloc;	// IMP=0x000000000005d4f3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000005d053

@end

