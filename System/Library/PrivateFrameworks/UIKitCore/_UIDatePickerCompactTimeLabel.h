//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter, NSDictionary, NSString, NSTextContentStorage, UILabel, UIPointerInteraction, UIView, _UIDatePickerCalendarTime, _UIDatePickerOverlayPresentation, _UIPassthroughScrollInteraction, _UITextLayoutControllerBase;
@protocol _UIDatePickerCompactTimeLabelDelegate, _UITextLayoutController;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCompactTimeLabel
{
    struct {
        unsigned int needsLabelUpdateOnResignFirstResponder:1;
        unsigned int deferringHoverStateUpdate:1;
        unsigned int highlightedForTouch:1;
    } _flags;	// 184 = 0xb8
    struct CGRect _hourRect;	// 192 = 0xc0
    struct CGRect _minuteRect;	// 224 = 0xe0
    struct CGRect _timeOfDayRect;	// 256 = 0x100
    NSDateFormatter *_formatter;	// 288 = 0x120
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;	// 296 = 0x128
    NSTextContentStorage *_textContentStorage;	// 304 = 0x130
    long long _highlightedScope;	// 312 = 0x138
    UIView *_touchHighlightedView;	// 320 = 0x140
    _Bool _tapInteractionControlledExternally;	// 328 = 0x148
    id <_UIDatePickerCompactTimeLabelDelegate> _selectionDelegate;	// 336 = 0x150
    _UIDatePickerOverlayPresentation *_overlayPresentation;	// 344 = 0x158
    _UIDatePickerCalendarTime *_selectedTime;	// 352 = 0x160
    NSDictionary *_overrideAttributes;	// 360 = 0x168
    UIPointerInteraction *_pointerInteraction;	// 368 = 0x170
    UILabel *_label;	// 376 = 0x178
    UILabel *_hourLabel;	// 384 = 0x180
    UILabel *_minuteLabel;	// 392 = 0x188
    UILabel *_timeOfDayLabel;	// 400 = 0x190
    UIView *_inputBackgroundView;	// 408 = 0x198
    unsigned long long _currentState;	// 416 = 0x1a0
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x0000000000e6cc88
@property(readonly, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // @synthesize passthroughInteraction=_passthroughInteraction;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(readonly, nonatomic) UILabel *timeOfDayLabel; // @synthesize timeOfDayLabel=_timeOfDayLabel;
@property(readonly, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(readonly, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(retain, nonatomic) NSDictionary *overrideAttributes; // @synthesize overrideAttributes=_overrideAttributes;
@property(nonatomic) _Bool tapInteractionControlledExternally; // @synthesize tapInteractionControlledExternally=_tapInteractionControlledExternally;
@property(readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime; // @synthesize selectedTime=_selectedTime;
@property(retain, nonatomic) _UIDatePickerOverlayPresentation *overlayPresentation; // @synthesize overlayPresentation=_overlayPresentation;
@property(nonatomic) __weak id <_UIDatePickerCompactTimeLabelDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000e6cb4b
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000e6c9e5
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000e6c75d
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000e6c55c
- (long long)_inputScopeForPointerLocation:(struct CGPoint)arg1;	// IMP=0x0000000000e6c46c
- (void)_expandedComponentRectForHours:(struct CGRect *)arg1 minuteRect:(struct CGRect *)arg2 timeOfDayRect:(struct CGRect *)arg3;	// IMP=0x0000000000e6bf9c
- (void)timeLabelDidEndEditing:(id)arg1;	// IMP=0x0000000000e6bf50
- (void)timeLabelDidBeginEditing:(id)arg1;	// IMP=0x0000000000e6bf04
- (void)timeLabelDidResignFirstResponder:(id)arg1;	// IMP=0x0000000000e6beac
- (void)timeLabelDidFailToBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e6be98
- (void)timeLabelDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e6be81
- (void)timeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e6be35
- (_Bool)timeLabelCanBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000e6be2d
- (_Bool)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1;	// IMP=0x0000000000e6be25
- (long long)keyboardTypeForTimeLabel:(id)arg1;	// IMP=0x0000000000e6be1a
- (void)timeLabel:(id)arg1 didUpdateText:(id)arg2;	// IMP=0x0000000000e6be08
- (_Bool)timeLabel:(id)arg1 didReceiveText:(id)arg2;	// IMP=0x0000000000e6ba83
- (_Bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x0000000000e6b9e9
- (_Bool)passthroughScrollInteractionDidRecognize:(id)arg1;	// IMP=0x0000000000e6b9d7
@property(nonatomic, getter=isPassthroughInteractionEnabled) _Bool passthroughInteractionEnabled;
- (void)_updateSelectedDateComponentsFromInput;	// IMP=0x0000000000e6b7e6
- (void)_updateInputFieldFromSelectedDateComponents;	// IMP=0x0000000000e6b579
- (void)willBeginWritingInScribbleInteraction;	// IMP=0x0000000000e6b53a
- (void)_reloadWithDate:(id)arg1 notify:(_Bool)arg2;	// IMP=0x0000000000e6b432
- (void)reloadWithDate:(id)arg1;	// IMP=0x0000000000e6b41e
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 displaysTimeZone:(_Bool)arg3;	// IMP=0x0000000000e6b165
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e6af76
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000e6aed1
- (void)activateLabel;	// IMP=0x0000000000e6ab2c
- (void)didTapInputLabel:(id)arg1;	// IMP=0x0000000000e6a908
- (id)_currentDateForInput;	// IMP=0x0000000000e6a79a
- (void)_updateLayoutRectsForRanges:(CDStruct_a33ff3ce)arg1;	// IMP=0x0000000000e6a1d3
- (void)_updateInputFieldLayoutForCurrentState;	// IMP=0x0000000000e69f34
- (void)_updateTimeFormatIfNeeded;	// IMP=0x0000000000e69d3e
- (void)stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x0000000000e69cdd
- (void)pushCurrentStateIntoUIAndNotify;	// IMP=0x0000000000e69c61
- (void)pushCurrentStateIntoUI;	// IMP=0x0000000000e69a9a
- (id)updateHoverLabelForAttributedString:(id)arg1 ranges:(CDStruct_a33ff3ce)arg2;	// IMP=0x0000000000e697e0
- (void)_updateHoverStateLabelsIfNeeded;	// IMP=0x0000000000e695bc
- (void)setHighlightedForTouch:(_Bool)arg1;	// IMP=0x0000000000e69470
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;	// IMP=0x0000000000e692ad
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x0000000000e69298
- (void)applyTextAttributesForState:(unsigned long long)arg1 inputScope:(long long)arg2 updater:(CDUnknownBlockType)arg3;	// IMP=0x0000000000e6909f
@property(nonatomic) double minimumScaleFactor;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)_updateEnabledStyling;	// IMP=0x0000000000e68dc4
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000e68d83
- (id)font;	// IMP=0x0000000000e68d33
- (void)setFont:(id)arg1;	// IMP=0x0000000000e68cb4
- (struct CGRect)timeOfDayRect;	// IMP=0x0000000000e68c27
- (struct CGRect)minuteRect;	// IMP=0x0000000000e68b9a
- (struct CGRect)hourRect;	// IMP=0x0000000000e68b0d
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;	// IMP=0x0000000000e68054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

