//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString;
@protocol SGSuggestionsServiceMessagesProtocol;

@protocol SGMessagesSuggestionsServiceDelegate
- (NSArray *)suggestionsService:(NSObject<SGSuggestionsServiceMessagesProtocol> *)arg1 needsContextForConversationIdentifier:(NSString *)arg2 numberOfMessagesNeeded:(unsigned long long)arg3;
@end

