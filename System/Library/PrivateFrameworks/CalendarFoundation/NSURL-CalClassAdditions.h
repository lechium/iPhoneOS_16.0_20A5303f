//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (CalClassAdditions)
+ (id)URLForNoTel;	// IMP=0x005000000002c073
+ (id)URLForNoMail;	// IMP=0x005000000002c053
+ (_Bool)_isValidURI:(id)arg1;	// IMP=0x005000000002bff6
+ (id)_URLForAddress:(id)arg1 scheme:(id)arg2 noAddress:(id)arg3;	// IMP=0x005000000002bdf2
+ (id)URLForTel:(id)arg1;	// IMP=0x005000000002bdd2
+ (id)URLForMail:(id)arg1;	// IMP=0x005000000002bdb2
+ (id)davCompatibleFilenameForFilename:(id)arg1;	// IMP=0x005000000002a7cb
+ (id)URLWithContactIdentifier:(id)arg1;	// IMP=0x005000000002a755
- (id)cal_hostAfterGoogleRedirects;	// IMP=0x001000000002c1a2
- (_Bool)_hasDescription:(id)arg1;	// IMP=0x001000000002c0c5
- (_Bool)isNoTel;	// IMP=0x001000000002c0ac
- (_Bool)isNoMail;	// IMP=0x001000000002c093
- (_Bool)cal_isEquivalentToPhoneNumber:(id)arg1;	// IMP=0x001000000002bcfa
- (_Bool)cal_isEquivalentToEmailAddress:(id)arg1;	// IMP=0x001000000002bc42
- (id)cal_phoneNumberString;	// IMP=0x001000000002bbfe
- (id)cal_emailAddressString;	// IMP=0x001000000002bbba
- (id)cal_resourceSpecifierNoLeadingSlashes;	// IMP=0x001000000002bb0e
- (_Bool)cal_hasSchemeTel;	// IMP=0x001000000002baf5
- (_Bool)cal_hasSchemeMailto;	// IMP=0x001000000002badc
- (_Bool)cal_caseInsensitiveHasScheme:(id)arg1;	// IMP=0x001000000002ba64
- (id)hostWithoutWWW;	// IMP=0x001000000002b93e
- (_Bool)isEqualToURLIgnoringScheme:(id)arg1;	// IMP=0x001000000002b682
- (_Bool)compareToLocalURL:(id)arg1;	// IMP=0x0010000000011684
- (_Bool)compareToLocalString:(id)arg1;	// IMP=0x001000000002b628
- (_Bool)isOnRemoteFileSystem;	// IMP=0x0010000000005b3d
- (id)unquotedPassword;	// IMP=0x001000000002b5d8
- (id)pathDecodedAndWithoutTrailingSlashRemoved;	// IMP=0x001000000002b5c6
- (id)pathWithoutTrailingRemovingSlash;	// IMP=0x001000000000c96a
- (id)serverURL;	// IMP=0x001000000002b463
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;	// IMP=0x001000000002b216
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000002af46
- (id)queryParameters;	// IMP=0x001000000002ac82
- (id)initWithCalDirtyString:(id)arg1;	// IMP=0x001000000002a8bd
@end
