//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISTransform3DGrader;

@interface PBPasteAuthority : NSObject
{
    UISTransform3DGrader *_transformGrader;	// 8 = 0x8
    unsigned long long _copyAlienExpiryPeriod;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000078c0
- (unsigned long long)accessToPasteboard:(id)arg1 auditTokenInfo:(id)arg2 authenticationMessage:(id)arg3 dataOwner:(long long)arg4;	// IMP=0x001000000000752c
- (unsigned long long)pasteLegibleForPasteboard:(id)arg1 authenticationMessage:(id)arg2 auditTokenInfo:(id)arg3;	// IMP=0x00100000000069c9
- (unsigned long long)isPasteAuthenticForAuthenticationMessage:(id)arg1 auditTokenInfo:(id)arg2 currentTimestamp:(unsigned long long)arg3;	// IMP=0x0010000000006544
- (unsigned long long)isPasteNativeForPasteboard:(id)arg1 auditTokenInfo:(id)arg2;	// IMP=0x001000000000652c
- (unsigned long long)isPasteManageableForPasteboard:(id)arg1 auditTokenInfo:(id)arg2 dataOwner:(long long)arg3;	// IMP=0x0010000000006400
- (unsigned long long)isPasteTimelyForPasteboard:(id)arg1 currentTimestamp:(unsigned long long)arg2;	// IMP=0x0010000000006318
- (unsigned long long)isPasteExemptForPasteboard:(id)arg1 auditTokenInfo:(id)arg2;	// IMP=0x00100000000062be
- (id)init;	// IMP=0x0010000000006189

@end
