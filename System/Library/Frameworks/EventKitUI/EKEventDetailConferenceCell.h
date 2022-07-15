//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class NSArray, NSObject, UIButton, UIListContentView, UIView;
@protocol ConferenceCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailConferenceCell : EKEventDetailCell
{
    UIButton *_openURLButton;	// 24 = 0x18
    UIButton *_shareButton;	// 32 = 0x20
    unsigned long long _actionButtonType;	// 40 = 0x28
    UIListContentView *_listView;	// 48 = 0x30
    UIView *_topSeparator;	// 56 = 0x38
    UIView *_bottomSeparator;	// 64 = 0x40
    NSArray *_constraints;	// 72 = 0x48
    NSObject<ConferenceCellDelegate> *_delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000001febe
@property(nonatomic) __weak NSObject<ConferenceCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_share:(id)arg1;	// IMP=0x000000000001fbbe
- (void)_openURL;	// IMP=0x000000000001f4a0
- (void)tintColorDidChange;	// IMP=0x000000000001f454
- (void)_updateActionButtonWithType:(unsigned long long)arg1;	// IMP=0x000000000001f17b
- (id)_buttonConfigForCurrentTime;	// IMP=0x000000000001ef9c
- (void)updateListConfigWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x000000000001ed1e
- (_Bool)update;	// IMP=0x000000000001e841
- (void)_createConstraints;	// IMP=0x000000000001d764
- (void)_createViews;	// IMP=0x000000000001d22f
- (id)_defaultListConfiguration;	// IMP=0x000000000001d062
- (double)_separatorHeight;	// IMP=0x000000000001d014
- (_Bool)_buttonsShouldUseSeparateLine;	// IMP=0x000000000001cf30
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;	// IMP=0x000000000001ceb0

@end
