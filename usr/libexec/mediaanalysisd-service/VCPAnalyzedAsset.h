//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, VCPFingerprint;

@interface VCPAnalyzedAsset : NSObject
{
    int _version;	// 8 = 0x8
    NSString *_localIdentifier;	// 16 = 0x10
    NSDate *_dateModified;	// 24 = 0x18
    NSDate *_dateAnalyzed;	// 32 = 0x20
    unsigned long long _types;	// 40 = 0x28
    unsigned long long _flags;	// 48 = 0x30
    unsigned long long _statsFlags;	// 56 = 0x38
    VCPFingerprint *_fingerprint;	// 64 = 0x40
}

+ (id)assetWithLocalIdentifier:(id)arg1 version:(int)arg2 dateModified:(id)arg3 dateAnalyzed:(id)arg4 types:(unsigned long long)arg5 flags:(unsigned long long)arg6 statsFlags:(unsigned long long)arg7 masterFingerprint:(id)arg8 adjustedFingerprint:(id)arg9;	// IMP=0x004000000001d7c3
- (void).cxx_destruct;	// IMP=0x002000000001d993
@property(readonly) VCPFingerprint *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(readonly) unsigned long long statsFlags; // @synthesize statsFlags=_statsFlags;
@property(readonly) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly) unsigned long long types; // @synthesize types=_types;
@property(readonly) NSDate *dateAnalyzed; // @synthesize dateAnalyzed=_dateAnalyzed;
@property(readonly) NSDate *dateModified; // @synthesize dateModified=_dateModified;
@property(readonly) int version; // @synthesize version=_version;
@property(readonly) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (_Bool)isDegraded;	// IMP=0x001000000001d90e
- (_Bool)isDeletePending;	// IMP=0x001000000001d900
- (void)updateLocalIdentifier:(id)arg1;	// IMP=0x001000000001d8ef
- (id)initWithLocalIdentifier:(id)arg1 version:(int)arg2 dateModified:(id)arg3 dateAnalyzed:(id)arg4 types:(unsigned long long)arg5 flags:(unsigned long long)arg6 statsFlags:(unsigned long long)arg7 masterFingerprint:(id)arg8 adjustedFingerprint:(id)arg9;	// IMP=0x001000000001d640

@end
