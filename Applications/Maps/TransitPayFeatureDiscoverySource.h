//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, PaymentPolygonCache, TransitPassManager, TransitPayFeatureDiscoveryMetadataStore, TransitPayModelData;
@protocol MapsLocationUpdater, MapsSuggestionsInsights, OS_dispatch_queue, PaymentPolygonFetcher, TransitPayActionDelegate;

@interface TransitPayFeatureDiscoverySource : NSObject
{
    id <MapsSuggestionsInsights> _msgInsights;	// 8 = 0x8
    id <PaymentPolygonFetcher> _paymentPolygonFetcher;	// 16 = 0x10
    id <MapsLocationUpdater> _locationUpdater;	// 24 = 0x18
    TransitPayFeatureDiscoveryMetadataStore *_dataStore;	// 32 = 0x20
    TransitPassManager *_passManager;	// 40 = 0x28
    TransitPayModelData *_modelData;	// 48 = 0x30
    unsigned long long _currentMarketMUID;	// 56 = 0x38
    PaymentPolygonCache *_polygonCache;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    _Bool _active;	// 80 = 0x50
    _Bool hasInitialData;	// 81 = 0x51
    _Bool _showFeature;	// 82 = 0x52
    GEOObserverHashTable *_observers;	// 88 = 0x58
    id <TransitPayActionDelegate> _transitPayActionDelegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000194c84
@property(nonatomic) __weak id <TransitPayActionDelegate> transitPayActionDelegate; // @synthesize transitPayActionDelegate=_transitPayActionDelegate;
@property(nonatomic) _Bool showFeature; // @synthesize showFeature=_showFeature;
@property(readonly, nonatomic) _Bool hasInitialData; // @synthesize hasInitialData;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)paymentSetupViewController:(id)arg1 didFinishAddingPaymentPasses:(id)arg2 error:(id)arg3;	// IMP=0x0010000000194a7e
- (void)fetchTransitMessageFromPassManagerUsingPolygon:(id)arg1;	// IMP=0x001000000019471d
- (void)didUpdateLocation:(id)arg1;	// IMP=0x0010000000193ec4
- (_Bool)_hasPaymentAndSuggestionsData:(id)arg1 error:(id)arg2;	// IMP=0x0010000000193c7c
- (void)_notifyObservers;	// IMP=0x0010000000193c5b
- (void)_fetchInsightsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001935be
- (void)updateFeatureEligibility;	// IMP=0x0010000000193239
- (void)transitPassManagerDidChange:(id)arg1;	// IMP=0x0010000000193178
@property(readonly, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
- (id)transitPayDiscoveryModel;	// IMP=0x0010000000192917
- (void)dealloc;	// IMP=0x00100000001928d5
- (id)initWithInsights:(id)arg1 paymentPolygonFetcher:(id)arg2 locationUpdater:(id)arg3 isActive:(_Bool)arg4;	// IMP=0x00100000001927b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

