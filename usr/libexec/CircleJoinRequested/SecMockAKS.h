//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x00200000000095bd
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x00100000000095b1
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000950f
+ (void)resetDecryptRefKeyFailures;	// IMP=0x00100000000094c7
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000940d
+ (void)unlockAllClasses;	// IMP=0x001000000000939d
+ (void)lockClassA_C;	// IMP=0x001000000000932d
+ (void)lockClassA;	// IMP=0x00100000000092bd
+ (_Bool)useGenerationCount;	// IMP=0x00100000000092b5
+ (_Bool)isSEPDown;	// IMP=0x00100000000092ad
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x00100000000092a5
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000929d
+ (_Bool)isLocked:(int)arg1;	// IMP=0x00100000000091c8
+ (void)reset;	// IMP=0x0010000000009158
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000914c
+ (unsigned int)keybag_state;	// IMP=0x0010000000009140
+ (id)mutabilityQueue;	// IMP=0x0010000000009110
+ (id)lockedStates;	// IMP=0x00100000000090c3
+ (void)trapdoor;	// IMP=0x001000000000909f

@end

