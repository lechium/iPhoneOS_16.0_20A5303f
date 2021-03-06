//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNContact, UIImageView;

@interface MeCardShortcutView : UIView
{
    UIImageView *_homeImageview;	// 8 = 0x8
    UIImageView *_workImageview;	// 16 = 0x10
    UIImageView *_schoolImageview;	// 24 = 0x18
    CNContact *_contact;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000080c96b
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)_createViews;	// IMP=0x001000000080b76a
- (id)initWithContact:(id)arg1;	// IMP=0x001000000080b6d5
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000080b6cd

@end

