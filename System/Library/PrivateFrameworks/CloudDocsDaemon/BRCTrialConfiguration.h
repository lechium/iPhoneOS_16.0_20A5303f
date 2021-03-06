//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCTrialConfiguration : NSObject
{
    _Bool ignorePercentsOnInternal;	// 8 = 0x8
    NSString *treatmentId;	// 16 = 0x10
    NSString *experimentId;	// 24 = 0x18
    long long maxFailurePerVersion;	// 32 = 0x20
    long long percentBelow1k;	// 40 = 0x28
    long long percentBelow10k;	// 48 = 0x30
    long long percentBelow100k;	// 56 = 0x38
    long long percent100kAndAbove;	// 64 = 0x40
}

+ (id)defaultConfiguration;	// IMP=0x0060000000193379
- (void).cxx_destruct;	// IMP=0x000000000019398e
@property(readonly, nonatomic) _Bool ignorePercentsOnInternal; // @synthesize ignorePercentsOnInternal;
@property(readonly, nonatomic) long long percent100kAndAbove; // @synthesize percent100kAndAbove;
@property(readonly, nonatomic) long long percentBelow100k; // @synthesize percentBelow100k;
@property(readonly, nonatomic) long long percentBelow10k; // @synthesize percentBelow10k;
@property(readonly, nonatomic) long long percentBelow1k; // @synthesize percentBelow1k;
@property(readonly, nonatomic) long long maxFailurePerVersion; // @synthesize maxFailurePerVersion;
@property(readonly, nonatomic) NSString *experimentId; // @synthesize experimentId;
@property(readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId;
- (_Bool)boolForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 byDefault:(_Bool)arg4;	// IMP=0x0000000000193880
- (long long)longLongForFactor:(id)arg1 client:(id)arg2 namespace:(id)arg3 min:(long long)arg4 max:(long long)arg5 byDefault:(long long)arg6;	// IMP=0x000000000019369c
- (void)refresh;	// IMP=0x000000000019341a
- (id)init;	// IMP=0x00000000001933ce

@end

