//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface MapsAppTestCuratedCollectionDetail
{
    NSMutableSet *_updatedDataFetchers;	// 8 = 0x8
    unsigned long long _numberOfDataFetchers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000a5f994
@property(nonatomic) unsigned long long numberOfDataFetchers; // @synthesize numberOfDataFetchers=_numberOfDataFetchers;
@property(retain, nonatomic) NSMutableSet *updatedDataFetchers; // @synthesize updatedDataFetchers=_updatedDataFetchers;
- (void)_performScrollTestOfScrollView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a5f821
- (void)_dispatchAfterShortDelay:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a5f766
- (void)_scrollCuratedCollection;	// IMP=0x0010000000a5f631
- (void)_selectAndScrollCuratedCollection;	// IMP=0x0010000000a5f499
- (void)_selectAndScrollCuratedCollectionDetail;	// IMP=0x0010000000a5f437
- (void)didUpdateDataFetcher:(id)arg1;	// IMP=0x0010000000a5f297
- (void)_enterSearchModeAndPerformCuratedCollectionDetailsScrollTest;	// IMP=0x0010000000a5ef1e
- (void)_startTestAndPerformScrollTest;	// IMP=0x0010000000a5eef0
- (_Bool)runTest;	// IMP=0x0010000000a5edee

@end

