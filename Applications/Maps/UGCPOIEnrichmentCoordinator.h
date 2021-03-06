//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ContainerViewController, MKLocationManager, MKMapItem, UGCSubmissionLookupResult, UIBarButtonItem, UIView, UIViewController;
@protocol ContaineeViewControllerDelegate, MKActivityObserving, PlaceCardDismissable, UGCPOIEnrichmentCoordinatorDelegate, UGCPOIEnrichmentPresentationDelegate, UGCPOIEnrichmentSubmissionStatusDelegate;

@interface UGCPOIEnrichmentCoordinator : NSObject
{
    MKLocationManager *_locationManager;	// 8 = 0x8
    _Bool _prefersDefaultPresentationOverContainee;	// 16 = 0x10
    UIViewController *;	// 24 = 0x18
    id <UGCPOIEnrichmentCoordinatorDelegate> _delegate;	// 32 = 0x20
    id <UGCPOIEnrichmentSubmissionStatusDelegate> _submissionStatusDelegate;	// 40 = 0x28
    id <UGCPOIEnrichmentPresentationDelegate> _presentationDelegate;	// 48 = 0x30
    MKMapItem *_mapItem;	// 56 = 0x38
    UIBarButtonItem *_anchoringBarButtonItem;	// 64 = 0x40
    UIView *_anchoringView;	// 72 = 0x48
    id <MKActivityObserving> _submissionLookupObserver;	// 80 = 0x50
    id <PlaceCardDismissable> _placeCardDismissalDelegate;	// 88 = 0x58
    long long _presentationContext;	// 96 = 0x60
    ContainerViewController *_containerViewController;	// 104 = 0x68
    id <ContaineeViewControllerDelegate> _containeeDelegate;	// 112 = 0x70
    UGCSubmissionLookupResult *_submissionLookupResult;	// 120 = 0x78
}

+ (id)photoThumbnailGalleryCoordinatorWithMapItem:(id)arg1 albumIndex:(unsigned long long)arg2;	// IMP=0x00400000001c90df
+ (id)photoThumbnailGalleryCoordinatorWithMapItem:(id)arg1 withStartingIndex:(unsigned long long)arg2;	// IMP=0x00100000001c9073
+ (id)ratingsAndPhotosCoordinatorWithMapItem:(id)arg1;	// IMP=0x00100000001c905a
+ (id)_addCoordinatorWithMapItem:(id)arg1;	// IMP=0x00100000001c9004
+ (id)photoEmphasizedAddCoordinatorWithMapItem:(id)arg1 preferredSourceType:(long long)arg2;	// IMP=0x00100000001c8fa0
+ (id)photoEmphasizedAddCoordinatorWithMapItem:(id)arg1 preferredSourceType:(long long)arg2 suppressRatings:(_Bool)arg3;	// IMP=0x00100000001c8f2a
+ (id)photoEmphasizedAddCoordinatorWithMapItem:(id)arg1;	// IMP=0x00100000001c8ee2
+ (id)ratingsAndPhotosCoordinatorWithMapItem:(id)arg1 initialOverallState:(long long)arg2;	// IMP=0x00100000001c8e90
- (void).cxx_destruct;	// IMP=0x00200000001c94fa
@property(retain, nonatomic) UGCSubmissionLookupResult *submissionLookupResult; // @synthesize submissionLookupResult=_submissionLookupResult;
@property(nonatomic) __weak id <ContaineeViewControllerDelegate> containeeDelegate; // @synthesize containeeDelegate=_containeeDelegate;
@property(nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool prefersDefaultPresentationOverContainee; // @synthesize prefersDefaultPresentationOverContainee=_prefersDefaultPresentationOverContainee;
@property(nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property(nonatomic) __weak id <PlaceCardDismissable> placeCardDismissalDelegate; // @synthesize placeCardDismissalDelegate=_placeCardDismissalDelegate;
@property(nonatomic) __weak id <MKActivityObserving> submissionLookupObserver; // @synthesize submissionLookupObserver=_submissionLookupObserver;
@property(nonatomic) __weak UIView *anchoringView; // @synthesize anchoringView=_anchoringView;
@property(nonatomic) __weak UIBarButtonItem *anchoringBarButtonItem; // @synthesize anchoringBarButtonItem=_anchoringBarButtonItem;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <UGCPOIEnrichmentPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <UGCPOIEnrichmentSubmissionStatusDelegate> submissionStatusDelegate; // @synthesize submissionStatusDelegate=_submissionStatusDelegate;
@property(nonatomic) __weak id <UGCPOIEnrichmentCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)fetchCoarsenedDeviceLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c912c
- (void)invokeCompletion;	// IMP=0x00100000001c8d9c
- (void)invokeSubmissionUpdate;	// IMP=0x00100000001c8cff
- (id)init;	// IMP=0x00100000001c8c99
- (void)present;	// IMP=0x00100000001c8c93

@end

