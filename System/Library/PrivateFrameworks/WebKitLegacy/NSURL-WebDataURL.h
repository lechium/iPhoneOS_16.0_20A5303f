//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (WebDataURL)
+ (id)_web_uniqueWebDataURL;	// IMP=0x00800000000c8110
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x0080000000112110
+ (id)_web_URLWithDataAsString:(id)arg1;	// IMP=0x00800000001120f0
+ (id)_webkit_URLWithUserTypedString:(id)arg1;	// IMP=0x00800000001120e0
+ (id)_web_URLWithUserTypedString:(id)arg1;	// IMP=0x00800000001120d0
- (id)_webkit_URLFromURLOrSchemelessFileURL;	// IMP=0x0010000000112550
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;	// IMP=0x00100000001124c0
- (id)_web_hostString;	// IMP=0x0010000000112460
- (id)_web_hostData;	// IMP=0x00100000001123f0
- (id)_web_schemeData;	// IMP=0x00100000001123e0
- (_Bool)_webkit_isFileURL;	// IMP=0x00100000001123b0
- (id)_webkit_scriptIfJavaScriptURL;	// IMP=0x0010000000112380
- (_Bool)_webkit_isJavaScriptURL;	// IMP=0x0010000000112350
- (id)_web_URLByRemovingUserInfo;	// IMP=0x0010000000112340
- (id)_webkit_URLByRemovingFragment;	// IMP=0x0010000000112330
- (id)_webkit_canonicalize_with_wtf;	// IMP=0x00100000001122a0
- (id)_webkit_canonicalize;	// IMP=0x0010000000112290
- (const char *)_web_URLCString;	// IMP=0x0010000000112210
- (_Bool)_web_isEmpty;	// IMP=0x00100000001121c0
- (id)_web_userVisibleString;	// IMP=0x00100000001121b0
- (id)_web_originalDataAsString;	// IMP=0x0010000000112160
- (id)_web_originalData;	// IMP=0x0010000000112150
@end
