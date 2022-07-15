//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SleepHealthUI/NSObject-Protocol.h>

@class UIColor, UIFont, UIView;

@protocol TKVibrationPickerStyleProvider <NSObject>
@property(nonatomic, readonly) struct UIEdgeInsets vibrationPickerHeaderTextPaddingInsets;
@property(nonatomic, readonly) struct UIOffset vibrationPickerHeaderTextShadowOffset;
@property(nonatomic, readonly) UIColor *vibrationPickerHeaderTextShadowColor;
@property(nonatomic, readonly) UIColor *vibrationPickerHeaderTextColor;
@property(nonatomic, readonly) UIFont *vibrationPickerHeaderTextFont;
@property(nonatomic, readonly) _Bool wantsCustomVibrationPickerHeaderView;
- (UIView *)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (UIView *)newBackgroundViewForSelectedVibrationPickerCell:(_Bool)arg1;
@property(nonatomic, readonly) UIColor *vibrationPickerCellBackgroundColor;
@property(nonatomic, readonly) UIColor *vibrationPickerCellHighlightedTextColor;
@property(nonatomic, readonly) UIColor *vibrationPickerCellTextColor;
@property(nonatomic, readonly) UIFont *vibrationPickerCellTextFont;
@property(nonatomic, readonly) long long vibrationPickerTableViewSeparatorStyle;
@property(nonatomic, readonly) _Bool vibrationPickerUsesOpaqueBackground;

@optional
@property(nonatomic, readonly) _Bool vibrationPickerHeaderTextShouldBeUppercase;
@property(nonatomic, readonly) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property(nonatomic, readonly) UIColor *vibrationPickerCustomTableSeparatorColor;
@property(nonatomic, readonly) UIColor *vibrationPickerCustomBackgroundColor;
@end
