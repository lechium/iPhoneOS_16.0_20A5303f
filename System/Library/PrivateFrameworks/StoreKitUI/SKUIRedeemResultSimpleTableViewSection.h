//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUITableViewSection.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultSimpleTableViewSection : SKUITableViewSection
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    UIView *_view;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000012da8
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x0000000000012cdd
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000012c0b
- (long long)numberOfRowsInSection;	// IMP=0x0000000000012c00
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000012b9a
- (id)initWithView:(id)arg1;	// IMP=0x0000000000012b2c

@end
