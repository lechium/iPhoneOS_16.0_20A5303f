//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCellLayoutManager.h>

@interface CenteringCellLayoutManager : UITableViewCellLayoutManager
{
    double _maximumCellContentWidth;	// 8 = 0x8
    struct UIEdgeInsets _minimumHorizontalMargins;	// 16 = 0x10
}

+ (id)layoutManagerForTableViewCellStyle:(long long)arg1;	// IMP=0x00400000004c2483
@property(nonatomic) struct UIEdgeInsets minimumHorizontalMargins; // @synthesize minimumHorizontalMargins=_minimumHorizontalMargins;
@property(nonatomic) double maximumCellContentWidth; // @synthesize maximumCellContentWidth=_maximumCellContentWidth;
- (struct UIEdgeInsets)_marginForRowWith:(double)arg1;	// IMP=0x00100000004c2db3
- (struct CGRect)_offsetAccessoryViewFrame:(struct CGRect)arg1 forCell:(id)arg2;	// IMP=0x00100000004c2c18
- (struct CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;	// IMP=0x00100000004c2b70
- (struct CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2 showingDeleteConfirmation:(_Bool)arg3;	// IMP=0x00100000004c2ac8
- (struct CGRect)_adjustedContentViewFrame:(struct CGRect)arg1 cell:(id)arg2 rowWidth:(double)arg3 accessoryViewFrame:(struct CGRect)arg4;	// IMP=0x00100000004c28a0
- (struct CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;	// IMP=0x00100000004c276e
- (struct CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(_Bool)arg2;	// IMP=0x00100000004c263c
- (struct CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3;	// IMP=0x00100000004c2515
- (id)initWithTableViewCellStyle:(long long)arg1;	// IMP=0x00100000004c24b2

@end

