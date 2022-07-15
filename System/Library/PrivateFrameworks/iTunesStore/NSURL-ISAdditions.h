//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (ISAdditions)
+ (id)_URLQueryParameterValueAllowedCharacterSet;	// IMP=0x0050000000005650
+ (id)unescapedStringForString:(id)arg1;	// IMP=0x00500000000045cb
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(_Bool)arg2;	// IMP=0x00500000000043b9
+ (id)escapedStringForString:(id)arg1;	// IMP=0x0050000000004336
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(_Bool)arg2;	// IMP=0x005000000000408b
- (void)enumerateQueryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005344
- (id)urlByReplacingSchemeWithScheme:(id)arg1;	// IMP=0x0010000000005245
- (id)schemeSwizzledURL;	// IMP=0x0010000000004f25
- (_Bool)isSafeExternalURL;	// IMP=0x0010000000004cbd
- (id)urlBySettingQueryStringDictionary:(id)arg1;	// IMP=0x00100000000047de
- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;	// IMP=0x0010000000004693
- (id)copyQueryStringDictionaryWithUnescapedValues:(_Bool)arg1;	// IMP=0x0010000000004637
- (id)sanitizedURL;	// IMP=0x0010000000025104
@end
