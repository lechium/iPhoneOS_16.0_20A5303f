//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PICompositionExporter;

@interface PhotosAdjustmentsVideoTranscodingTask
{
    PICompositionExporter *_photosAdjustmentsCompositionExporter;	// 152 = 0x98
    NSProgress *_progress;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000001c880
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) PICompositionExporter *photosAdjustmentsCompositionExporter; // @synthesize photosAdjustmentsCompositionExporter=_photosAdjustmentsCompositionExporter;
- (void)dumpStatistics;	// IMP=0x001000000001c5a2
- (void)cancelTranscode;	// IMP=0x001000000001c436
- (double)currentFractionCompleted;	// IMP=0x001000000001c335
- (_Bool)hasProgress;	// IMP=0x001000000001c302
- (CDUnknownBlockType)photosAdjustmentsExporterCompletionHandler;	// IMP=0x001000000001c2b4
- (_Bool)requiresPhotosAdjustmentsFinalization;	// IMP=0x001000000001c1dd
- (void)performExport;	// IMP=0x001000000001aeaf

@end

