//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, _TtC9appstored14UpdatesContext;

@interface PerformUpdatesTask
{
    NSMutableArray *_updatesPurchases;	// 8 = 0x8
    NSMutableArray *_jobResultItems;	// 16 = 0x10
    _TtC9appstored14UpdatesContext *_context;	// 24 = 0x18
    NSArray *_orderedBundleIDs;	// 32 = 0x20
}

+ (void)_handlePotentialProvisionedApp:(id)arg1 itemID:(id)arg2 status:(long long)arg3 logKey:(id)arg4;	// IMP=0x0040000000081b10
+ (id)_addItemIDToArrayIfNotPresent:(id)arg1 array:(id)arg2;	// IMP=0x0010000000081a29
+ (long long)performUpdatePurchases:(id)arg1 logKey:(id)arg2 isBackgroundRequest:(_Bool)arg3 requestToken:(id)arg4 jobResults:(id)arg5 error:(id *)arg6;	// IMP=0x001000000007fe4a
- (void).cxx_destruct;	// IMP=0x0020000000084574
@property(copy, nonatomic) NSArray *orderedBundleIDs; // @synthesize orderedBundleIDs=_orderedBundleIDs;
@property(retain, nonatomic) _TtC9appstored14UpdatesContext *context; // @synthesize context=_context;
- (unsigned long long)_performPurchaseBatch:(id)arg1 forAccount:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000083d75
- (void)_displayCellularDialogsIfNecessary;	// IMP=0x0010000000081f8d
- (void)_performAccountPurchases:(id)arg1;	// IMP=0x0010000000081b16
- (void)main;	// IMP=0x0010000000080caa
@property(readonly, nonatomic) NSArray *jobResults;
- (id)initWithContext:(id)arg1;	// IMP=0x001000000007fd40

@end
