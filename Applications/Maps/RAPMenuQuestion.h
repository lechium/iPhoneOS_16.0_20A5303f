//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString, RAPQuestion;
@protocol RAPMenuItem;

@interface RAPMenuQuestion
{
    NSArray *_mainMenuItems;	// 8 = 0x8
    NSArray *_mainMenuQuestionCategories;	// 16 = 0x10
    NSMutableDictionary *_menuItemsByKind;	// 24 = 0x18
    NSArray *_allMenuItems;	// 32 = 0x20
    NSArray *_menuItems;	// 40 = 0x28
    RAPQuestion<RAPMenuItem> *_selectedMenuItem;	// 48 = 0x30
}

+ (id)menuForReport:(id)arg1 state:(id)arg2 onlyShowIncidents:(_Bool)arg3;	// IMP=0x002000000023a7ab
+ (id)menuForReport:(id)arg1 state:(id)arg2;	// IMP=0x001000000023a796
+ (id)localizedHeaderText;	// IMP=0x001000000023a084
- (void).cxx_destruct;	// IMP=0x002000000023ac4d
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (id);	// IMP=0x001000000023ac28
- (_Bool)_isRecursivelyComplete;	// IMP=0x001000000023abd4
- (_Bool)isComplete;	// IMP=0x001000000023abbf
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x001000000023ab4d
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *selectedMenuItem; // @synthesize selectedMenuItem=_selectedMenuItem;
- (id)_newMenuItemWithFollowUpQuestionCategory:(long long)arg1;	// IMP=0x001000000023aaac
- (void)removeMenuItemForFollowUpQuestionCategory:(long long)arg1;	// IMP=0x001000000023aa51
- (id)menuItemWithFollowUpQuestionCategory:(long long)arg1;	// IMP=0x001000000023a933
- (id)followUpQuestionForCategory:(long long)arg1;	// IMP=0x001000000023a92b
@property(readonly, nonatomic) _Bool shouldShowSubtitles;
@property(readonly, nonatomic) _Bool shouldShowIcons;
@property(readonly, nonatomic) NSArray *allMenuItems;
- (_Bool)canDisplayMenuItemForQuestionCategory:(long long)arg1;	// IMP=0x001000000023a49b
@property(readonly, nonatomic) NSArray *mainMenuQuestionCategories;
@property(readonly, nonatomic) NSArray *mainMenuItems;
- (id)menuItemForIndexPath:(id)arg1;	// IMP=0x001000000023a20e
- (unsigned long long)numberOfMenuItemsInSection:(unsigned long long)arg1;	// IMP=0x001000000023a19a
@property(readonly, nonatomic) unsigned long long numberOfSections;
- (void)updateCategoriesFromLayoutManager:(id)arg1;	// IMP=0x001000000023a150
- (void)resetMenu;	// IMP=0x001000000023a0f7
@property(readonly, nonatomic) int analyticTarget;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

