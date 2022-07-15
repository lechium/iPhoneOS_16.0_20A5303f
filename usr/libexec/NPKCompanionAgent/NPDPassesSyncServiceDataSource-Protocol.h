//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NPKPassLibrarySyncState, NRDevice, NSArray, NSString, PKCatalog;

@protocol NPDPassesSyncServiceDataSource <NSObject>
@property(readonly, nonatomic) PKCatalog *passesCatalog;
- (void)removePassWithUniqueID:(NSString *)arg1 diagnosticReason:(NSString *)arg2;
- (void)addPasses:(NSArray *)arg1 withCompletionHandler:(void (^)(long long))arg2;
- (NPKPassLibrarySyncState *)passLibrarySyncStateForDevice:(NRDevice *)arg1;
@end
