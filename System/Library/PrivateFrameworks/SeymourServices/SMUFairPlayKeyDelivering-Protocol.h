//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SMUFairPlayRemoteServerPlaybackContext;

@protocol SMUFairPlayKeyDelivering
- (NSData *)serverPlaybackContextForPlaybackContext:(NSData *)arg1 remoteContextIdentifier:(unsigned int)arg2 error:(id *)arg3;
- (SMUFairPlayRemoteServerPlaybackContext *)remoteServerPlaybackContextForCertificate:(NSData *)arg1 error:(id *)arg2;
@end

