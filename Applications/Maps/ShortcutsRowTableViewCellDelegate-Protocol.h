//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MapsSuggestionsEntry, ShortcutsRowTableViewCell;

@protocol ShortcutsRowTableViewCellDelegate <NSObject>
- (void)shortcutsRowTableViewCell:(ShortcutsRowTableViewCell *)arg1 openShortcut:(MapsSuggestionsEntry *)arg2;
- (void)shortcutsRowTableViewCellAddNewShortcut:(ShortcutsRowTableViewCell *)arg1;
@end

