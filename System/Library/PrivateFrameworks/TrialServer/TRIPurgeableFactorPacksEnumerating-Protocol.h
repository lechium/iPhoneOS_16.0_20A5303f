//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialServer/NSObject-Protocol.h>

@class NSSet;

@protocol TRIPurgeableFactorPacksEnumerating <NSObject>
- (void)enumerateRolloutFactorPackPurgeCandidatesFromNamespaceNames:(NSSet *)arg1 purgeableFactorFilterBlock:(_Bool (^)(NSString *, NSString *))arg2 block:(void (^)(TRIPurgeableFactorPack *, NSDictionary *, _Bool *))arg3;
@end
