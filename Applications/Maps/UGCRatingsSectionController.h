//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSArray, NSString, UGCRatingsForm;
@protocol UGCPOIEnrichmentAnalyticsDelegate, UGCSectionControllerDelegate;

@interface UGCRatingsSectionController : NSObject
{
    UGCRatingsForm *_ratingsForm;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    NSArray *_rowItems;	// 24 = 0x18
    id <UGCSectionControllerDelegate> _delegate;	// 32 = 0x20
    id <UGCPOIEnrichmentAnalyticsDelegate> _analyticsDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000087a9ed
@property(readonly, nonatomic) __weak id <UGCPOIEnrichmentAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <UGCSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_mapItemAppleRatings;	// IMP=0x001000000087a6ef
@property(readonly, nonatomic) NSArray *rowItems; // @synthesize rowItems=_rowItems;
- (void)handleSuccessfulSubmission;	// IMP=0x0010000000879f26
- (void)ratingCategoryCellChangedState:(long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000879ed3
- (void)ratingCategoryCell:(id)arg1 presentInformedConsentIfNeededWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000879e3f
- (id)initWithRatingsForm:(id)arg1 mapItem:(id)arg2 analyticsDelegate:(id)arg3;	// IMP=0x0010000000879d87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
