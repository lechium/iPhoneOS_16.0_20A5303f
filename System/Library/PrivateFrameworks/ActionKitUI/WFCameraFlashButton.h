//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSArray, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WFCameraFlashButton : UIControl
{
    _Bool _expanded;	// 8 = 0x8
    _Bool _needsHiding;	// 9 = 0x9
    NSArray *_labels;	// 16 = 0x10
    UILabel *_selectedLabel;	// 24 = 0x18
    UIImageView *_flashView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000035800
@property(nonatomic) _Bool needsHiding; // @synthesize needsHiding=_needsHiding;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak UIImageView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) long long flashMode;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000354b5
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000351c6
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000035159
- (void)didMoveToWindow;	// IMP=0x00000000000350e6
- (void)layoutSubviews;	// IMP=0x0000000000035057
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000034ba4

@end

