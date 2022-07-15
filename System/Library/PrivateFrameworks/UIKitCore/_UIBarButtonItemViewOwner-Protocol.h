//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIBarButtonItem, UIMenu, UIView;

@protocol _UIBarButtonItemViewOwner <NSObject>
- (void)_itemDidChangeEnabledState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeHiddenState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeSelectionState:(UIBarButtonItem *)arg1;
- (void)_itemDidChangeWidth:(UIBarButtonItem *)arg1;
- (void)_itemStandardViewNeedsUpdate:(UIBarButtonItem *)arg1;
- (void)_itemCustomViewDidChange:(UIBarButtonItem *)arg1 fromView:(UIView *)arg2;

@optional
- (_Bool)_itemDidUpdateMenu:(UIBarButtonItem *)arg1 fromMenu:(UIMenu *)arg2;
@end
