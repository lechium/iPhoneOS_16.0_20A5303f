//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKUGCCallToActionViewAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSArray, NSString, UIView, UIViewController;
@protocol GEOTransitLineItem, MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitLineItemSectionController : NSObject
{
    _Bool _active;	// 8 = 0x8
    UIView *_sectionView;	// 16 = 0x10
    MKUGCCallToActionViewAppearance *_submissionStatus;	// 24 = 0x18
    id <MUInfoCardAnalyticsDelegate> _analyticsDelegate;	// 32 = 0x20
    id <GEOTransitLineItem> _lineItem;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000070db4
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // @synthesize submissionStatus=_submissionStatus;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)analyticsModule;	// IMP=0x0000000000070d3d
- (id)infoCardChildUnactionableUIElements;	// IMP=0x0000000000070d30
- (id)infoCardChildPossibleActions;	// IMP=0x0000000000070d23
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
- (id)draggableContent;	// IMP=0x0000000000070d03
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(readonly, nonatomic) UIView *sectionView; // @synthesize sectionView=_sectionView;
- (id)initWithTransitLineItem:(id)arg1;	// IMP=0x0000000000070ba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
