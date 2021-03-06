//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIDividerView : UIView
{
    long long _dividerOrientation;	// 8 = 0x8
    double _dividerSize;	// 16 = 0x10
}

@property(nonatomic) double dividerSize; // @synthesize dividerSize=_dividerSize;
@property(nonatomic) long long dividerOrientation; // @synthesize dividerOrientation=_dividerOrientation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000011c604
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000011c5fe
@property(retain, nonatomic) UIColor *dividerColor;

@end

