//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol MapsSuggestionsSource;

@protocol MapsSuggestionsSourceDelegate <NSObject>
- (_Bool)detachSource:(id <MapsSuggestionsSource>)arg1;
- (_Bool)attachSource:(id <MapsSuggestionsSource>)arg1;
- (unsigned long long)addOrUpdateSuggestionEntries:(NSArray *)arg1 source:(NSString *)arg2;
@end
