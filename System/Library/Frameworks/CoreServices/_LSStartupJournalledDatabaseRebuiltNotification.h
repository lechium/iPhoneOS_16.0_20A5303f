//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSStartupJournalledDatabaseRebuiltNotification : NSObject
{
}

+ (id)sharedNotification;	// IMP=0x001000000015d2f4
- (void)dispatchToObserver:(id)arg1 forInstallProgressService:(id)arg2;	// IMP=0x000000000015d349

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

