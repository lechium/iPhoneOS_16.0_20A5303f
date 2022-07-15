//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSHTTPCookieStorage.h"

@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage
{
    unsigned long long _acceptPolicy;	// 16 = 0x10
    _Bool _behavesLikeNS;	// 24 = 0x18
    NSHTTPCookie2Storage *_store;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000038830
- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;	// IMP=0x00000000000387ce
- (unsigned long long)cookieAcceptPolicy;	// IMP=0x00000000000387bd
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;	// IMP=0x0000000000038749
- (void)removeCookiesSinceDate:(id)arg1;	// IMP=0x0000000000038685
- (void)deleteCookie:(id)arg1;	// IMP=0x000000000003856e
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038453
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003843d
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000038120
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;	// IMP=0x0000000000037f9c
- (void)getCookiesForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037a17
- (id)cookiesForURL:(id)arg1;	// IMP=0x0000000000037743
- (id)cookies;	// IMP=0x0000000000037629
- (void)_saveCookies;	// IMP=0x00000000000375c7
- (void)_saveCookies:(CDUnknownBlockType)arg1;	// IMP=0x000000000003752e
- (void)storeCookies:(id)arg1 forTask:(id)arg2;	// IMP=0x000000000003706e
- (void)_testingOfStoringOfCookie:(id)arg1;	// IMP=0x0000000000036d84
- (void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4;	// IMP=0x0000000000036913
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;	// IMP=0x00000000000368fe
- (void)setCookie:(id)arg1;	// IMP=0x00000000000367bf
- (void)dealloc;	// IMP=0x000000000003673b
- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;	// IMP=0x0000000000036732
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x00000000000366d5
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;	// IMP=0x000000000003663b
- (id)init;	// IMP=0x000000000003658e

@end
