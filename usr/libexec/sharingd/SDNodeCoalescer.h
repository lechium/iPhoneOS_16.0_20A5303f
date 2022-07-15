//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface SDNodeCoalescer : NSObject
{
    NSArray *_availableNodes;	// 8 = 0x8
    NSArray *_coalescedNodes;	// 16 = 0x10
    NSMutableDictionary *_originalNodes;	// 24 = 0x18
    NSMutableDictionary *_contactIdentifierMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000112a37
@property(retain, nonatomic) NSMutableDictionary *contactIdentifierMap; // @synthesize contactIdentifierMap=_contactIdentifierMap;
@property(retain, nonatomic) NSMutableDictionary *originalNodes; // @synthesize originalNodes=_originalNodes;
@property(readonly) NSArray *coalescedNodes; // @synthesize coalescedNodes=_coalescedNodes;
@property(retain) NSArray *availableNodes; // @synthesize availableNodes=_availableNodes;
- (id)mappedContactIdentifierForContactIdentifier:(id)arg1;	// IMP=0x00100000001129b4
- (id)setMappedContactIdentifier:(id)arg1 relatedContactIdentifiers:(id)arg2;	// IMP=0x001000000011266d
- (id)coalescedNodesForNewAvailableNodes:(id)arg1;	// IMP=0x0010000000111620
- (id)init;	// IMP=0x00100000001115ab

@end
