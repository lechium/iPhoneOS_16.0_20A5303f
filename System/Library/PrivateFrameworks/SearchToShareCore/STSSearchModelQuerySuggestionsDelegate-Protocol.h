//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchToShareCore/NSObject-Protocol.h>

@class STSSearchModel;

@protocol STSSearchModelQuerySuggestionsDelegate <NSObject>

@optional
- (void)searchModelUpdatedQuerySuggestions:(STSSearchModel *)arg1;
- (void)searchModelWillFetchQuerySuggestionsCompletions:(STSSearchModel *)arg1;
@end

