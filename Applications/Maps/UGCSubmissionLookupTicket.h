//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MKMapServiceFeedbackReportTicket;

@interface UGCSubmissionLookupTicket : NSObject
{
    id <MKMapServiceFeedbackReportTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000374ebe
- (void)cancel;	// IMP=0x0010000000374ea8
- (void)_removeSavedMUID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000374cfc
- (void)fetchSubmissionForMuid:(unsigned long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000373ed9

@end
