//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMescalFairPlay : NSObject
{
    _Bool _complete;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (id)_dataWithFairPlayBytes:(const char *)arg1 length:(unsigned int)arg2;	// IMP=0x00000000001ddab2
- (void)_teardownSession;	// IMP=0x00000000001ddaa8
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001dd90e
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001dd774
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001dd5b3
- (id)primingSignatureForData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001dd3f2
- (id)exchangeData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001dd231
- (void)dealloc;	// IMP=0x00000000001dd202
- (id)initWithMescalType:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000001dd1d3

@end

