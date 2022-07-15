//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CuratedCollectionActionCellModel, MUPlaceCardActionsRowView;

@interface CuratedCollectionActionTableViewCell : UITableViewCell
{
    _Bool _alwaysUseLightForegroundColors;	// 8 = 0x8
    MUPlaceCardActionsRowView *_actionRowView;	// 16 = 0x10
    CuratedCollectionActionCellModel *_model;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x0040000000ae3c59
- (void).cxx_destruct;	// IMP=0x0020000000ae3cbd
@property(retain, nonatomic) CuratedCollectionActionCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MUPlaceCardActionsRowView *actionRowView; // @synthesize actionRowView=_actionRowView;
@property(nonatomic) _Bool alwaysUseLightForegroundColors; // @synthesize alwaysUseLightForegroundColors=_alwaysUseLightForegroundColors;
- (void)_resetActionRow;	// IMP=0x0010000000ae3b8f
- (void)configureWithModel:(id)arg1;	// IMP=0x0010000000ae3b18
- (void)setAlwaysUseLightForegroundColors:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000ae38c4
- (void)layoutMarginsDidChange;	// IMP=0x0010000000ae382a
- (void)_setupConstraints;	// IMP=0x0010000000ae3390
- (void)_createSubviews;	// IMP=0x0010000000ae30d6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000ae3066

@end
