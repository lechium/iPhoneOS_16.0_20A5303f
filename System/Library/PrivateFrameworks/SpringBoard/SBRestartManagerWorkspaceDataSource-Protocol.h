//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol SBRestartManagerWorkspaceDataSource <NSObject>
- (_Bool)isUILocked;
- (NSString *)activePrimaryApplicationBundleID;
- (void)terminateAllApplicationsForReason:(long long)arg1 description:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
@end

