//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrackingAvoidance/NSObject-Protocol.h>

@class NSURL;

@protocol TAPersistenceManagerObserver <NSObject>

@optional
- (void)didReadFromURL:(NSURL *)arg1 bytes:(unsigned long long)arg2;
- (void)didWriteToURL:(NSURL *)arg1 bytes:(unsigned long long)arg2;
@end
