//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI14MiniPlayerView : UIView
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *artworkView;	// 24 = 0x18
    MISSING_TYPE *controlsStackView;	// 32 = 0x20
    MISSING_TYPE *metadataStackView;	// 40 = 0x28
    MISSING_TYPE *playPauseControl;	// 48 = 0x30
    MISSING_TYPE *skipForwardControl;	// 56 = 0x38
    MISSING_TYPE *titleLabel;	// 64 = 0x40
    MISSING_TYPE *layoutSolver;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000004ff070
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004ff010
- (void)tapRecognized:(id)arg1;	// IMP=0x00000000004fefc0
- (void)playbackControlTapped:(id)arg1;	// IMP=0x00000000004fef20
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004fef00
- (void)layoutSubviews;	// IMP=0x00000000004fee80

@end
