//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDDeadEndExtensionSession : NSObject
{
    _Bool hasFileProviderPresenceTCCAccess;	// 8 = 0x8
    _Bool hasFileProviderAttributionMDMAccess;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool hasFileProviderAttributionMDMAccess; // @synthesize hasFileProviderAttributionMDMAccess;
@property(nonatomic) _Bool hasFileProviderPresenceTCCAccess; // @synthesize hasFileProviderPresenceTCCAccess;
- (void)dumpStateTo:(id)arg1;	// IMP=0x00000000000a481d
- (void)invalidate;	// IMP=0x00000000000a4817
- (void)cancel;	// IMP=0x00000000000a4811
- (void)terminateWithReason:(id)arg1;	// IMP=0x00000000000a480b
- (void)start;	// IMP=0x00000000000a4805
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;	// IMP=0x00000000000a47ff
- (void)unregisterLifetimeExtensionForObject:(id)arg1;	// IMP=0x00000000000a47f9
- (void)registerLifetimeExtensionForObject:(id)arg1;	// IMP=0x00000000000a47f3
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000a47ed
- (id)newFileProviderProxyWithTimeout:(double)arg1 pid:(int)arg2;	// IMP=0x00000000000a4752
- (id)existingFileProviderProxyWithTimeout:(double)arg1 onlyAlreadyLifetimeExtended:(_Bool)arg2 pid:(int)arg3;	// IMP=0x00000000000a4736

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

