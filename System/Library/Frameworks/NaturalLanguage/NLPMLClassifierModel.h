//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLModel.h"

@class MLModelDescription;

__attribute__((visibility("hidden")))
@interface NLPMLClassifierModel : NLModel
{
    MLModelDescription *_modelDescription;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002f15e
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002ee5b
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002ead3
@property(readonly, copy) MLModelDescription *modelDescription;

@end

