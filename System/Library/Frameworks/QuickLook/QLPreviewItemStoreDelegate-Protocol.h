//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLItem, QLPreviewItemStore;

@protocol QLPreviewItemStoreDelegate
- (long long)itemStore:(QLPreviewItemStore *)arg1 editingModeForPreviewItem:(QLItem *)arg2;
- (unsigned long long)itemStore:(QLPreviewItemStore *)arg1 editedFileBehaviorForItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canHandleEditedCopyOfPreviewItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canEditItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canShareItem:(QLItem *)arg2;
@end
