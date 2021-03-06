//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, MapsThemeMultiPartLabel;
@protocol RidesharingEnableAllAppsTableViewCellDelegate;

@interface RidesharingEnableAllAppsTableViewCell
{
    id <RidesharingEnableAllAppsTableViewCellDelegate> _delegate;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    BackgroundColorButton *_enableButton;	// 24 = 0x18
    MapsThemeMultiPartLabel *_secondaryLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000761969
@property(readonly, nonatomic) MapsThemeMultiPartLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) BackgroundColorButton *enableButton; // @synthesize enableButton=_enableButton;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <RidesharingEnableAllAppsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_enableButtonPressed:(id)arg1;	// IMP=0x00100000007618ac
- (void)configureForType:(unsigned long long)arg1;	// IMP=0x00100000007617ba
- (void)_setupConstraints;	// IMP=0x0010000000761161
- (void)updateTheme;	// IMP=0x0010000000760fe6
- (void)_setupViews;	// IMP=0x0010000000760c89
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000760c17

@end

