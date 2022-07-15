//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, SearchHomeDataSource;

@interface MapsAppTestCitySelector
{
    NSMutableSet *_updatedDataFetchers;	// 8 = 0x8
    unsigned long long _numberOfDataFetchers;	// 16 = 0x10
    SearchHomeDataSource *_searchHomeDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000007e920e
@property(retain, nonatomic) SearchHomeDataSource *searchHomeDataSource; // @synthesize searchHomeDataSource=_searchHomeDataSource;
@property(nonatomic) unsigned long long numberOfDataFetchers; // @synthesize numberOfDataFetchers=_numberOfDataFetchers;
@property(retain, nonatomic) NSMutableSet *updatedDataFetchers; // @synthesize updatedDataFetchers=_updatedDataFetchers;
- (void)_dispatchAfterShortDelay:(CDUnknownBlockType)arg1;	// IMP=0x00100000007e90e7
- (void)runScrollTest;	// IMP=0x00100000007e8e6c
- (void)continueAfterCollectingDataFromDataFetchers;	// IMP=0x00100000007e8c70
- (void)didUpdateDataFetcher:(id)arg1;	// IMP=0x00100000007e8ad0
- (_Bool)runTest;	// IMP=0x00100000007e8701
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x00100000007e86a4

@end
