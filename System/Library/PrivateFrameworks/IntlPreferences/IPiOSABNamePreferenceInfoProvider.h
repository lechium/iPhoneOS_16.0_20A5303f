//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IPiOSABNamePreferenceInfoProvider : NSObject
{
}

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;	// IMP=0x001000000000a524
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;	// IMP=0x001000000000a482
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;	// IMP=0x001000000000a3ff
+ (id)canonicalNameToNativeKeyName;	// IMP=0x001000000000a33c
+ (id)nativeKeyNameToCanonicalKeyName;	// IMP=0x001000000000a247
+ (id)domain;	// IMP=0x001000000000a23a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

