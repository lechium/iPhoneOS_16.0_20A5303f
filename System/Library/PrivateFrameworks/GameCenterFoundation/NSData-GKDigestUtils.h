//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (GKDigestUtils)
+ (void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00600000000e7aa8
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 imageQueue:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00600000000e696b
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00600000000e681f
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00600000000e5edd
- (id)_gkMD5HashData;	// IMP=0x001000000001cc7f
- (id)_gkSHA1HashData;	// IMP=0x001000000001cbd5
- (id)_gkMD5HashString;	// IMP=0x001000000001cb3a
- (id)_gkSHA1HashString;	// IMP=0x001000000001ca9f
- (id)_gkZippedDictionaryValue;	// IMP=0x0010000000036059
- (id)_gkBase64EncodedString;	// IMP=0x0010000000036045
- (id)initWithBase64EncodedString_gk:(id)arg1;	// IMP=0x0010000000036031
@end
