//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI18ProfilePrivacyView
{
    MISSING_TYPE *delegate;	// 160 = 0xa0
    MISSING_TYPE *isUnderage;	// 176 = 0xb0
    MISSING_TYPE *primaryTrayButton;	// 184 = 0xb8
    MISSING_TYPE *$__lazy_storage_$_tableData;	// 192 = 0xc0
    MISSING_TYPE *tableView;	// 200 = 0xc8
    MISSING_TYPE *tableViewHeight;	// 208 = 0xd0
    MISSING_TYPE *$__lazy_storage_$_tableHeightAnchor;	// 216 = 0xd8
    MISSING_TYPE *selectedPrivacyChoiceIndex;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000003a9080
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000003a8f20
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000003a8f10
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000003a8e20
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003a8d60
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000003a8450
- (void)primaryAction;	// IMP=0x00000000003a8100
- (void)layoutSubviews;	// IMP=0x00000000003a7d90
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003a7c60

@end

