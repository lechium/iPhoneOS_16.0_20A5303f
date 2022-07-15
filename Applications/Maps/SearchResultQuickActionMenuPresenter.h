//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, UITableView, UITableViewCell;
@protocol SearchResultQuickActionMenuPresenterDelegate;

@interface SearchResultQuickActionMenuPresenter
{
    UITableView *_tableView;	// 128 = 0x80
    UITableViewCell *_tableViewCell;	// 136 = 0x88
    NSIndexPath *_indexPath;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000914b60
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
- (_Bool)_shouldBeginOrbGestureAtLocation:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x00100000009148c9
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00100000009146c6
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x0010000000914572
- (id)initWithTableView:(id)arg1;	// IMP=0x0010000000914501
- (id)initWithView:(id)arg1;	// IMP=0x00100000009144ed

// Remaining properties
@property(nonatomic) __weak id <SearchResultQuickActionMenuPresenterDelegate> delegate; // @dynamic delegate;

@end
