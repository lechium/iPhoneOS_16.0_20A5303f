//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKCalendarItemEditItemDelegate-Protocol.h>

@class EKAutocompleteSearchResult, EKEventAutocompleteResultsEditItem;

@protocol EKEventAutocompleteResultsEditItemDelegate <EKCalendarItemEditItemDelegate>

@optional
- (void)autocompleteResultsEditItem:(EKEventAutocompleteResultsEditItem *)arg1 resultSelected:(EKAutocompleteSearchResult *)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(EKEventAutocompleteResultsEditItem *)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(EKEventAutocompleteResultsEditItem *)arg1;
@end

