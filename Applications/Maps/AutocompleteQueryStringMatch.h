//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AutocompleteQueryStringMatch : NSObject
{
    NSArray *_queryTerms;	// 8 = 0x8
    NSArray *_stringTerms;	// 16 = 0x10
    NSArray *_matchingTerms;	// 24 = 0x18
    unsigned long long _totalMatchLength;	// 32 = 0x20
    double _fractionOfMatch;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000003a5825
@property(readonly, nonatomic) double fractionOfMatch; // @synthesize fractionOfMatch=_fractionOfMatch;
@property(readonly, nonatomic) unsigned long long totalMatchLength; // @synthesize totalMatchLength=_totalMatchLength;
@property(readonly, copy, nonatomic) NSArray *matchingTerms; // @synthesize matchingTerms=_matchingTerms;
@property(readonly, copy, nonatomic) NSArray *stringTerms; // @synthesize stringTerms=_stringTerms;
@property(readonly, copy, nonatomic) NSArray *queryTerms; // @synthesize queryTerms=_queryTerms;
- (id)initWithQueryTerms:(id)arg1 stringTerms:(id)arg2 matchingTerms:(id)arg3 totalMatchLength:(unsigned long long)arg4 fractionOfMatch:(double)arg5;	// IMP=0x00100000003a56f1
- (id)init;	// IMP=0x00100000003a56c6

@end

