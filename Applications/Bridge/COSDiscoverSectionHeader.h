//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface COSDiscoverSectionHeader : UICollectionReusableView
{
    UILabel *_titleLabel;	// 8 = 0x8
}

+ (double)bottomMargin;	// IMP=0x004000000011bfba
+ (double)topMargin;	// IMP=0x001000000011bfac
+ (id)titleLabelFont;	// IMP=0x001000000011bf39
+ (id)reuseIdentifier;	// IMP=0x001000000011bb4f
- (void).cxx_destruct;	// IMP=0x002000000011c026
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setSectionTitle:(id)arg1;	// IMP=0x001000000011bfc8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000011bb5c

@end

