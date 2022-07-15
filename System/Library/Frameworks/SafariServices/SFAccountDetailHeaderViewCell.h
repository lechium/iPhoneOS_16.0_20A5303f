//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface SFAccountDetailHeaderViewCell : UITableViewCell
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_monogramLabel;	// 16 = 0x10
    UIView *_monogramBackgroundView;	// 24 = 0x18
    UIStackView *_labelStackView;	// 32 = 0x20
    UILabel *_domainLabel;	// 40 = 0x28
    UILabel *_lastModifiedDateLabel;	// 48 = 0x30
    NSString *_highLevelDomain;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b7a15
- (void)_hideMonogramIcon;	// IMP=0x00000000000b79c2
- (void)_showMonogramIconWithBackgroundColor:(id)arg1;	// IMP=0x00000000000b767f
- (void)setLastModifiedDateString:(id)arg1;	// IMP=0x00000000000b7662
- (void)setHighLevelDomain:(id)arg1;	// IMP=0x00000000000b757f
- (void)setMonogramBackgroundColor:(id)arg1;	// IMP=0x00000000000b756d
- (void)setIcon:(id)arg1;	// IMP=0x00000000000b74b6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000b6cd7

@end
