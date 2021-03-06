//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSUUID, TabSnapshotCache;

@protocol TabSnapshotCacheObserving <NSObject>
- (void)tabSnapshotCacheDidFinishUpdating:(TabSnapshotCache *)arg1;
- (void)tabSnapshotCache:(TabSnapshotCache *)arg1 didEvictSnapshotWithIdentifier:(NSUUID *)arg2;
- (void)tabSnapshotCache:(TabSnapshotCache *)arg1 didCacheSnapshotWithIdentifier:(NSUUID *)arg2;
@end

