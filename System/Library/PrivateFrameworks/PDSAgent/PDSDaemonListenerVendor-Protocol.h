//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDSAgent/NSObject-Protocol.h>

@class NSArray;
@protocol PDSRemote, PDSRemoteInternal;

@protocol PDSDaemonListenerVendor <NSObject>
- (id <PDSRemoteInternal>)remoteInternalListener;
- (id <PDSRemote>)remoteListenerForAllClientIDs;
- (id <PDSRemote>)remoteListenerForClientIDs:(NSArray *)arg1;
@end
