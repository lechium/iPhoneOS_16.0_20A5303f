//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDSetDeclarationsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000799fc
+ (id)requiredEntitlements;	// IMP=0x0010000000079827
+ (id)whitelistedClassesForRequest;	// IMP=0x00100000000797f5
- (void)runWithRequest:(id)arg1;	// IMP=0x0040000000079847
- (_Bool)runOnMainThread;	// IMP=0x001000000007983f
- (unsigned long long)queueGroup;	// IMP=0x0010000000079834

@end

