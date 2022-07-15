//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView, WBSSavedAccount;
@protocol SFAccountTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFAccountTableViewCell : UITableViewCell
{
    UILabel *_monogramLabel;	// 8 = 0x8
    UIView *_monogramBackgroundView;	// 16 = 0x10
    WBSSavedAccount *_savedAccount;	// 24 = 0x18
    NSString *_searchPattern;	// 32 = 0x20
    id <SFAccountTableViewCellDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c3357
@property(nonatomic) __weak id <SFAccountTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;
@property(readonly, nonatomic) WBSSavedAccount *savedAccount; // @synthesize savedAccount=_savedAccount;
- (void)_updateAccessibilityIdentifiers;	// IMP=0x00000000000c32b1
@property(readonly, nonatomic) _Bool isIconMonogram;
- (void)safari_copyOneTimeCode;	// IMP=0x00000000000c3213
@property(readonly, nonatomic) _Bool safari_hasOneTimeCodeGenerator;
- (void)safari_copyPassword;	// IMP=0x00000000000c3127
- (void)safari_copyUserName;	// IMP=0x00000000000c30a9
- (void)setSavedAccount:(id)arg1 withWarnings:(id)arg2 savedAccountIsOnlySavedAccountForHighLevelDomain:(_Bool)arg3;	// IMP=0x00000000000c2dda
- (void)setSavedAccount:(id)arg1 searchPattern:(id)arg2 emphasizeUserName:(_Bool)arg3;	// IMP=0x00000000000c2beb
- (void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000000000c281c
- (void)setIcon:(id)arg1;	// IMP=0x00000000000c2720
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000c26a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
