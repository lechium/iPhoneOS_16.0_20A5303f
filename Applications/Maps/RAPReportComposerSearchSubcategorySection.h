//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPQuestion;
@protocol RAPMenu;

@interface RAPReportComposerSearchSubcategorySection
{
    RAPQuestion<RAPMenu> *_question;	// 8 = 0x8
    CDUnknownBlockType _selection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000a70b0d
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;	// IMP=0x0010000000a70a70
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000a7097e
- (long long)rowsCount;	// IMP=0x0010000000a7092f
- (id)initWithQuestion:(id)arg1 selection:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a7080a

@end

