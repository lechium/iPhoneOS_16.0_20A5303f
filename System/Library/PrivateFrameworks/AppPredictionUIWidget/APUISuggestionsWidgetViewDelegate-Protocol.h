//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionUIWidget/NSObject-Protocol.h>

@class APUISuggestionView, ATXProactiveSuggestion;

@protocol APUISuggestionsWidgetViewDelegate <NSObject>
- (void)view:(APUISuggestionView *)arg1 didFailExecutingSuggestion:(ATXProactiveSuggestion *)arg2;
- (void)view:(APUISuggestionView *)arg1 didFinishExecutingSuggestion:(ATXProactiveSuggestion *)arg2;
- (void)view:(APUISuggestionView *)arg1 didTapSuggestion:(ATXProactiveSuggestion *)arg2;
@end

