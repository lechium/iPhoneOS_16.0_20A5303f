//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIAction, UIButton;

__attribute__((visibility("hidden")))
@interface SFStartPageFooterCell : UICollectionViewCell
{
    UIButton *_button;	// 8 = 0x8
    UIAction *_action;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x004000000005dee2
- (void).cxx_destruct;	// IMP=0x000000000005e3c6
@property(retain, nonatomic) UIAction *action; // @synthesize action=_action;
- (void)primaryActionTriggered:(id)arg1;	// IMP=0x000000000005e29c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005deef

@end

