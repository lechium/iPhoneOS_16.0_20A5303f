//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMapTable, NSMutableArray;
@protocol WFImageContentItemCellDelegate;

__attribute__((visibility("hidden")))
@interface WFImageContentItemCell : UITableViewCell
{
    NSMapTable *_activityIndicators;	// 8 = 0x8
    NSMutableArray *_imageViews;	// 16 = 0x10
    NSMutableArray *_selectedImageViews;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
    id <WFImageContentItemCellDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000050aae
@property(nonatomic) __weak id <WFImageContentItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000000509ec
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000509a1
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000050999
- (void)imageViewTapped:(id)arg1;	// IMP=0x00000000000508a6
- (void)setSelected:(_Bool)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000050763
- (void)layoutSubviews;	// IMP=0x000000000004ff8c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000004fe14

@end
