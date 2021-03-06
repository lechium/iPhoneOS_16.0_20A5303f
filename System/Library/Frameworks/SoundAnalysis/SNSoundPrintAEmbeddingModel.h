//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrintAEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000008cf97
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000008cf0e
+ (id)URLOfModelInThisBundle;	// IMP=0x006000000008cbb9
- (void).cxx_destruct;	// IMP=0x000000000008d51e
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008d2e3
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008d251
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008d12e
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008d0af
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008ce96
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008ce1e
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008cd99
- (id)init;	// IMP=0x000000000008cd3c
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000008ccab

@end

