//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class NSString, UILongPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface STRotatingDisclosureCell : PSTableCell
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000086926
@property(readonly) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000000086908
- (void)_userPressed:(id)arg1;	// IMP=0x0000000000086433
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000008642d
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000008628b
- (void)layoutSubviews;	// IMP=0x0000000000086163
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000085eff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
