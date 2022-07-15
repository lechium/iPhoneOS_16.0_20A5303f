//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumberFormatter, SKUIClientContext, SKUIColorScheme, SKUIProductPageTableExpandableHeaderView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableInAppPurchasesSection
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIColorScheme *_colorScheme;	// 16 = 0x10
    SKUIProductPageTableExpandableHeaderView *_headerView;	// 24 = 0x18
    NSArray *_inAppPurchases;	// 32 = 0x20
    NSNumberFormatter *_numberFormatter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001e20b3
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void)_reloadHeaderView;	// IMP=0x00000000001e1f42
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001e1c2b
- (void)setExpanded:(_Bool)arg1;	// IMP=0x00000000001e1bea
- (long long)numberOfRowsInSection;	// IMP=0x00000000001e1b31
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001e1b20
- (id)headerViewForTableView:(id)arg1;	// IMP=0x00000000001e19f6
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000001e1948

@end
