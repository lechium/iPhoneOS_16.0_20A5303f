//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UIPickerTableView, UIPickerView;

__attribute__((visibility("hidden")))
@interface UIPickerColumnView : UIView
{
    UIPickerTableView *_topTable;	// 184 = 0xb8
    UIPickerTableView *_middleTable;	// 192 = 0xc0
    UIPickerTableView *_bottomTable;	// 200 = 0xc8
    UIView *_topContainerView;	// 208 = 0xd0
    UIView *_middleContainerView;	// 216 = 0xd8
    UIView *_bottomContainerView;	// 224 = 0xe0
    double _middleBarHeight;	// 232 = 0xe8
    double _rowHeight;	// 240 = 0xf0
    UIPickerView *_pickerView;	// 248 = 0xf8
    struct CGRect _tableFrame;	// 256 = 0x100
    struct CATransform3D _perspectiveTransform;	// 288 = 0x120
    _Bool _isNoLongerInUse;	// 416 = 0x1a0
    UIColor *__textColor;	// 424 = 0x1a8
    double _leftHitTestExtension;	// 432 = 0x1b0
    double _rightHitTestExtension;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x0000000000dc6e87
@property(nonatomic) _Bool isNoLongerInUse; // @synthesize isNoLongerInUse=_isNoLongerInUse;
@property(nonatomic) double rightHitTestExtension; // @synthesize rightHitTestExtension=_rightHitTestExtension;
@property(nonatomic) double leftHitTestExtension; // @synthesize leftHitTestExtension=_leftHitTestExtension;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor; // @synthesize _textColor=__textColor;
@property(nonatomic) struct CATransform3D perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) UIView *highlightedRegion;
@property(readonly, nonatomic) UIView *view;
- (id)_viewToAddFocusLayer;	// IMP=0x0000000000dc6d14
- (id)_defaultFocusEffect;	// IMP=0x0000000000dc6cc4
- (struct CGRect)accessibilityFrame;	// IMP=0x0000000000dc6ca4
- (struct CGRect)_defaultFocusRegionFrame;	// IMP=0x0000000000dc6c84
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x0000000000dc6bbf
- (_Bool)canBecomeFocused;	// IMP=0x0000000000dc6baf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000dc6a3f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000dc69c1
- (id)_visibleCellClosestToPoint:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x0000000000dc6733
- (id)_allVisibleCells;	// IMP=0x0000000000dc6625
- (struct _NSRange)_visibleGlobalRows;	// IMP=0x0000000000dc6608
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x0000000000dc6535
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;	// IMP=0x0000000000dc6390
- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint)arg2;	// IMP=0x0000000000dc631e
- (void)setAllowsMultipleSelection:(_Bool)arg1;	// IMP=0x0000000000dc6278
- (void)endUpdates;	// IMP=0x0000000000dc61e1
- (void)beginUpdates;	// IMP=0x0000000000dc614a
- (void)reloadData;	// IMP=0x0000000000dc60b3
- (id)cellForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000dc5feb
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x0000000000dc5fce
- (_Bool)_usesCheckSelection;	// IMP=0x0000000000dc5f94
- (_Bool)_soundsEnabled;	// IMP=0x0000000000dc5f5a
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(_Bool)arg3;	// IMP=0x0000000000dc5ee5
@property(nonatomic) struct CGRect selectionBarRect;
- (void)markAsNoLongerInUse;	// IMP=0x0000000000dc5e90
@property(readonly, nonatomic) long long selectionBarRow;
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000dc5d90
- (_Bool)isRowChecked:(long long)arg1;	// IMP=0x0000000000dc5d73
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;	// IMP=0x0000000000dc5d56
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x0000000000dc5d3e
- (double)_horizontalBiasForEndTables;	// IMP=0x0000000000dc5c7d
- (_Bool)_pointLiesWithinEffectiveTableBounds:(struct CGPoint)arg1;	// IMP=0x0000000000dc5c11
- (struct CGRect)_tableFrame;	// IMP=0x0000000000dc5bf1
- (id)_preferredTable;	// IMP=0x0000000000dc5bdc
- (_Bool)_containsTable:(id)arg1;	// IMP=0x0000000000dc5b53
- (id)initWithFrame:(struct CGRect)arg1 tableFrame:(struct CGRect)arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(struct CATransform3D)arg6;	// IMP=0x0000000000dc52c7
- (struct CATransform3D)_transformForTableWithTranslationX:(double)arg1;	// IMP=0x0000000000dc5287
- (struct CATransform3D)_transformForTableWithPerspectiveTranslationX:(double)arg1;	// IMP=0x0000000000dc5126
- (id)_createContainerViewWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000dc50c9
- (void)_centerTableInContainer:(id)arg1;	// IMP=0x0000000000dc4fea
- (id)_createTableViewWithFrame:(struct CGRect)arg1 containingFrame:(struct CGRect)arg2;	// IMP=0x0000000000dc4ed5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
