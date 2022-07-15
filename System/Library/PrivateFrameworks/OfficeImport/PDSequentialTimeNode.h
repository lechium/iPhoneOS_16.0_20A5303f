//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDSequentialTimeNode
{
    _Bool mConcurrent;	// 168 = 0xa8
    int mPreviousAction;	// 172 = 0xac
    int mNextAction;	// 176 = 0xb0
    NSMutableArray *mPreviousConditions;	// 184 = 0xb8
    NSMutableArray *mNextConditions;	// 192 = 0xc0
}

+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1;	// IMP=0x00600000004442f5
+ (id)newSequentialTimeNodeGroupForAnimationInfo;	// IMP=0x00600000004442c5
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2;	// IMP=0x0060000000443d61
+ (unsigned long long)buildPartsFromTarget:(id)arg1;	// IMP=0x0060000000443be0
+ (id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2;	// IMP=0x0060000000443a3d
- (void).cxx_destruct;	// IMP=0x0000000000442eb3
@property(retain, nonatomic) NSMutableArray *nextConditions; // @synthesize nextConditions=mNextConditions;
@property(retain, nonatomic) NSMutableArray *previousConditions; // @synthesize previousConditions=mPreviousConditions;
@property(nonatomic) int nextAction; // @synthesize nextAction=mNextAction;
@property(nonatomic) int previousAction; // @synthesize previousAction=mPreviousAction;
@property(nonatomic) _Bool concurrent; // @synthesize concurrent=mConcurrent;
@property(retain, nonatomic) NSString *groupId;
@property(nonatomic) double direction;
@property(nonatomic) double delay;
@property(nonatomic) int iterateType;
@property(nonatomic) int triggerType;
@property(nonatomic) int presetId;
@property(nonatomic) int presetClass;
- (void)setLevel2ParallelAttribute:(CDUnknownBlockType)arg1;	// IMP=0x00000000004449c4
@property(retain, nonatomic) PDAnimationTarget *target;
- (id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3;	// IMP=0x00000000004444b6
- (id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2;	// IMP=0x00000000004443c8
- (id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1;	// IMP=0x0000000000444309

@end
