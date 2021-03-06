//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRRecentContactsLibrary;

@interface MailboxFrecencyController : NSObject
{
    CRRecentContactsLibrary *_library;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0040000000034170
- (void).cxx_destruct;	// IMP=0x0020000000035a4a
- (void)removeAllDataBelongingToAccount:(id)arg1;	// IMP=0x0010000000035499
- (id)orderedArrayOfSources:(id)arg1;	// IMP=0x0010000000034e12
- (id)orderedMailboxUidsForAccount:(id)arg1;	// IMP=0x001000000003492b
- (id)_rankedMailboxURLs;	// IMP=0x0010000000034616
- (id)_mailboxURLQuery;	// IMP=0x001000000003448e
- (void)recordEventWithMailboxURLString:(id)arg1;	// IMP=0x00100000000342ee
- (id)initWithLibrary:(id)arg1;	// IMP=0x001000000003425c

@end

