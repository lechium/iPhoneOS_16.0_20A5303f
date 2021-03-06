//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLInputElement, NSString, UIDatePicker;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePicker : NSObject
{
    DOMHTMLInputElement *_inputElement;	// 8 = 0x8
    UIDatePicker *_datePicker;	// 16 = 0x10
    NSString *_formatString;	// 24 = 0x18
    _Bool _shouldRemoveTimeZoneInformation;	// 32 = 0x20
    _Bool _isTimeInput;	// 33 = 0x21
}

@property(retain, nonatomic) UIDatePicker *_datePicker; // @synthesize _datePicker;
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;
- (void)controlEndEditing;	// IMP=0x000000000077481b
- (void)controlBeginEditing;	// IMP=0x000000000077461a
- (id)_sanitizeInputValueForFormatter:(id)arg1;	// IMP=0x00000000007745d4
- (id)controlView;	// IMP=0x00000000007745ca
- (void)dealloc;	// IMP=0x0000000000774557
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x000000000077432a
- (void)_dateChangeHandler:(id)arg1;	// IMP=0x0000000000774318
- (void)_dateChanged;	// IMP=0x00000000007742f3
- (void)_dateChangedSetAsString;	// IMP=0x000000000077420a
- (void)_dateChangedSetAsNumber;	// IMP=0x0000000000774185
- (long long)_timeZoneOffsetFromGMT:(id)arg1;	// IMP=0x0000000000774143

@end

