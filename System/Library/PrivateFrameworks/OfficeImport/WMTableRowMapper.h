//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper
{
    WDTableRow *mWdTableRow;	// 40 = 0x28
    double mHeight;	// 48 = 0x30
}

+ (_Bool)isTableRowDeleted:(id)arg1;	// IMP=0x00600000000f9ca4
- (void).cxx_destruct;	// IMP=0x0000000000460088
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000faa94
- (double)height;	// IMP=0x00000000000faf82
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000fa8d1
- (void)setRowProperties:(id)arg1;	// IMP=0x00000000000fa9e5

@end
