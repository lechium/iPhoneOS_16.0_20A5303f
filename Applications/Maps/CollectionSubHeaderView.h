//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;
@protocol CollectionHeaderActionTypeDelegate;

@interface CollectionSubHeaderView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIButton *_sortButton;	// 16 = 0x10
    UIButton *_saveButton;	// 24 = 0x18
    NSLayoutConstraint *_saveButtonHeightConstraint;	// 32 = 0x20
    _Bool _editing;	// 40 = 0x28
    id <CollectionHeaderActionTypeDelegate> _delegate;	// 48 = 0x30
    unsigned long long _type;	// 56 = 0x38
    long long _sortType;	// 64 = 0x40
    double _shrinkFactor;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000078bd19
@property(nonatomic) double shrinkFactor; // @synthesize shrinkFactor=_shrinkFactor;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <CollectionHeaderActionTypeDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_titleForSortType:(long long)arg1;	// IMP=0x001000000078bbc0
- (id)_createUIActionForSortType:(long long)arg1;	// IMP=0x001000000078ba3f
- (id)_createMenuForSortButton;	// IMP=0x001000000078b8f1
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000078b881
@property(readonly, nonatomic) double originalHeight;
- (double)_height;	// IMP=0x001000000078b77e
- (void)createEditContent;	// IMP=0x001000000078ae92
- (void)_updateSortButton;	// IMP=0x001000000078ae31
- (void)createSaveContent;	// IMP=0x001000000078a768
- (void)loadContent;	// IMP=0x001000000078a6a9
- (void)contentSizeChanged:(id)arg1;	// IMP=0x001000000078a697
- (void)saveAction:(id)arg1;	// IMP=0x001000000078a65b
- (void)updateFonts;	// IMP=0x001000000078a366
- (id)_currentFont;	// IMP=0x001000000078a311
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x001000000078a25d

@end

