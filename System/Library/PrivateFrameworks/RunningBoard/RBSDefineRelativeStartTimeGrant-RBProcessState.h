//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSDefineRelativeStartTimeGrant.h>

@interface RBSDefineRelativeStartTimeGrant (RBProcessState)
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0070000000048709
- (_Bool)preventsSuspension;	// IMP=0x0070000000048701
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000048635
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x007000000004857c
@end
