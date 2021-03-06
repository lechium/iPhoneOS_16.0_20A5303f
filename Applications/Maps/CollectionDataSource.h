//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionEditSession, CollectionHandler, NSArray, NSString;
@protocol CollectionHandlerInfo, DeleteDelegate, ShareDelegate;

@interface CollectionDataSource
{
    CollectionHandler *_collectionHandler;	// 8 = 0x8
    CollectionEditSession *_inputCollectionSession;	// 16 = 0x10
    NSArray *_contentAfterDeletion;	// 24 = 0x18
    _Bool _editing;	// 32 = 0x20
    _Bool _showsHeader;	// 33 = 0x21
    NSArray *_keyCommands;	// 40 = 0x28
    id <ShareDelegate> _shareDelegate;	// 48 = 0x30
    id <DeleteDelegate> _deleteDelegate;	// 56 = 0x38
    long long _sortType;	// 64 = 0x40
    CollectionEditSession *_editSession;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000075e662
@property(retain, nonatomic) CollectionEditSession *editSession; // @synthesize editSession=_editSession;
@property(nonatomic) _Bool showsHeader; // @synthesize showsHeader=_showsHeader;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) __weak id <DeleteDelegate> deleteDelegate; // @synthesize deleteDelegate=_deleteDelegate;
@property(nonatomic) __weak id <ShareDelegate> shareDelegate; // @synthesize shareDelegate=_shareDelegate;
- (id)keyCommands;	// IMP=0x001000000075e591
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000075e4fd
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000075e469
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000075e27f
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x001000000075e117
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x001000000075e05c
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000075df91
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x001000000075dcd8
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x001000000075dcbd
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x001000000075da49
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2;	// IMP=0x001000000075d9f4
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000075d8ec
- (id)_cellForTransitLine:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000075d7f5
- (id)_cellForMapItem:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000075d6d0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000075d5a5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000075d561
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000075d556
- (id)editNameContextualActionAtIndexPath:(id)arg1;	// IMP=0x000000000075d303
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x001000000075d1d1
- (id)deleteContextualActionAtIndexPath:(id)arg1;	// IMP=0x001000000075d03e
- (void)_updateKeyCommandsAtIndexPath:(id)arg1;	// IMP=0x001000000075cd3e
- (id)editNameKeyCommandAtIndexPath:(id)arg1;	// IMP=0x001000000075cb6f
- (void)editNameRow:(id)arg1;	// IMP=0x001000000075cb23
- (void)shareRow:(id)arg1;	// IMP=0x001000000075cad7
- (void)deleteRow:(id)arg1;	// IMP=0x001000000075ca8b
- (int)targetForDragAnalytics;	// IMP=0x001000000075c9bc
- (id)objectsForAnalytics;	// IMP=0x001000000075c974
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x001000000075c8aa
- (id)currentContent;	// IMP=0x001000000075c800
@property(readonly, nonatomic) id <CollectionHandlerInfo> collectionInfo;
- (void)selectAll;	// IMP=0x001000000075c65b
- (void)collectionHandlerInfoUpdated:(id)arg1;	// IMP=0x001000000075c655
- (void)collectionHandlerContentUpdated:(id)arg1;	// IMP=0x001000000075c503
- (void)editNameRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000075c348
- (void)shareRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000075c115
- (void)deleteRowAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000075ba78
- (void)_contentSizeCategoryDidChange;	// IMP=0x001000000075ba3b
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000075b98e
- (void)dealloc;	// IMP=0x001000000075b919
- (void)_commonInitWithTableView:(id)arg1;	// IMP=0x001000000075b7af
- (id)initWithTableView:(id)arg1 collection:(id)arg2;	// IMP=0x001000000075b6ef
- (id)initWithTableView:(id)arg1 collectionEditSession:(id)arg2;	// IMP=0x001000000075b64b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

