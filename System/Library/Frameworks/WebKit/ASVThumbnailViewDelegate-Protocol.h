//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class ASVThumbnailView, QLItem, QLPreviewController;

@protocol ASVThumbnailViewDelegate <NSObject>
- (void)thumbnailView:(ASVThumbnailView *)arg1 wantsToPresentPreviewController:(QLPreviewController *)arg2 forItem:(QLItem *)arg3;
@end
