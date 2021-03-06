//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <KnowledgeGraphKit/MANodeCollection.h>

@interface SIKGNodes : MANodeCollection
{
    unsigned long long _nodeIdentifier;	// 8 = 0x8
}

+ (id)nodesWithIdentifier:(unsigned long long)arg1 inGraph:(id)arg2;	// IMP=0x00200000000254ce
+ (id)nodesWithNode:(id)arg1 inGraph:(id)arg2;	// IMP=0x0010000000024f31
+ (id)subsetInCollection:(id)arg1;	// IMP=0x0010000000024e53
+ (id)nodesInGraph:(id)arg1;	// IMP=0x0010000000024d75
+ (id)filter;	// IMP=0x0010000000024d4a
+ (id)labels;	// IMP=0x0010000000024c2e
+ (Class)nodeClass;	// IMP=0x0010000000024c1d
@property(nonatomic) unsigned long long nodeIdentifier; // @synthesize nodeIdentifier=_nodeIdentifier;
- (id)phones;	// IMP=0x0010000000025db0
- (id)emails;	// IMP=0x0010000000025d25
- (id)rawNames;	// IMP=0x0010000000025c9a
- (id)displayNames;	// IMP=0x0010000000025c0f
- (id)nameKeys;	// IMP=0x0010000000025b84
- (id)references;	// IMP=0x0010000000025af9
- (id)contacts;	// IMP=0x0010000000025a6e
- (id)persons;	// IMP=0x00100000000259e3
- (id)users;	// IMP=0x0010000000025958
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000258e5
- (_Bool)isEqualToNodes:(id)arg1;	// IMP=0x00100000000257e4
- (id)initWithNode:(id)arg1 inGraph:(id)arg2;	// IMP=0x001000000002564a
- (void)enumerateNodesInGraph:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025386

@end

