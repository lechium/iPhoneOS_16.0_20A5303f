//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSString;

@interface BKNamespaceNode : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSObject *_object;	// 16 = 0x10
    NSMutableOrderedSet *_subnodes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000091ef9
- (void)setSubnodes:(id)arg1;	// IMP=0x0010000000091ee8
- (id)subnodes;	// IMP=0x0010000000091ede
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_dumpNodeTree:(id)arg1 level:(long long)arg2;	// IMP=0x0010000000091c06
- (id)_enumerateKeyPathNodesByComponent:(id)arg1 options:(long long)arg2 ifFound:(CDUnknownBlockType)arg3 ifMissing:(CDUnknownBlockType)arg4;	// IMP=0x00100000000917cc
- (void)_enumerateNodesWithOptions:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091641
- (void)dumpNodeTree;	// IMP=0x0010000000091629
- (id)enumerateKeyPathNodes:(id)arg1 options:(long long)arg2 ifFound:(CDUnknownBlockType)arg3 ifMissing:(CDUnknownBlockType)arg4;	// IMP=0x0010000000091579
- (void)enumerateNodesWithOptions:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091567
- (id)setObject:(id)arg1 atKeyPath:(id)arg2;	// IMP=0x00100000000914e7
- (id)objectAtKeyPath:(id)arg1;	// IMP=0x0010000000091497
- (id)nodeAtKeyPath:(id)arg1;	// IMP=0x001000000009147d
- (void)removeNodeAtKeyPath:(id)arg1;	// IMP=0x0010000000091343
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009123d
- (unsigned long long)hash;	// IMP=0x0010000000091227
- (id)description;	// IMP=0x0010000000091213
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000000910e2
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000091092
- (id)succinctDescriptionBuilder;	// IMP=0x0010000000091076
- (id)succinctDescription;	// IMP=0x0010000000091026
- (id)init;	// IMP=0x0010000000090fd0

@end

