//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface EKiMIPCancel
{
    NSArray *_attendees;	// 16 = 0x10
    NSData *_attachmentData;	// 24 = 0x18
}

+ (_Bool)shouldSendEmailForEvent:(id)arg1 removedAttendees:(id *)arg2;	// IMP=0x006000000012d05e
- (void).cxx_destruct;	// IMP=0x000000000012d4b8
- (int)icsMethod;	// IMP=0x000000000012d4ad
- (id)emailAttachmentName;	// IMP=0x000000000012d4a0
- (id)emailBody;	// IMP=0x000000000012d36e
- (id)emailSubject;	// IMP=0x000000000012d28b
- (id)attendees;	// IMP=0x000000000012d276
- (id)attachmentData;	// IMP=0x000000000012d261
- (id)initWithEvent:(id)arg1 andAttendees:(id)arg2;	// IMP=0x000000000012d185

@end

