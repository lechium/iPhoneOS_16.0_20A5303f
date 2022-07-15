//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/SGJournalBaseObserver-Protocol.h>

@class SGStorageContact;

@protocol SGJournalContactsObserver <SGJournalBaseObserver>
- (void)removeAllStoredPseudoContacts;
- (void)rejectContact:(SGStorageContact *)arg1;
- (void)confirmContact:(SGStorageContact *)arg1;
- (void)addContact:(SGStorageContact *)arg1;
@end
