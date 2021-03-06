//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLProtectionSpace.h>

@class NSString, NSURL;

@interface NSURLProtectionSpace (SafariCoreExtras)
+ (id)safari_HTMLFormProtectionSpaceForURL:(id)arg1;	// IMP=0x0020000000064bf6
@property(readonly, nonatomic) _Bool safari_allowsCredentialSaving;
- (_Bool)isEqualToProtectionSpaceForPasswordManager:(id)arg1;	// IMP=0x001000000006569c
- (id)safari_creationDateOfCredentialWithUser:(id)arg1;	// IMP=0x00100000000654b6
@property(readonly, nonatomic) NSURL *safari_URL;
@property(readonly, copy, nonatomic) NSString *safari_identityPreferenceDomain;
@property(readonly, copy, nonatomic) NSString *safari_userVisibleSiteForProtectionSpace;
@property(readonly, nonatomic) NSString *safari_addressString;
- (long long)safari_compareToHighLevelDomainFromProtectionSpace:(id)arg1;	// IMP=0x00100000000650c3
- (long long)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:(id)arg1;	// IMP=0x0010000000064f07
@property(readonly, nonatomic) NSURLProtectionSpace *safari_protectionSpaceByReplacingHostWithHighlevelDomain;
@property(readonly, nonatomic) const struct __CFString *safari_protocolAsSecAttrProtocolValue;
@end

