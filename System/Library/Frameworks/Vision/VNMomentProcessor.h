//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNMPContext;

__attribute__((visibility("hidden")))
@interface VNMomentProcessor : NSObject
{
    VNMPContext *_context;	// 8 = 0x8
}

+ (id)sortImageDescriptorsChronologically:(id)arg1;	// IMP=0x00600000000a9766
- (void).cxx_destruct;	// IMP=0x00000000000a93d6
@property(retain, nonatomic) VNMPContext *context; // @synthesize context=_context;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000000a92f2
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a91a5
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id *)arg3;	// IMP=0x00000000000a904e
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a8ef9
- (id)performClustersPostprocessing:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a8ee3
- (id)convertClusterNodesListToDescriptorsList:(vector_f43821d3)arg1;	// IMP=0x00000000000a8d96
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000a8bf6
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a8bcf
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a8afa
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000a8a16
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a8359

@end

