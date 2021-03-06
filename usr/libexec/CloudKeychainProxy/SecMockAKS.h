//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x002000000000d405
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x001000000000d3f9
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000d357
+ (void)resetDecryptRefKeyFailures;	// IMP=0x001000000000d30f
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000d255
+ (void)unlockAllClasses;	// IMP=0x001000000000d1e5
+ (void)lockClassA_C;	// IMP=0x001000000000d175
+ (void)lockClassA;	// IMP=0x001000000000d105
+ (_Bool)useGenerationCount;	// IMP=0x001000000000d0fd
+ (_Bool)isSEPDown;	// IMP=0x001000000000d0f5
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x001000000000d0ed
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000d0e5
+ (_Bool)isLocked:(int)arg1;	// IMP=0x001000000000d010
+ (void)reset;	// IMP=0x001000000000cfa0
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000cf94
+ (unsigned int)keybag_state;	// IMP=0x001000000000cf88
+ (id)mutabilityQueue;	// IMP=0x001000000000cf58
+ (id)lockedStates;	// IMP=0x001000000000cf0b
+ (void)trapdoor;	// IMP=0x001000000000cee7

@end

