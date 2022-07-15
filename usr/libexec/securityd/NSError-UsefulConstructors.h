//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (UsefulConstructors)
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlying:(id)arg4;	// IMP=0x002000000002cf74
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x001000000002cf58
+ (void)setDefaultRetryIntervalForTests:(double)arg1;	// IMP=0x00100000001a8134
- (_Bool)isCKServerInternalError;	// IMP=0x00200000000b3363
- (_Bool)isCKKSServerPluginError:(long long)arg1;	// IMP=0x00100000000b316f
- (_Bool)ckksIsCKErrorRecordChangedError;	// IMP=0x00100000000b2ebb
- (double)retryInterval;	// IMP=0x00100000001a7e1c
- (double)cuttlefishRetryAfter;	// IMP=0x00100000001a7bb6
- (_Bool)isRetryable;	// IMP=0x00100000001a797b
- (_Bool)_isRetryableAKError;	// IMP=0x00100000001a78bf
- (_Bool)_isRetryableNSURLError;	// IMP=0x00100000001a7832
- (_Bool)isCuttlefishError:(long long)arg1;	// IMP=0x00100000001a7635
- (_Bool)_isCKServerInternalError;	// IMP=0x00100000001a7510
@end
