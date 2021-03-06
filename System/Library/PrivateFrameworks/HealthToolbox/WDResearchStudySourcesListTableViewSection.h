//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WDSourcesListTableViewSection.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection
{
    NSArray *_researchSources;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000073e12
@property(copy, nonatomic) NSArray *researchSources; // @synthesize researchSources=_researchSources;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000073c6a
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x0000000000073b7c
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;	// IMP=0x0000000000073a4a
- (id)noneString;	// IMP=0x00000000000739ee
- (id)titleForFooter;	// IMP=0x0000000000073992
- (id)titleForHeader;	// IMP=0x0000000000073936
- (unsigned long long)numberOfRows;	// IMP=0x00000000000738eb
- (void)dataSourceDidUpdate;	// IMP=0x00000000000735c0

@end

