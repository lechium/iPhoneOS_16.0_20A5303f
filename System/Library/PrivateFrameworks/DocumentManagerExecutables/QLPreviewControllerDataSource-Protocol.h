//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLPreviewController;
@protocol QLPreviewItem;

@protocol QLPreviewControllerDataSource
- (id <QLPreviewItem>)previewController:(QLPreviewController *)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(QLPreviewController *)arg1;
@end
