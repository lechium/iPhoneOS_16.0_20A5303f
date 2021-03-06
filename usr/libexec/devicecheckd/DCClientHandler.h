//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface DCClientHandler : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000029f8
- (void)appAttestationIsSupportedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000028bd
- (void)appAttestationAssert:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000027f7
- (void)appAttestationAttestKey:(id)arg1 keyId:(id)arg2 clientDataHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002731
- (void)appAttestationCreateKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000026a3
- (id)_stringValueForEntitlement:(id)arg1;	// IMP=0x001000000000263f
- (id)_generateAppIDFromCurrentConnection;	// IMP=0x00100000000023d0
- (_Bool)_isSupported;	// IMP=0x001000000000238d
- (void)isSupportedDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000233f
- (void)baaSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000212d
- (void)baaSignaturesForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001ea5
- (void)fetchOpaqueBlobWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001cbe
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000001c64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

