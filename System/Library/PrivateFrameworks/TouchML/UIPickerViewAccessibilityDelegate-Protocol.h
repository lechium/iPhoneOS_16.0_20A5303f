//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TouchML/UIPickerViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIPickerView;

@protocol UIPickerViewAccessibilityDelegate <UIPickerViewDelegate>

@optional
- (NSArray *)pickerView:(UIPickerView *)arg1 accessibilityAttributedUserInputLabelsForComponent:(long long)arg2;
- (NSAttributedString *)pickerView:(UIPickerView *)arg1 accessibilityAttributedHintForComponent:(long long)arg2;
- (NSAttributedString *)pickerView:(UIPickerView *)arg1 accessibilityAttributedLabelForComponent:(long long)arg2;
- (NSArray *)pickerView:(UIPickerView *)arg1 accessibilityUserInputLabelsForComponent:(long long)arg2;
- (NSString *)pickerView:(UIPickerView *)arg1 accessibilityHintForComponent:(long long)arg2;
- (NSString *)pickerView:(UIPickerView *)arg1 accessibilityLabelForComponent:(long long)arg2;
@end
