//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPCommentQuestion;

@interface RAPReportComposerEmailSection
{
    RAPCommentQuestion *_question;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000008847a8
- (void)valueForCorrectableItemKind:(long long)arg1 changedTo:(id)arg2;	// IMP=0x001000000088472e
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x00100000008845de
- (long long)rowsCount;	// IMP=0x00100000008845d3
- (id)headerTitle;	// IMP=0x001000000088456b
- (id)initWithQuestion:(id)arg1;	// IMP=0x00100000008844fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

