//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SDShareSheetProxyLoaderChangeDetails : NSObject
{
    NSMutableArray *_proxySections;	// 8 = 0x8
    NSMutableDictionary *_resultsBySectionType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000016f69b
@property(retain, nonatomic) NSMutableDictionary *resultsBySectionType; // @synthesize resultsBySectionType=_resultsBySectionType;
@property(retain, nonatomic) NSMutableArray *proxySections; // @synthesize proxySections=_proxySections;
- (id)failedIndexesForProxySection:(id)arg1;	// IMP=0x001000000016f57c
- (id)loadedIndexesForProxySection:(id)arg1;	// IMP=0x001000000016f493
- (void)addResult:(id)arg1 forProxySection:(id)arg2;	// IMP=0x001000000016f29f
@property(readonly, nonatomic) NSArray *changedProxySections;
- (id)init;	// IMP=0x001000000016f1bd

@end
