//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@interface CNComposeRecipient (Additions)
- (id)IDSCanonicalAddressForAddress:(id)arg1;	// IMP=0x00700000001eee91
- (id)IDSCanonicalAddress;	// IMP=0x00700000001eee0d
- (id)canonicalAddress;	// IMP=0x00700000001eedfc
- (void)setCanonicalAddress:(id)arg1;	// IMP=0x00700000001eede6
- (id)rawAddress;	// IMP=0x00700000001eed80
- (struct __CFPhoneNumber *)copyPhoneNumber;	// IMP=0x00700000001eecfd
- (_Bool)isUnnamedGroup;	// IMP=0x00700000001eecaf
- (_Bool)isNotAChildOfUnifiedRecipient;	// IMP=0x00700000001eec39
- (_Bool)isNamedGroup;	// IMP=0x00700000001eebd0
- (_Bool)isPhone;	// IMP=0x00700000001eebb6
- (_Bool)isEmail;	// IMP=0x00700000001eeb9d
@end
