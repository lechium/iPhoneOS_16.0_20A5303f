//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface iconclassificationOutput : NSObject
{
    MLMultiArray *_leaf_leaf_predictions_probabilities;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000037400
@property(retain, nonatomic) MLMultiArray *leaf_leaf_predictions_probabilities; // @synthesize leaf_leaf_predictions_probabilities=_leaf_leaf_predictions_probabilities;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000003738c
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithLeaf_leaf_predictions_probabilities:(id)arg1;	// IMP=0x0000000000037301

@end

