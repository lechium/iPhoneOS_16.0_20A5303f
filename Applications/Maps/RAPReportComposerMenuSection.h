//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPQuestion;
@protocol RAPMenu;

@interface RAPReportComposerMenuSection
{
    RAPQuestion<RAPMenu> *_question;	// 8 = 0x8
    unsigned long long _sectionIndex;	// 16 = 0x10
    CDUnknownBlockType _selection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000009f4ed4
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;	// IMP=0x00100000009f4e26
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x00100000009f4be0
- (long long)rowsCount;	// IMP=0x00100000009f4bb5
- (id)initWithMenu:(id)arg1 headerText:(id)arg2 menuSectionIndex:(unsigned long long)arg3 selection:(CDUnknownBlockType)arg4;	// IMP=0x00100000009f4ac2

@end

