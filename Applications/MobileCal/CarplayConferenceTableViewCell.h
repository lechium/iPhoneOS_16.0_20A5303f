//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEvent, UIImageView, UILabel;

@interface CarplayConferenceTableViewCell
{
    EKEvent *_event;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UILabel *_subLabel;	// 24 = 0x18
    UIImageView *_icon;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000068c69
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000068bda
- (_Bool)canBecomeFocused;	// IMP=0x0010000000068bd2
- (void)cellWasTapped;	// IMP=0x00100000000689a4
- (void)updateWithEvent:(id)arg1;	// IMP=0x0010000000068569
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000067cf0

@end

