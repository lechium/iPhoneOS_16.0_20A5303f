//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class FPXPCSanitizer;

@interface NSXPCConnection (Sanitization)
@property(readonly, nonatomic) FPXPCSanitizer *fp_sanitizer;
- (id)fp_applicationGroups;	// IMP=0x00300000000d1315
- (id)fp_bundleIdentifier;	// IMP=0x00300000000d100c
- (id)fp_bundleURL;	// IMP=0x00300000000d0f05
- (_Bool)fp_hasOneOfEntitlements:(id)arg1 nonSandboxedAccess:(_Bool)arg2 logLevel:(unsigned long long)arg3;	// IMP=0x00300000000d0af1
- (_Bool)fp_hasOneOfEntitlements:(id)arg1 logLevel:(unsigned long long)arg2;	// IMP=0x00300000000d0ad7
- (_Bool)fp_hasOneOfEntitlements:(id)arg1;	// IMP=0x00300000000d0ac3
- (id)fp_valueForEntitlement:(id)arg1;	// IMP=0x00300000000d0ab1
- (_Bool)fp_isNonSandboxedConnection;	// IMP=0x00300000000d0aa9
- (_Bool)fp_hasSandboxAccessToFile:(id)arg1 accessType:(const char *)arg2 logLevel:(unsigned long long)arg3;	// IMP=0x00300000000d001c
- (_Bool)fp_hasSandboxAccessToFile:(id)arg1 logLevel:(unsigned long long)arg2;	// IMP=0x00300000000d0000
- (_Bool)fp_hasSandboxAccessToFile:(id)arg1;	// IMP=0x00300000000cffec
@end

