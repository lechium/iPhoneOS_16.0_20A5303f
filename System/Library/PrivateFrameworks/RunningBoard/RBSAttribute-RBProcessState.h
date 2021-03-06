//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAttribute (RBProcessState)
+ (_Bool)allowedForPrimitiveAttributeForProcessTarget:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000004e73e
- (_Bool)preventsSuspension;	// IMP=0x001000000004ea2b
- (_Bool)hasMandatoryAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ea23
- (_Bool)allowedWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ea1b
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000004ea13
- (id)effectiveAttributesWithContext:(id)arg1;	// IMP=0x001000000004e9f7
- (void)applyToAcquisitionContext:(id)arg1;	// IMP=0x001000000004e9f1
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x001000000004e9eb
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x001000000004e9e5
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x001000000004e9df
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x001000000004e9d9
@end

