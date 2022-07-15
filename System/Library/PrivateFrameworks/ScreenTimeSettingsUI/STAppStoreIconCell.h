//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STAppStoreIconCell
{
    UIImageView *_appIconView;	// 120 = 0x78
    UILabel *_nameLabel;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000001f9e7
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
- (void)_didFetchAppInfoOrIcon:(id)arg1;	// IMP=0x000000000001f97e
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000001f767
- (void)setValue:(id)arg1;	// IMP=0x000000000001f47e
- (id)value;	// IMP=0x000000000001f440
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000001edb0

@end
