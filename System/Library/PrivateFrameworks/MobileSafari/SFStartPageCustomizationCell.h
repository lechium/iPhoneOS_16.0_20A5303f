//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class UISwitch;
@protocol SFStartPageCustomizationCellDelegate;

__attribute__((visibility("hidden")))
@interface SFStartPageCustomizationCell : UICollectionViewListCell
{
    UISwitch *_switch;	// 8 = 0x8
    id <SFStartPageCustomizationCellDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000045ced
@property(nonatomic) __weak id <SFStartPageCustomizationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)valueDidChange:(id)arg1;	// IMP=0x0000000000045c69
- (void)setAccessories:(id)arg1;	// IMP=0x0000000000045b7d
@property(nonatomic, getter=isOn) _Bool on;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000045a54

@end

