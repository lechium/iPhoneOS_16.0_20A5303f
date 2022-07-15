//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionContext : NSExtensionContext
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000010aa4d
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x001000000010aa1d
- (void)pickerDidCancel;	// IMP=0x000000000010b249
- (void)pickerDidCompleteWithNewContact:(id)arg1;	// IMP=0x000000000010b14c
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x000000000010b028
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x000000000010af04
- (void)pickerDidSelectAddNewContact;	// IMP=0x000000000010ae2c
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x000000000010adc2
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000010acfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
