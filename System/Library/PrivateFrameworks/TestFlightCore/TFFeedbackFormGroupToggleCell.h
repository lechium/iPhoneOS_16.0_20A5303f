//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TFFeedbackEntryGroupToggle, UISwitch;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormGroupToggleCell
{
    UISwitch *_toggleSwitch;	// 8 = 0x8
    TFFeedbackEntryGroupToggle *_groupToggleEntry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f88f
@property(retain, nonatomic) TFFeedbackEntryGroupToggle *groupToggleEntry; // @synthesize groupToggleEntry=_groupToggleEntry;
@property(readonly, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
- (void)didUpdateToggleSwitchValue:(id)arg1;	// IMP=0x000000000000f778
- (void)setDisplayedDataGroupInclusionBool:(_Bool)arg1;	// IMP=0x000000000000f72c
- (unsigned long long)displayableDataType;	// IMP=0x000000000000f721
- (void)applyContentsOfEntry:(id)arg1;	// IMP=0x000000000000f64d
- (void)prepareForReuse;	// IMP=0x000000000000f60a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000f54b

@end
