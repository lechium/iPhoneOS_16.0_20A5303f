//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLDataProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLSplitDataProvider : NLDataProvider
{
    NLDataProvider *_dataProvider;	// 104 = 0x68
    NSArray *_indexes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000003e18b
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x000000000003e16e
- (unsigned long long)numberOfLabels;	// IMP=0x000000000003e151
- (id)documentFrequencyMap;	// IMP=0x000000000003e134
- (id)vocabularyMap;	// IMP=0x000000000003e117
- (id)inverseLabelMap;	// IMP=0x000000000003e0fa
- (id)labelMap;	// IMP=0x000000000003e0dd
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x000000000003e0c0
- (void)_generateMaps;	// IMP=0x000000000003e0ba
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003e03b
- (unsigned long long)numberOfInstances;	// IMP=0x000000000003e01e
- (id)configuration;	// IMP=0x000000000003e001
- (id)initWithDataProvider:(id)arg1 indexes:(id)arg2;	// IMP=0x000000000003df4c

@end

