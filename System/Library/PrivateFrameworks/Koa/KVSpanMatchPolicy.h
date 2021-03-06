//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KVSpanMatchPolicy : NSObject
{
    unsigned int _options;	// 8 = 0x8
}

- (_Bool)allowAliasMatch;	// IMP=0x000000000000ed3f
- (_Bool)prioritizeExactMatch;	// IMP=0x000000000000ed31
- (_Bool)allowApproxMatch;	// IMP=0x000000000000ed24
- (_Bool)allowPartialMatch;	// IMP=0x000000000000ed19
- (float)absoluteThreshold;	// IMP=0x000000000000ed0b
- (float)globalRelativeThreshold;	// IMP=0x000000000000ecfd
- (float)regionalRelativeThreshold;	// IMP=0x000000000000ecef
- (float)priorScoreWeight;	// IMP=0x000000000000ece1
- (float)matchScoreWeight;	// IMP=0x000000000000ecd3
- (_Bool)useTopFive;	// IMP=0x000000000000eccb
- (_Bool)enableRankingWithPriors;	// IMP=0x000000000000ecbd
- (id)description;	// IMP=0x000000000000ec46
- (id)init;	// IMP=0x000000000000ebfe
- (id)initWithOptions:(unsigned int)arg1;	// IMP=0x000000000000ebc3

@end

