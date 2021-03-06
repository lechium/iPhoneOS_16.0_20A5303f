//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSObject, NSString, PSSpecifier;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface DeadlockMakerController : PSListController
{
    _Bool _enabled;	// 192 = 0xc0
    float _priority;	// 196 = 0xc4
    float _runDuration;	// 200 = 0xc8
    NSObject<OS_xpc_object> *_connection;	// 208 = 0xd0
    PSSpecifier *_textSpec;	// 216 = 0xd8
    PSSpecifier *_prioritySlider;	// 224 = 0xe0
    PSSpecifier *_priorityLabel;	// 232 = 0xe8
    PSSpecifier *_runDurationText;	// 240 = 0xf0
    PSSpecifier *_runDurationSlider;	// 248 = 0xf8
    PSSpecifier *_runDurationLabel;	// 256 = 0x100
    PSSpecifier *_startNowButton;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000004f1b
- (void)launchSpinForeverD:(id)arg1;	// IMP=0x0000000000004dfa
- (void)triggerTimeout;	// IMP=0x0000000000004dcd
- (_Bool)startConnectionIfNeeded;	// IMP=0x0000000000004c5a
- (void)stopConnectionIfNeeded;	// IMP=0x0000000000004bb7
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000049d5
- (void)handleSliderTouchUpEvent:(id)arg1;	// IMP=0x0000000000004859
- (void)handleSliderChangedEvent:(id)arg1;	// IMP=0x0000000000004727
- (id)specifiers;	// IMP=0x00000000000040cb
- (id)runDurationText:(id)arg1;	// IMP=0x000000000000409d
- (id)runDuration:(id)arg1;	// IMP=0x0000000000004075
- (void)setRunDuration:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000000406f
- (id)priorityText:(id)arg1;	// IMP=0x0000000000004041
- (id)priority:(id)arg1;	// IMP=0x0000000000004019
- (void)setPriority:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000004013
- (id)init;	// IMP=0x0000000000003edd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

