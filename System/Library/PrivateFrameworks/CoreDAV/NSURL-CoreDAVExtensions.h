//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)arg1;	// IMP=0x008000000003a81a
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;	// IMP=0x008000000003a071
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;	// IMP=0x0080000000039f7b
- (_Bool)CDVIsSafeRedirectForRequestURL:(id)arg1;	// IMP=0x001000000003b559
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;	// IMP=0x001000000003b493
- (id)CDVFileSystemSafePath;	// IMP=0x001000000003b38f
- (_Bool)CDVIsEqualToURL:(id)arg1;	// IMP=0x001000000003b270
- (id)CDVServerURLWithPath:(_Bool)arg1;	// IMP=0x001000000003b11b
- (id)CDVServerURL;	// IMP=0x001000000003af5c
- (id)CDVURLByDeletingLastPathComponent;	// IMP=0x001000000003ae92
- (id)CDVRawLastPathComponentPreservingEscapes;	// IMP=0x001000000003ae42
- (id)CDVRawLastPathComponent;	// IMP=0x001000000003ad71
- (id)CDVRawPath;	// IMP=0x001000000003ad51
- (id)CDVPassword;	// IMP=0x001000000003ad01
- (id)CDVURLWithPath:(id)arg1;	// IMP=0x001000000003ab9a
- (id)CDVURLWithPassword:(id)arg1;	// IMP=0x001000000003aa2e
- (id)CDVURLWithUser:(id)arg1;	// IMP=0x001000000003a8c9
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 query:(id)arg7 fragment:(id)arg8;	// IMP=0x001000000003a3bc
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;	// IMP=0x001000000003a390
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(_Bool)arg7;	// IMP=0x001000000003a13a
@end

