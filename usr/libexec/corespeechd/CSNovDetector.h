//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSNovDetector : NSObject
{
}

- (id)getOptionValue:(id)arg1;	// IMP=0x004000000007022d
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;	// IMP=0x0010000000070225
- (id)getBestAnalyzedResult;	// IMP=0x001000000007021d
- (id)getAnalyzedResultForPhId:(unsigned int)arg1;	// IMP=0x0010000000070215
- (unsigned int)numResultsAvailable;	// IMP=0x001000000007020d
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0010000000070207
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0010000000070201
- (void)resetBest;	// IMP=0x00100000000701fb
- (void)reset;	// IMP=0x00100000000701f5
- (void)dealloc;	// IMP=0x00100000000701c6
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;	// IMP=0x0010000000070197

@end

