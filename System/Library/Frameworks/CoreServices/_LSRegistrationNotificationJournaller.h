//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSRegistrationNotificationJournaller
{
    _Bool _placeholder;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000167c82
- (id)synthesizedPreliminaryJournalledNotifications;	// IMP=0x0000000000167de5
- (_Bool)entityExists;	// IMP=0x0000000000167d89
- (_Bool)shouldExpectEntityToExist;	// IMP=0x0000000000167d81
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000167d03
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000167c8a
- (id)initWithPrimaryBundleID:(id)arg1 placeholder:(_Bool)arg2;	// IMP=0x0000000000167c3e

@end
