//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBSLockScreenBackgroundContentAssertion;

@interface MRUILockScreenAssertion : NSObject
{
    SBSLockScreenBackgroundContentAssertion *_backgroundContentAssertion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000027ec
@property(retain, nonatomic) SBSLockScreenBackgroundContentAssertion *backgroundContentAssertion; // @synthesize backgroundContentAssertion=_backgroundContentAssertion;
- (void)dealloc;	// IMP=0x0010000000002793
- (void)invalidate;	// IMP=0x0010000000002739
- (void)delayAcquire;	// IMP=0x0010000000002690
- (void)acquire;	// IMP=0x001000000000247c
- (id)init;	// IMP=0x0010000000002430

@end
