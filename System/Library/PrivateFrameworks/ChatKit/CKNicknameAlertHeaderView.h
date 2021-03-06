//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CKAvatarView, IMNickname, UILabel;

__attribute__((visibility("hidden")))
@interface CKNicknameAlertHeaderView : UIView
{
    IMNickname *_nickname;	// 8 = 0x8
    CKAvatarView *_avatarView;	// 16 = 0x10
    UILabel *_nameLabel;	// 24 = 0x18
    UILabel *_handleLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000031b24f
@property(retain, nonatomic) UILabel *handleLabel; // @synthesize handleLabel=_handleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) IMNickname *nickname; // @synthesize nickname=_nickname;
- (id)handleText;	// IMP=0x000000000031b13a
- (id)nameText;	// IMP=0x000000000031af3a
- (void)_updateAvatarView;	// IMP=0x000000000031adc2
- (void)layoutSubviews;	// IMP=0x000000000031a57e
- (void)setupViews;	// IMP=0x000000000031a1e7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000031a132
- (id)initWithFrame:(struct CGRect)arg1 nickname:(id)arg2;	// IMP=0x000000000031a0b4

@end

