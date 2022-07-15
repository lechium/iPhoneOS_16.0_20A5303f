//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceViewController
{
}

- (void)_logPrivacyAccountingAccessEvent;	// IMP=0x000000000010a742
- (void)pickerDidCancel;	// IMP=0x000000000010a705
- (void)pickerDidCompleteWithNewContact:(id)arg1;	// IMP=0x000000000010a5dd
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x000000000010a107
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x0000000000109f6c
- (void)pickerDidSelectAddNewContact;	// IMP=0x0000000000109f1f
- (id)_filteredProperty:(id)arg1;	// IMP=0x0000000000109daa
- (id)_filteredContact:(id)arg1 withKeys:(id)arg2;	// IMP=0x0000000000109cb6
- (id)init;	// IMP=0x0000000000109c6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
