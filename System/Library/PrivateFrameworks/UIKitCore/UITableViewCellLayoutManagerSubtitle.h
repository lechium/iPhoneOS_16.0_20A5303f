//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellLayoutManager.h"

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerSubtitle : UITableViewCellLayoutManager
{
}

- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x0000000000fe56f5
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x0000000000fe53d1
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(_Bool)arg5;	// IMP=0x0000000000fe4fab
- (double)_textLabelYAdjustmentForCell:(id)arg1 totalTextRect:(struct CGRect)arg2;	// IMP=0x0000000000fe4e8f
- (id)defaultDetailTextLabelFontForCell:(id)arg1;	// IMP=0x0000000000fe4dff
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x0000000000fe4c5e
- (id)textLabelForCell:(id)arg1;	// IMP=0x0000000000fe4c20
- (id)imageViewForCell:(id)arg1;	// IMP=0x0000000000fe4be2
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;	// IMP=0x0000000000fe4bd4
- (double)defaultTextLabelFontSizeForCell:(id)arg1;	// IMP=0x0000000000fe4b4c

@end

