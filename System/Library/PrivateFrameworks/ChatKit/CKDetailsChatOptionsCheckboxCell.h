//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISwitch;

__attribute__((visibility("hidden")))
@interface CKDetailsChatOptionsCheckboxCell
{
    UISwitch *_controlSwitch;	// 8 = 0x8
}

+ (_Bool)shouldHighlight;	// IMP=0x001000000040e583
+ (id)reuseIdentifier;	// IMP=0x001000000040e576
- (void).cxx_destruct;	// IMP=0x000000000040e898
@property(retain, nonatomic) UISwitch *controlSwitch; // @synthesize controlSwitch=_controlSwitch;
- (void)prepareForReuse;	// IMP=0x000000000040e843
- (void)layoutSubviews;	// IMP=0x000000000040e705
- (void)_configureNewControlSwitch;	// IMP=0x000000000040e61f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000040e58b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000040e417

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
