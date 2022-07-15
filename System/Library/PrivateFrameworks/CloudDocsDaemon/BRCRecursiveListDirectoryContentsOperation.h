//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRCItemID, BRCListDirectoryContentsOperation, BRCServerZone, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCRecursiveListDirectoryContentsOperation
{
    BRCServerZone *_serverZone;	// 48 = 0x30
    NSMutableSet *_itemsToList;	// 56 = 0x38
    BRCItemID *_rootItemID;	// 64 = 0x40
    BRCListDirectoryContentsOperation *_activeListOp;	// 72 = 0x48
    NSMutableSet *_itemsFailedListing;	// 80 = 0x50
    NSMutableArray *_recursiveListCompletionBlocks;	// 88 = 0x58
    _Bool _rescheduleApply;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000002ced50
@property(nonatomic) _Bool rescheduleApply; // @synthesize rescheduleApply=_rescheduleApply;
- (void)addRecursiveDirectoryListCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cebce
- (void)main;	// IMP=0x00000000002cea36
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000002ce8a1
- (void)listNextItem;	// IMP=0x00000000002ce25b
- (void)listOrFetchNextItem;	// IMP=0x00000000002ce211
- (void)fetchNextItemToList;	// IMP=0x00000000002cdc0c
- (_Bool)_finishIfBlockedFromListing;	// IMP=0x00000000002cdb0d
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;	// IMP=0x00000000002cdab0
- (void)cancel;	// IMP=0x00000000002cda0b
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x00000000002cd9f6
- (id)initWithItemID:(id)arg1 zone:(id)arg2 isUserWaiting:(_Bool)arg3;	// IMP=0x00000000002cd81f

@end
