//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

@class MapsSuggestionsPortrait, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsAppConnectionSource : MapsSuggestionsBaseSource
{
    MapsSuggestionsPortrait *_portrait;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_appConnectionUpdateQueue;	// 16 = 0x10
}

+ (unsigned long long)disposition;	// IMP=0x00200000000418e3
+ (_Bool)isEnabled;	// IMP=0x00100000000418cc
- (void).cxx_destruct;	// IMP=0x0020000000042af8
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;	// IMP=0x00100000000426f7
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000426ef
- (_Bool)canProduceEntriesOfType:(long long)arg1;	// IMP=0x00100000000426e2
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041f89
- (void)stop;	// IMP=0x0010000000041f83
- (void);	// IMP=0x0010000000041f7d
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;	// IMP=0x0010000000041c13
- (id)initWithPortrait:(id)arg1 delegate:(id)arg2 name:(id)arg3;	// IMP=0x00100000000418ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

