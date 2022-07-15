//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPItem, FPItemCollection, NSString, QLURLHandler;

__attribute__((visibility("hidden")))
@interface QLFPItemFetcher
{
    FPItem *_fpItem;	// 8 = 0x8
    QLURLHandler *_fetchedURLHandler;	// 16 = 0x10
    FPItemCollection *_itemCollection;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000180fa
- (void).cxx_destruct;	// IMP=0x0000000000018269
- (void)dataForCollectionShouldBeReloaded:(id)arg1;	// IMP=0x0000000000018263
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;	// IMP=0x000000000001825d
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018257
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;	// IMP=0x0000000000018251
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000001824b
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000000018245
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;	// IMP=0x0000000000018231
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001817f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018102
- (void)prepareShareableItem:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017ffe
- (id)itemSize;	// IMP=0x0000000000017fe1
- (_Bool)isLongFetchOperation;	// IMP=0x0000000000017f9f
- (id)shareableItem;	// IMP=0x0000000000017f82
- (id)fileURL;	// IMP=0x0000000000017f65
- (void)dealloc;	// IMP=0x0000000000017f27
- (void)_urlHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017ce5
- (void)_unregisterItemCollectionIfNeeded;	// IMP=0x0000000000017bf5
- (void)_registerItemCollectionIfNeeded;	// IMP=0x0000000000017a7a
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001777c
- (id)initWithFPItem:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;	// IMP=0x0000000000017707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
