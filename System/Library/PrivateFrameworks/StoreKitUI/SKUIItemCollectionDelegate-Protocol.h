//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIItem, SKUIItemCellLayout, SKUIItemCollectionController, SKUIScreenshot, UIImage;

@protocol SKUIItemCollectionDelegate <NSObject>
- (struct _NSRange)visibleItemRangeForItemCollectionController:(SKUIItemCollectionController *)arg1;
- (struct _NSRange)itemCollectionController:(SKUIItemCollectionController *)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (SKUIItemCellLayout *)itemCollectionController:(SKUIItemCollectionController *)arg1 cellLayoutForItemIndex:(long long)arg2;

@optional
- (_Bool)shouldCacheAheadWhenIdleForItemCollectionController:(SKUIItemCollectionController *)arg1;
- (SKUIScreenshot *)itemCollectionController:(SKUIItemCollectionController *)arg1 screenshotForItem:(SKUIItem *)arg2;
- (void)itemCollectionController:(SKUIItemCollectionController *)arg1 applyScreenshotImage:(UIImage *)arg2 toCellLayout:(SKUIItemCellLayout *)arg3;
@end
