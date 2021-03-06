//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrintKEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0060000000095ecb
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0060000000095e42
+ (id)URLOfModelInThisBundle;	// IMP=0x0060000000095aed
- (void).cxx_destruct;	// IMP=0x00000000000964ff
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000096265
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000961d3
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000096062
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000095fe3
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000095dca
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000095d52
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000095ccd
- (id)init;	// IMP=0x0000000000095c70
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000095bdf

@end

