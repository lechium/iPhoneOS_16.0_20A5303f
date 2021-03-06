//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC4Maps36PlaceSummaryViewModelTemplateFactory : NSObject
{
}

+ (id)addAPlaceSearchViewModel;	// IMP=0x0020000000072f70
+ (id)addAPlaceAutocompleteViewModel;	// IMP=0x0010000000072f60
+ (id)viewModelWithMapsSuggestionsEntry:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x0010000000072f40
+ (id)viewModelWithSearchResult:(id)arg1 highlightConfiguration:(id)arg2 currentLocation:(id)arg3 availableWidth:(double)arg4 searchAlongRoute:(_Bool)arg5;	// IMP=0x0010000000072b00
+ (id)viewModelWithCoreRecentContact:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x0010000000071f50
+ (id)viewModelWithAddressBookAddress:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x0010000000071360
+ (id)viewModelWithHistoryEntryPlaceDisplay:(id)arg1 highlightConfiguration:(id)arg2 availableWidth:(double)arg3 currentLocation:(id)arg4 searchAlongRoute:(_Bool)arg5;	// IMP=0x0010000000070f20
+ (id)viewModelWithHistoryEntrySearch:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x0010000000070300
+ (id)viewModelWithCompletion:(id)arg1 metadata:(id)arg2 currentLocation:(id)arg3 userLocationSearchResult:(id)arg4 highlightType:(id)arg5 availableWidth:(double)arg6 clientSourceType:(long long)arg7 allowsTappableUnits:(_Bool)arg8 searchAlongRoute:(_Bool)arg9;	// IMP=0x001000000006f9e0
+ (id)viewModelWithSearchResult:(id)arg1 metadata:(id)arg2 currentLocation:(id)arg3;	// IMP=0x001000000006ee90
+ (long long)kSearchMinimumRegularLinesCount;	// IMP=0x001000000006dc80
- (id)init;	// IMP=0x0040000000073a40

@end

