//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface VOTImageExplorerImageView : UIImageView
{
    NSArray *_visionFeatures;	// 8 = 0x8
    NSDictionary *_elements;	// 16 = 0x10
    NSArray *_axSortedElements;	// 24 = 0x18
    NSMutableArray *_ocrFeatures;	// 32 = 0x20
    NSMutableArray *_objectClassificationFeatures;	// 40 = 0x28
    NSMutableArray *_sceneClassificationFeatures;	// 48 = 0x30
    NSMutableArray *_faceFeatures;	// 56 = 0x38
    NSMutableArray *_peopleFeatures;	// 64 = 0x40
    NSMutableDictionary *_imageExplorerRotorCache;	// 72 = 0x48
    NSArray *_filteredRowFeatures;	// 80 = 0x50
    NSArray *_filteredColumnFeatures;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000000d3bb
@property(retain, nonatomic) NSArray *filteredColumnFeatures; // @synthesize filteredColumnFeatures=_filteredColumnFeatures;
@property(retain, nonatomic) NSArray *filteredRowFeatures; // @synthesize filteredRowFeatures=_filteredRowFeatures;
@property(retain, nonatomic) NSMutableDictionary *imageExplorerRotorCache; // @synthesize imageExplorerRotorCache=_imageExplorerRotorCache;
@property(retain, nonatomic) NSMutableArray *peopleFeatures; // @synthesize peopleFeatures=_peopleFeatures;
@property(retain, nonatomic) NSMutableArray *faceFeatures; // @synthesize faceFeatures=_faceFeatures;
@property(retain, nonatomic) NSMutableArray *sceneClassificationFeatures; // @synthesize sceneClassificationFeatures=_sceneClassificationFeatures;
@property(retain, nonatomic) NSMutableArray *objectClassificationFeatures; // @synthesize objectClassificationFeatures=_objectClassificationFeatures;
@property(retain, nonatomic) NSMutableArray *ocrFeatures; // @synthesize ocrFeatures=_ocrFeatures;
@property(retain, nonatomic) NSArray *axSortedElements; // @synthesize axSortedElements=_axSortedElements;
@property(retain, nonatomic) NSDictionary *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSArray *visionFeatures; // @synthesize visionFeatures=_visionFeatures;
- (id)_accessibilityCustomContentForFeature:(id)arg1;	// IMP=0x001000000000c7f0
- (id)_axNearbyRelationsForFeature:(id)arg1;	// IMP=0x001000000000bf6f
- (id)_axNearbyRelationKeyForFeature:(id)arg1 andNeighborFeature:(id)arg2;	// IMP=0x001000000000bc31
- (id)_axRelationOfCurrentFrame:(struct CGRect)arg1 withNeighborFrame:(struct CGRect)arg2;	// IMP=0x001000000000bad6
- (id)sortedElements;	// IMP=0x001000000000ba27
- (id)imageExplorerRotorWithName:(id)arg1;	// IMP=0x001000000000b4ef
- (_Bool)addElement:(id)arg1 toElements:(id)arg2 forFeatureKey:(id)arg3;	// IMP=0x001000000000b403
- (id)_findPeopleFeatureThatOverlapsWithFace:(id)arg1;	// IMP=0x001000000000aecd
- (id)_generateFaceAccessibilityElements;	// IMP=0x001000000000a9a0
- (id)_generateObjectClassificationAccessibilityElements;	// IMP=0x001000000000a59a
- (id)_generateOCRTextAccessibilityElementsForFeature:(id)arg1;	// IMP=0x001000000000a12b
- (id)_generateOCRDocumentAccessibilityElements;	// IMP=0x00100000000098de
- (id)generateAccessibilityElements;	// IMP=0x001000000000975c
- (id)explorableOCRTypes;	// IMP=0x001000000000974f
- (_Bool)_accessibilityShouldIncludeRegionDescription;	// IMP=0x0010000000009747
- (_Bool)_accessibilityShouldIncludeRemoteParentCustomActions;	// IMP=0x001000000000973f
- (unsigned int)_accessibilityMediaAnalysisOptions;	// IMP=0x0010000000009737
- (id)accessibilityElements;	// IMP=0x0010000000009725
- (id)accessibilityCustomRotors;	// IMP=0x001000000000929f
- (_Bool)isAccessibilityElement;	// IMP=0x0010000000009257
- (id)filteredSubfeaturesForFeature:(id)arg1 withOCRType:(long long)arg2;	// IMP=0x001000000000916d

@end

