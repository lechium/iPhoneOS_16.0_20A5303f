//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSTimer, ReadingListFetcherDocument, WebBookmark;

@interface ReadingListFetcher : NSObject
{
    WebBookmark *_bookmarkToFetch;	// 8 = 0x8
    unsigned long long _completedItemCount;	// 16 = 0x10
    unsigned long long _remainingItemCount;	// 24 = 0x18
    long long _archivingMode;	// 32 = 0x20
    ReadingListFetcherDocument *_document;	// 40 = 0x28
    NSMutableDictionary *_pendingBookmarkChanges;	// 48 = 0x30
    NSTimer *_retryBookmarkChangesTimer;	// 56 = 0x38
    NSDictionary *_connectionPropertiesAllowCellularFallback;	// 64 = 0x40
    NSDictionary *_connectionPropertiesForbidCellularFallback;	// 72 = 0x48
    _Bool _aborted;	// 80 = 0x50
    _Bool _readingListCellularFetchingEnabled;	// 81 = 0x51
    _Bool _stopLoadingAfterNextDocumentFinish;	// 82 = 0x52
    NSTimer *_delayBeforeNextFetchTimer;	// 88 = 0x58
    unsigned long long _itemsAttemptedToFetch;	// 96 = 0x60
}

+ (id)sharedReadingListFetcher;	// IMP=0x004000000000352b
- (void).cxx_destruct;	// IMP=0x0020000000006556
- (void)clearChangesForBookmark:(id)arg1;	// IMP=0x00100000000064f2
- (void)queueChangeForBookmark:(id)arg1 previewText:(id)arg2;	// IMP=0x00100000000064d5
- (void)queueChangeForBookmark:(id)arg1 dateLastArchived:(id)arg2;	// IMP=0x00100000000064b8
- (void)queueChangeForBookmark:(id)arg1 archiveStatus:(long long)arg2;	// IMP=0x001000000000641d
- (void)queueChangeForBookmark:(id)arg1 address:(id)arg2;	// IMP=0x0010000000006400
- (void)_queueChangeForBookmark:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0010000000006245
- (id)connectionPropertiesForLocallyAddedItem:(_Bool)arg1;	// IMP=0x001000000000605a
- (void)updateArchivingMode;	// IMP=0x001000000000604c
- (void)_stopFetchingInternal;	// IMP=0x0010000000005f4c
- (void)_startFetchingInternal;	// IMP=0x0010000000005f01
- (_Bool)_isDiskSpaceLow;	// IMP=0x0010000000005ee8
- (unsigned long long)_diskSpaceAvailable;	// IMP=0x0010000000005c4d
- (void)abortAfterCurrentFetchCompletes;	// IMP=0x0010000000005c43
- (void)abortImmediately;	// IMP=0x0010000000005c29
- (void)_cancelFetchIfNecessary;	// IMP=0x0010000000005b4b
- (void)_refreshRemainingItemCount;	// IMP=0x0010000000005a2a
- (id)_nextItemToFetch;	// IMP=0x001000000000541c
- (void)_removePendingChangesFileIfPossible;	// IMP=0x00100000000051c0
- (void)_writeChangesInMemoryToPlist;	// IMP=0x0010000000004e3c
- (id)pendingBookmarkChangesFilePath;	// IMP=0x0010000000004dca
- (void)applyPendingBookmarkChangesSoon;	// IMP=0x0010000000004d68
- (void)applyPendingBookmarkChanges;	// IMP=0x0010000000004870
- (void)tryApplyPendingBookmarkChanges;	// IMP=0x0010000000004762
- (void)didFinishFetchingDocument:(id)arg1;	// IMP=0x00100000000044e1
- (id)currentItemUUID;	// IMP=0x00100000000044cb
- (void)willStartFetchingReaderPage:(id)arg1;	// IMP=0x0010000000004495
- (void)document:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x00100000000043d4
- (double)currentProgress;	// IMP=0x0010000000004357
- (_Bool)_shouldLoadBookmarkConsideringPreviousAttempts:(id)arg1;	// IMP=0x0010000000003d2d
- (void)_fetchNextItem;	// IMP=0x0010000000003729
- (void)_fetchNextItemSoonFired;	// IMP=0x00100000000036e5
- (void)_fetchNextItemSoon;	// IMP=0x0010000000003694
- (void)start;	// IMP=0x00100000000035f3
- (_Bool)_shouldBeFetchingItems;	// IMP=0x00100000000035eb
- (void)dealloc;	// IMP=0x0010000000003568
- (id)init;	// IMP=0x0010000000003210

@end
