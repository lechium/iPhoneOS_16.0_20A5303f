//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CKBrowserSelectionLabelAccessoryView : UIView
{
    UIImageView *_plusLView;	// 8 = 0x8
    UIImageView *_plusDView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000513c2a
@property(retain, nonatomic) UIImageView *plusDView; // @synthesize plusDView=_plusDView;
@property(retain, nonatomic) UIImageView *plusLView; // @synthesize plusLView=_plusLView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000513b72
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000513b25
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000513b11
- (id)initWithLabelAccessoryType:(unsigned long long)arg1;	// IMP=0x00000000005136f6

@end

