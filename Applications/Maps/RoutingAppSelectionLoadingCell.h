//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class LoadingModeView, UILabel;

@interface RoutingAppSelectionLoadingCell : UITableViewCell
{
    UILabel *_noAppsLabel;	// 8 = 0x8
    LoadingModeView *_loadingView;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000cb4bc
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)_configureViewsForMode:(unsigned long long)arg1;	// IMP=0x00100000000cae4d
- (id)initWithMode:(unsigned long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000cac4a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000cac36

@end

