//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDataCollectionSearchSession : NSObject
{
    _Bool _pendingResults;	// 8 = 0x8
    _Bool _pendingSuggestionsResults;	// 9 = 0x9
}

+ (id)currentSession;	// IMP=0x00600000001cf92a
+ (void)end;	// IMP=0x00600000001cf90d
+ (void)begin;	// IMP=0x00600000001cf888
@property(nonatomic) _Bool pendingSuggestionsResults; // @synthesize pendingSuggestionsResults=_pendingSuggestionsResults;
@property(nonatomic) _Bool pendingResults; // @synthesize pendingResults=_pendingResults;
- (void)didSelectResult:(id)arg1;	// IMP=0x00000000001cf7ee
- (void)didFetchResultSuggested:(_Bool)arg1;	// IMP=0x00000000001cf70b
- (void)searchStringDidChange;	// IMP=0x00000000001cf6d3

@end
