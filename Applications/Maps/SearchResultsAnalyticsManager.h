//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SearchResultsAnalyticsManager : NSObject
{
}

+ (void)addAPlaceTappedWithNumberOfResults:(unsigned long long)arg1 target:(int)arg2;	// IMP=0x002000000043bffb
+ (void)didTapOnAddStopForSearchResultWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043bf6d
+ (void)didShowSearchResultsWithDataSource:(id)arg1 target:(int)arg2 query:(id)arg3 impressionsSessionIdentifier:(id)arg4;	// IMP=0x001000000043b57c
+ (void)flyoverButtonTappedOnSearchResultWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043b563
+ (void)websiteButtonTappedOnSearchResultWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043b54a
+ (void)callButtonTappedOnSearchResultWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043b531
+ (void)lookAroundButtonTappedOnSearchResultWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043b518
+ (void)directionsButtonTappedOnSearchResultWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043b4ff
+ (void)accessoryEntityTappedWithMuid:(unsigned long long)arg1 eventValue:(id)arg2;	// IMP=0x001000000043b457
+ (void)tappableEntryUnitTappedWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043b3c9
+ (void)containmentParentUnitTappedWithMuid:(unsigned long long)arg1;	// IMP=0x001000000043b33b
+ (void)curatedGuidesUnitTapped;	// IMP=0x001000000043b2e6
+ (MISSING_TYPE *)userGeneratedGuideUnitTapped;	// IMP=0x001000000043b291

@end
