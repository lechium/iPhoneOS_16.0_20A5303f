//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPPlaceCorrectableString, RAPTextTableViewCell;

@interface RAPReportComposerIncorrectNameSection
{
    RAPTextTableViewCell *_cell;	// 8 = 0x8
    _Bool _isRequired;	// 16 = 0x10
    RAPPlaceCorrectableString *_currentLabelCorrectableString;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000007140ec
@property(retain, nonatomic) RAPPlaceCorrectableString *currentLabelCorrectableString; // @synthesize currentLabelCorrectableString=_currentLabelCorrectableString;
- (void)valueForCorrectableItemKind:(long long)arg1 changedTo:(id)arg2;	// IMP=0x00100000007140bb
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000713f5e
- (long long)rowsCount;	// IMP=0x0010000000713f53
- (id)initWithCorrectableString:(id)arg1 required:(_Bool)arg2;	// IMP=0x0010000000713e38
- (id)initWithCorrectableString:(id)arg1;	// IMP=0x0010000000713e21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
