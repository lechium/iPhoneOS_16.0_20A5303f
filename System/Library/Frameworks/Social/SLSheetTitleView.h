//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SLSheetTitleView : UIView
{
    UIImageView *_serviceIconView;	// 8 = 0x8
    NSMutableArray *_constraints;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000041da1
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000041cc5
- (void)sizeToFit;	// IMP=0x0000000000041c67
- (void)setServiceIconImage:(id)arg1;	// IMP=0x0000000000041b92
- (void)_setupTitleLabel;	// IMP=0x0000000000041a02
- (void)layoutSubviews;	// IMP=0x00000000000419b9
- (void)updateConstraints;	// IMP=0x00000000000416ea
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004166c

@end

