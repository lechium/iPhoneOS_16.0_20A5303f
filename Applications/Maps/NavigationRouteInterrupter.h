//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsEngine, NSString;

@interface NavigationRouteInterrupter : NSObject
{
    MapsSuggestionsEngine *_suggestionsEngine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000007d4581
@property(readonly, nonatomic) MapsSuggestionsEngine *suggestionsEngine; // @synthesize suggestionsEngine=_suggestionsEngine;
- (void)interruptHistoryEntryRoute:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000007d41e3
- (id)initWithSuggestionsEngine:(id)arg1;	// IMP=0x00100000007d4178

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

