//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface AUiPodEQViewController
{
    UIPickerView *picker;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002b60d
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000002b4c4
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000002b451
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000002b446
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000002b43b
- (void)priv_eventListener:(void *)arg1 event:(const struct AudioUnitEvent *)arg2 value:(float)arg3;	// IMP=0x000000000002b32c
- (void)synchronizeUIWithParameterValues;	// IMP=0x000000000002b143
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000002b131
- (void)viewDidLoad;	// IMP=0x000000000002b086

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

