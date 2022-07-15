//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class AccountCacheDBClient, NSArray, NSDictionary, NSString;

@interface RestoreDemotedApplicationsOperation : ISOperation
{
    NSArray *_bundleIDs;	// 96 = 0x60
    NSDictionary *_options;	// 104 = 0x68
    AccountCacheDBClient *_accountsCacheDB;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000088b42
- (void)_notifyCompletion;	// IMP=0x0010000000088af9
- (id)_accountIdForAppleID:(id)arg1;	// IMP=0x0010000000088a7c
- (id)_appleIDForApp:(id)arg1;	// IMP=0x0010000000088998
- (void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x0010000000087c12
- (void)run;	// IMP=0x0010000000086639
- (id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x0000000000086572

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
