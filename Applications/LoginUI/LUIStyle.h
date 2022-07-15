//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LUILegibilityObserver;

@interface LUIStyle : NSObject
{
    long long _wallpaperVariant;	// 8 = 0x8
    LUILegibilityObserver *_legibilityObserver;	// 16 = 0x10
}

+ (_Bool)isDeviceXL;	// IMP=0x002000000003ac6a
+ (id)sharedStyleForLoggedInState;	// IMP=0x001000000003abd0
+ (id)sharedStyle;	// IMP=0x001000000003ab39
- (void).cxx_destruct;	// IMP=0x002000000003bfad
@property(retain) LUILegibilityObserver *legibilityObserver; // @synthesize legibilityObserver=_legibilityObserver;
@property long long wallpaperVariant; // @synthesize wallpaperVariant=_wallpaperVariant;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;	// IMP=0x001000000003be6c
- (void)applyThemeToTableCell:(id)arg1;	// IMP=0x001000000003bd70
- (void)applyThemeToTitleLabel:(id)arg1;	// IMP=0x001000000003bc0c
- (void)applyThemeToAllTableViews;	// IMP=0x001000000003ba91
- (void)applyThemeToTextView:(id)arg1;	// IMP=0x001000000003b9ea
- (void)applyThemeToLabel:(id)arg1;	// IMP=0x001000000003b946
- (id)tableViewSeperatorColor;	// IMP=0x001000000003b91d
- (unsigned long long)numberOfRecentUsersToShow;	// IMP=0x001000000003b8f8
- (id)backgroundColor;	// IMP=0x001000000003b8df
- (double)fixedWidthForClassTable;	// IMP=0x001000000003b84f
- (struct UIEdgeInsets)edgeInsetsForTable:(id)arg1;	// IMP=0x001000000003b76f
- (double)nonTableHorizontalMargin;	// IMP=0x001000000003b73f
- (double)titleToSubTitleSpacing;	// IMP=0x001000000003b6a6
- (double)singleLineCellHeightForTable:(id)arg1;	// IMP=0x001000000003b698
- (id)footerButtonFont;	// IMP=0x001000000003b677
- (id)tableCellFont;	// IMP=0x001000000003b64b
- (double)bottomInset;	// IMP=0x001000000003b61b
- (double)baselineInsetForSpinner;	// IMP=0x001000000003b5e1
- (double)baselineInsetForFooterButton;	// IMP=0x001000000003b56e
- (struct UIEdgeInsets)edgeInsetsForFooter;	// IMP=0x001000000003b554
- (double)headerTitleMinimumScaleFactor;	// IMP=0x001000000003b531
- (double)_headerFontSize;	// IMP=0x001000000003b523
- (double)footerButtonWidth;	// IMP=0x001000000003b515
- (id)footerButtonTitleFont;	// IMP=0x001000000003b4f4
- (struct UIEdgeInsets)edgeInsetsForFooterButton;	// IMP=0x001000000003b46e
- (struct UIEdgeInsets)tableViewContentInset;	// IMP=0x001000000003b449
- (struct UIEdgeInsets)tableViewSeperatorInset;	// IMP=0x001000000003b41f
- (struct UIEdgeInsets)edgeInsetsForHeader;	// IMP=0x001000000003b32f
- (double)baselineToBottomInsetForFooterButton;	// IMP=0x001000000003b2bc
- (double)sideInsetForHintLabel;	// IMP=0x001000000003b28c
- (double)baselineHintInsetForPasscodeStyle:(int)arg1;	// IMP=0x001000000003b237
- (double)baselineInsetForHeaderTitle;	// IMP=0x001000000003b207
- (id)buttonTitleFont;	// IMP=0x001000000003b1e6
- (id)hintFont;	// IMP=0x001000000003b1c5
- (double)footerTitleLeading;	// IMP=0x001000000003b1b7
- (id)footerTitleFont;	// IMP=0x001000000003b196
- (id)headerSubTitleFont;	// IMP=0x001000000003b175
- (id)headerTitleFont;	// IMP=0x001000000003b143
- (id)chevronColor;	// IMP=0x001000000003b0eb
- (id)secondaryColor;	// IMP=0x001000000003b09b
- (id)overallTextColor;	// IMP=0x001000000003b04b
- (long long)activityIndicatorViewStyle;	// IMP=0x001000000003b008
- (id)monogramGroupImageColor;	// IMP=0x001000000003af2c
- (long long)avatarStyle;	// IMP=0x001000000003aed1
- (long long)statusBarStyle;	// IMP=0x001000000003ae87
- (double)landscapeOffset;	// IMP=0x001000000003ae79
- (id)_defaultWallpaperLegibilitySettings;	// IMP=0x001000000003ae0f
- (id)wallpaperLegibilitySettings;	// IMP=0x001000000003ad52
- (id)initWithWallpaperVariant:(long long)arg1;	// IMP=0x001000000003ad15

@end
