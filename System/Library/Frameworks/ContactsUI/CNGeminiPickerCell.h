//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNGeminiPickerCell
{
    UILabel *_labelLabel;	// 8 = 0x8
    UILabel *_valueLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004953a
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void)tintColorDidChange;	// IMP=0x0000000000049512
- (id)valueView;	// IMP=0x000000000004941b
- (id)labelView;	// IMP=0x000000000004936a
- (void)setText:(id)arg1 detailText:(id)arg2;	// IMP=0x00000000000492ae

@end

