//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files29DOCLegacyWebDAVProviderSource
{
    MISSING_TYPE *rootItemCollection;	// 176 = 0xb0
    MISSING_TYPE *itemManager;	// 184 = 0xb8
    MISSING_TYPE *fileManager;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x004000000032cf20
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;	// IMP=0x001000000032ebc0
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000032ebb0
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;	// IMP=0x001000000032eba0
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x001000000032eb90
- (void)collection:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x001000000032eb20
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000032ea40
- (void)dataForCollectionShouldBeReloaded:(id)arg1;	// IMP=0x001000000032e980
- (void)dealloc;	// IMP=0x001000000032ce30

@end

