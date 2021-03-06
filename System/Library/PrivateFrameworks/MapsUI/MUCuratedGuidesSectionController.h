//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MKUGCCallToActionViewAppearance, MUCuratedCollectionsPlacecardAnalyticsManager, MUCuratedGuidesSectionView, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSArray, NSString, UIView, UIViewController;
@protocol MKPlaceCollectionsDelegate, MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUCuratedGuidesSectionController : MUPlaceSectionController
{
    MUPlaceSectionView *_sectionView;	// 8 = 0x8
    MUCuratedGuidesSectionView *_carouselView;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 32 = 0x20
    MUCuratedCollectionsPlacecardAnalyticsManager *_analyticsManager;	// 40 = 0x28
    id <MKPlaceCollectionsDelegate> _collectionsDelegate;	// 48 = 0x30
    NSArray *_collectionIds;	// 56 = 0x38
    NSArray *_placeCollections;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007691e
@property(retain, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
@property(retain, nonatomic) NSArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(nonatomic) __weak id <MKPlaceCollectionsDelegate> collectionsDelegate; // @synthesize collectionsDelegate=_collectionsDelegate;
@property(retain, nonatomic) MUCuratedCollectionsPlacecardAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) MUCuratedGuidesSectionView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)isImpressionable;	// IMP=0x0000000000076845
- (int)analyticsModuleType;	// IMP=0x000000000007683a
- (_Bool)shouldShowMoreButton;	// IMP=0x0000000000076708
- (id)_sectionHeaderTitle;	// IMP=0x000000000007666b
- (void)_seeAllTapped;	// IMP=0x00000000000765a9
- (void)refreshCollections;	// IMP=0x000000000007658c
- (id)draggableContent;	// IMP=0x0000000000076584
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
- (void)exploreGuidesButtonTapped;	// IMP=0x000000000007647a
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x00000000000763fd
- (void)collectionsCarouselDidScrollBackward;	// IMP=0x00000000000763c0
- (void)collectionsCarouselDidScrollForward;	// IMP=0x0000000000076383
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000076324
@property(readonly, nonatomic) UIView *sectionView;
- (void)_setupCollectionView;	// IMP=0x00000000000762c0
- (void)_setupViews;	// IMP=0x00000000000760f1
- (id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5 exploreGuides:(id)arg6;	// IMP=0x0000000000075eb1

// Remaining properties
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

