//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHMemory.h>

@class NSArray;

@interface PHMemory (PhotosUICore)
+ (id)px_photosGraphDataFromProperties:(id)arg1 error:(id *)arg2;	// IMP=0x00200000003a972f
@property(readonly, nonatomic) NSArray *px_blockableFeatureActions;
- (void)px_assignStoryTitleCategoryIfNeeded;	// IMP=0x00100000003a8c77
- (id)px_mutatedPhotosGraphPropertiesWithRejectReason:(unsigned long long)arg1;	// IMP=0x00100000003a8b51
- (id)px_photosGraphDataByMutatingPropertiesUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00100000003a8a6d
- (_Bool)px_shouldUseFacesRectForSmartCropping;	// IMP=0x00100000003a8a51
@end

