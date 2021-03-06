//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString, PHAsset, PLCloudSharedComment, PLManagedAsset, PUPhotoCommentEntryView, UITableView;
@protocol PUCommentsTableDataControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsTableDataController : NSObject
{
    NSCache *_commentsHeightCache;	// 8 = 0x8
    PUPhotoCommentEntryView *_entryView;	// 16 = 0x10
    _Bool _hasPendingChanges;	// 24 = 0x18
    _Bool _editing;	// 25 = 0x19
    _Bool _shouldUseCompactCommentSeparators;	// 26 = 0x1a
    UITableView *_tableView;	// 32 = 0x20
    PHAsset *_asset;	// 40 = 0x28
    id <PUCommentsTableDataControllerDelegate> _delegate;	// 48 = 0x30
    PLManagedAsset *_managedAsset;	// 56 = 0x38
    PLCloudSharedComment *_justInsertedComment;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000115a04
@property(retain, nonatomic) PLCloudSharedComment *justInsertedComment; // @synthesize justInsertedComment=_justInsertedComment;
@property(retain, nonatomic) PLManagedAsset *managedAsset; // @synthesize managedAsset=_managedAsset;
@property(nonatomic) __weak id <PUCommentsTableDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldUseCompactCommentSeparators; // @synthesize shouldUseCompactCommentSeparators=_shouldUseCompactCommentSeparators;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)cloudCommentsDidChange:(id)arg1;	// IMP=0x000000000011536b
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;	// IMP=0x000000000011532f
- (_Bool)photoCommentEntryViewShouldEndEditing:(id)arg1;	// IMP=0x0000000000115284
- (void)photoCommentEntryViewDidBeginEditing:(id)arg1;	// IMP=0x000000000011527e
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;	// IMP=0x0000000000115267
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;	// IMP=0x0000000000115261
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001151ec
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000000001150e2
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000114faa
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000114f5c
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000114f1a
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000114e0b
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000114b65
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000114686
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001145cb
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001145b5
- (void)_validateAndPostComment:(id)arg1;	// IMP=0x0000000000114402
- (void)_fontCacheDidChange:(id)arg1;	// IMP=0x00000000001143cf
- (void)_postCommentWithText:(id)arg1;	// IMP=0x00000000001142ea
- (_Bool)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id *)arg2;	// IMP=0x00000000001141c6
- (id)_commentText;	// IMP=0x0000000000114176
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;	// IMP=0x0000000000113ffb
- (void)_scrollToComment:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000113ee0
- (id)_currentEntryView;	// IMP=0x0000000000113e07
- (long long)_textCommentSection;	// IMP=0x0000000000113dee
- (long long)_postCommentSection;	// IMP=0x0000000000113dd4
- (long long)_assetOwnerCommentSection;	// IMP=0x0000000000113dac
- (long long)_smileCommentSection;	// IMP=0x0000000000113da4
- (_Bool)_isAssetOwnerSectionVisible;	// IMP=0x0000000000113cc7
- (void)_updateFirstResponder;	// IMP=0x0000000000113c1e
@property(readonly, nonatomic) double minimumHeight;
- (void)dealloc;	// IMP=0x000000000011385d
- (id)init;	// IMP=0x0000000000113849
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000000113745

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

