//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSDomainAttribute.h>

@interface RBSDomainAttribute (RBProcessState)
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x007000000007743a
- (void)applyToAcquisitionContext:(id)arg1;	// IMP=0x00700000000772d8
- (id)effectiveAttributesWithContext:(id)arg1;	// IMP=0x00700000000770d4
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000076e22
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000076a67
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000076850
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000076298
@end

