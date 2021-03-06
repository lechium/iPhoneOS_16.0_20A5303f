//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelLibrarySearchRequest, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject
{
    NSArray *_resultContainers;	// 8 = 0x8
    MPModelLibrarySearchRequest *_request;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000267427
@property(copy, nonatomic) MPModelLibrarySearchRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSArray *resultContainers; // @synthesize resultContainers=_resultContainers;
- (long long)searchWeightForIndexPath:(id)arg1;	// IMP=0x00000000002670ea
- (_Bool)hasMoreResultsForSectionAtIndex:(long long)arg1;	// IMP=0x0000000000266f2e
- (id)identifiersForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000266c49
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x00000000002667ea
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x00000000002665fb
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000266593
- (unsigned long long)numberOfSections;	// IMP=0x000000000026657d
- (id)initWithEntitiesQueryResultContainers:(id)arg1;	// IMP=0x00000000002664de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

