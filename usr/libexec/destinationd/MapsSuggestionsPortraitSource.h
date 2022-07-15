//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

@class MapsSuggestionsPortrait, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsPortraitSource : MapsSuggestionsBaseSource
{
    MapsSuggestionsPortrait *_portrait;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (unsigned long long)disposition;	// IMP=0x0020000000010323
+ (_Bool)isEnabled;	// IMP=0x001000000001030c
- (void).cxx_destruct;	// IMP=0x002000000001194b
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;	// IMP=0x001000000001183c
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000011644
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;	// IMP=0x0010000000011244
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001123c
- (_Bool)canProduceEntriesOfType:(long long)arg1;	// IMP=0x001000000001122f
- (double)updateSuggestionEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010845
- (void)stop;	// IMP=0x00100000000107d2
- (void)start;	// IMP=0x001000000001075f
- (id)initFromResourceDepot:(id)arg1 name:(id)arg2;	// IMP=0x00100000000103f5
- (id)initWithPortrait:(id)arg1 delegate:(id)arg2 name:(id)arg3;	// IMP=0x001000000001032e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
