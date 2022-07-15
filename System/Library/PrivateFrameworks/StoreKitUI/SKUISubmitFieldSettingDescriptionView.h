//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIFieldSettingDescription, SKUIInputViewElement, UILabel;

__attribute__((visibility("hidden")))
@interface SKUISubmitFieldSettingDescriptionView
{
    double _aggregateLabelWidth;	// 8 = 0x8
    SKUIInputViewElement *_inputViewElement;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    SKUIFieldSettingDescription *_settingDescription;	// 32 = 0x20
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3;	// IMP=0x000000000001ba10
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000001b877
+ (struct CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;	// IMP=0x000000000001b861
+ (_Bool)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x000000000001b859
- (void).cxx_destruct;	// IMP=0x000000000001bfad
- (id)_currentControllerValue;	// IMP=0x000000000001bf1b
- (void)_addSubmitInputWithElement:(id)arg1;	// IMP=0x000000000001be31
- (void)_addInputWithElement:(id)arg1;	// IMP=0x000000000001bdba
- (void)layoutSubviews;	// IMP=0x000000000001bb89
- (void)tintColorDidChange;	// IMP=0x000000000001bb48
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000001bb40
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000001bb3a
- (void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000001ba26
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000001b7c1

@end
