//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLGazetteer;

__attribute__((visibility("hidden")))
@interface NLModelImplG
{
    NLGazetteer *_gazetteer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000004fe3
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000004ed7
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000004eba
- (id)modelData;	// IMP=0x0000000000004e9d
- (id)gazetteer;	// IMP=0x0000000000004e88
- (unsigned long long)systemVersion;	// IMP=0x0000000000004e7d
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004e6f
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000004dd6
- (id)initWithGazetteer:(id)arg1;	// IMP=0x0000000000004d68

@end
