//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNMemeClassifier
{
    int _modelDrop;	// 12 = 0xc
}

+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x0060000000234f7a
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x0060000000234f31
+ (id)modelNameForConfiguration:(id)arg1;	// IMP=0x0060000000234ee8
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0060000000234e85
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x00000000002352ae
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x00000000002352a3
- (id)sceneLabelsFileName;	// IMP=0x0000000000235285
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x0000000000235220
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000023515c
- (id)supportedIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000235138

@end

