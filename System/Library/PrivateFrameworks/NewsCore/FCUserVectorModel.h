//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface FCUserVectorModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00600000002ffe60
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00600000002ffdd7
+ (id)URLOfModelInThisBundle;	// IMP=0x00600000002ffa82
- (void).cxx_destruct;	// IMP=0x00000000003003e7
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003001ac
- (id)predictionFromAggregates:(id)arg1 error:(id *)arg2;	// IMP=0x000000000030011a
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002ffff7
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002fff78
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002ffd5f
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ffce7
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ffc62
- (id)init;	// IMP=0x00000000002ffc05
- (id)initWithMLModel:(id)arg1;	// IMP=0x00000000002ffb74

@end

