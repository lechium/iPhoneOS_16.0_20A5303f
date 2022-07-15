//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIImageView, UISlider;
@protocol PUSlideshowSpeedCellDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSpeedCell : UITableViewCell
{
    UIImageView *_slowerGlyphImageView;	// 8 = 0x8
    UIImageView *_fasterGlyphImageView;	// 16 = 0x10
    UISlider *_slider;	// 24 = 0x18
    NSArray *_speedConstraints;	// 32 = 0x20
    _Bool _enabled;	// 40 = 0x28
    id <PUSlideshowSpeedCellDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000463bd3
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <PUSlideshowSpeedCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double stepDuration;
- (void)_stepDurationValueChanged:(id)arg1;	// IMP=0x0000000000463a6a
- (void)_updateView;	// IMP=0x0000000000463a3f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000463728
- (void)updateConstraints;	// IMP=0x0000000000463431

@end
