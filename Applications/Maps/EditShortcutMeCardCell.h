//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MapsThemeButton, NSString, UILabel;

@interface EditShortcutMeCardCell : UITableViewCell
{
    UILabel *_label;	// 8 = 0x8
    MapsThemeButton *_button;	// 16 = 0x10
    CDUnknownBlockType _openMeCardHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002ae17d
@property(copy, nonatomic) CDUnknownBlockType openMeCardHandler; // @synthesize openMeCardHandler=_openMeCardHandler;
- (void)_buttonTapped:(id)arg1;	// IMP=0x00100000002ae141
@property(retain, nonatomic) NSString *meCardString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000002ad6a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
