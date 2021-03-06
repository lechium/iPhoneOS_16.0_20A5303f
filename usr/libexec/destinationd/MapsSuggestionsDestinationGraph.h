//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MapsSuggestionsDestinationGraph : NSObject
{
    NSMutableArray *_destinations;	// 8 = 0x8
    NSMutableArray *_destinationLinks;	// 16 = 0x10
    struct Queue _queue;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0020000000005c0c
- (void).cxx_destruct;	// IMP=0x0010000000005bd0
- (id)testing_allDestinationLinks;	// IMP=0x0010000000005b57
- (id)testing_allDestinations;	// IMP=0x0010000000005ade
- (id)objectForJSON;	// IMP=0x00100000000055c0
- (id)nameForJSON;	// IMP=0x00100000000055b3
- (id)jsonWithFormatting:(_Bool)arg1;	// IMP=0x00100000000055a7
- (_Bool)rebalance;	// IMP=0x001000000000512c
- (_Bool)addBreadcrumb:(id)arg1;	// IMP=0x00100000000044db
- (_Bool)addETA:(id)arg1 from:(id)arg2 to:(id)arg3;	// IMP=0x0010000000003deb
- (_Bool)addETA:(id)arg1 to:(id)arg2;	// IMP=0x00100000000037ad
- (id)predictedEntriesWithinPeriod:(id)arg1;	// IMP=0x0010000000003176
- (id)destinationsAtTime:(id)arg1;	// IMP=0x0010000000002d00
- (id)destinationAtLocation:(id)arg1;	// IMP=0x00100000000029e4
- (id)destinationAtMapItem:(id)arg1;	// IMP=0x0010000000002849
- (id)destinationAtEntry:(id)arg1;	// IMP=0x00100000000023ed
- (_Bool)addEntry:(id)arg1;	// IMP=0x00100000000019fc
- (id)init;	// IMP=0x00100000000018f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

