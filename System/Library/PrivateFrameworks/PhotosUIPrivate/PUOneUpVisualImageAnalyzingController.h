//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUBrowsingViewModel, PXVisualIntelligenceManager;

__attribute__((visibility("hidden")))
@interface PUOneUpVisualImageAnalyzingController : NSObject
{
    PUBrowsingViewModel *_browsingViewModel;	// 8 = 0x8
    PXVisualIntelligenceManager *_visualImageManager;	// 16 = 0x10
}

+ (void)_setVisualImageAnalysis:(id)arg1 forAssetViewModel:(id)arg2;	// IMP=0x001000000002ce0b
- (void).cxx_destruct;	// IMP=0x000000000002c117
@property(readonly, nonatomic) PXVisualIntelligenceManager *visualImageManager; // @synthesize visualImageManager=_visualImageManager;
@property(readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)_cancelVKImageAnalysisForAssetViewModel:(id)arg1;	// IMP=0x000000000002bfa8
- (void)_requestVKImageAnalysisByCurrentVideoFrameForAssetViewModel:(id)arg1;	// IMP=0x000000000002ba64
- (void)_requestVKImageAnalysisForAssetViewModel:(id)arg1;	// IMP=0x000000000002b814
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000002b43c
- (id)initWithBrowsingViewModel:(id)arg1;	// IMP=0x000000000002b313
- (id)init;	// IMP=0x000000000002b299

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

