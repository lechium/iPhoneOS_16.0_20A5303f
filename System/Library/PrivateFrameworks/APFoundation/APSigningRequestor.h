//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "APXPCActionRequester.h"

@class NSString;

@interface APSigningRequestor : APXPCActionRequester
{
}

+ (id)machService;	// IMP=0x00100000000027df
+ (_Bool)canShareConnection;	// IMP=0x00100000000027d7
- (void)connectionInvalidated;	// IMP=0x0000000000002770
- (void)connectionInterrupted;	// IMP=0x0000000000002709
- (id)remoteObjectInterface;	// IMP=0x00000000000026f8
- (void)rotate;	// IMP=0x00000000000025eb
- (void)requestCertificate:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000025e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

