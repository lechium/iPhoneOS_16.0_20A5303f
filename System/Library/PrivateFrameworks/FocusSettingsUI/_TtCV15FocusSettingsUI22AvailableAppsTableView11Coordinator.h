//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV15FocusSettingsUI22AvailableAppsTableView11Coordinator : NSObject
{
    MISSING_TYPE *availableApps;	// 8 = 0x8
    MISSING_TYPE *excludedApps;	// 16 = 0x10
    MISSING_TYPE *_selectedApps;	// 24 = 0x18
    MISSING_TYPE *iconCache;	// 48 = 0x30
    MISSING_TYPE *showCheckmarks;	// 56 = 0x38
    MISSING_TYPE *collation;	// 64 = 0x40
    MISSING_TYPE *sections;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000015e5a0
- (id)init;	// IMP=0x000000000015e520
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000000015d560
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000015d550
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000015d4e0
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000015d440
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000015d3d0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000015d2d0
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x000000000015d250
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000015d190
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000015ccb0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000015c6c0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000015c680

@end

