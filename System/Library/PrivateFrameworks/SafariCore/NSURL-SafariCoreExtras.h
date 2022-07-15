//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SafariCoreExtras)
+ (struct _NSRange)safari_hostAndPortRangeFromUserTypedString:(id)arg1;	// IMP=0x0020000000066233
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000065c55
+ (id)safari_URLWithUserTypedString:(id)arg1;	// IMP=0x0020000000065858
- (_Bool)safari_isEligibleforDirectSSO;	// IMP=0x00100000000669a5
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;	// IMP=0x00100000000668f1
@property(readonly, nonatomic) _Bool safari_isHTTPFamilyURL;
@property(readonly, nonatomic) NSString *safari_displayNameForFile;
@property(readonly, nonatomic) NSURL *safari_canonicalURL;
- (_Bool)safari_hasSameSiteAsURL:(id)arg1;	// IMP=0x00100000000665aa
- (_Bool)safari_hasSameOriginAsURL:(id)arg1;	// IMP=0x0010000000066421
- (_Bool)safari_isSubdomainOfDomain:(id)arg1;	// IMP=0x00100000000659aa
- (id)_labelsOfDomainWithoutWWWOrMSubdomains:(id)arg1;	// IMP=0x0010000000065883
@end
